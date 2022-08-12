// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include <UBus/UBus.h>
#include <cstring>
#include <fstream>
#include <regex>
#include <experimental/filesystem>
#include <spdlog/spdlog.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <poll.h>

extern "C" {
#include <libubox/blobmsg.h>
#include <libubus.h>
#include <uci.h>
};

struct Ubus::UbusImpl
{
    UbusImpl()  = default;
    ~UbusImpl() = default;

    std::string FirewallZone;
    std::string Name;
    std::string Hostname;
    std::string Type;
    std::string Serial;
    std::string FirmwareVersion;
    bool ReadProperties();
    bool DeleteRedirect( const std::string& name );
    bool ClearRedirect();
    bool AddRedirect( const Command::IPortForwardingActor::PortForwardingConfiguration& config );
    bool ReloadFirewall();
    ConnectionStatusVPN StartVPN( const std::string& name, std::string& ipAddress );
    ConnectionStatusVPN StopVPN( const std::string& name );
    bool ConfigureVPN( const std::string& name, const std::string& config );
    bool GetNetworkDetails( std::vector<NetworkDetail>& details );
    bool GetVPNConfigurations( std::vector<VPNConfiguration>& config );
    bool GetPortForwardings( std::vector<PortForwardingConfiguration>& config );

    int SocketFD{ -1 };
};

Ubus::Ubus( const std::string firewallZone ) : _impl( std::make_shared<Ubus::UbusImpl>() )
{
    _impl->FirewallZone = firewallZone;
    if ( !_impl->ReadProperties() )
    {
        throw std::runtime_error( "Could not read properties from ubus" );
    }
}

Ubus::~Ubus() {}

bool Ubus::UbusImpl::DeleteRedirect( const std::string& name )
{
    struct uci_context* uci_ctx;
    struct uci_package* uci_firewall;
    struct uci_section* s;
    struct uci_element* e;
    struct uci_ptr ptr = {};
    const char* uci_name;
    bool valid = false;

    uci_ctx = uci_alloc_context();
    uci_load( uci_ctx, "firewall", &uci_firewall );

    /* Check if redirect name is deleteable */
    uci_foreach_element( &uci_firewall->sections, e )
    {
        s = uci_to_section( e );

        if ( strcmp( s->type, "redirect" ) )
            continue;

        uci_name = uci_lookup_option_string( uci_ctx, s, "name" );
        if ( !uci_name )
            continue;

        if ( name == uci_name )
            valid = true;
    }

    if ( !valid )
    {
        spdlog::info( "Redirect name not found ({}).", name );
        uci_free_context( uci_ctx );
        return false;
    }

    ptr.p = uci_firewall;
    ptr.s = s;
    ptr.o = NULL;
    uci_delete( uci_ctx, &ptr );

    uci_save( uci_ctx, uci_firewall );
    uci_commit( uci_ctx, &uci_firewall, false );

    uci_free_context( uci_ctx );

    return true;
}

bool Ubus::UbusImpl::ClearRedirect()
{
    struct uci_context* uci_ctx;
    struct uci_package* uci_firewall;
    struct uci_element* element;
    struct uci_element* tmp;

    uci_ctx = uci_alloc_context();
    uci_load( uci_ctx, "firewall", &uci_firewall );

    /* Delete all redirects */
    uci_foreach_element_safe( &uci_firewall->sections, tmp, element )
    {
        struct uci_section* s = uci_to_section( element );

        if ( strcmp( s->type, "redirect" ) )
            continue;

        struct uci_ptr p;
        memset( &p, 0, sizeof( p ) );

        /* This name variable will be changed by uci_lookup_ptr !!! */
        char name[64];
        snprintf( name, sizeof( name ), "%s.%s=%s", "firewall", (char*)s->e.name, "redirect" );

        int ret;
        ret = uci_lookup_ptr( uci_ctx, &p, name, false );

        if ( ret == UCI_OK )
            uci_delete( uci_ctx, &p );

        if ( ret != UCI_OK )
            spdlog::info( "Unable to delete redirect section {}", name );
    }

    uci_save( uci_ctx, uci_firewall );
    uci_commit( uci_ctx, &uci_firewall, false );

    uci_free_context( uci_ctx );

    return true;
}

bool Ubus::UbusImpl::AddRedirect( const Command::IPortForwardingActor::PortForwardingConfiguration& config )
{
    struct uci_context* uci_ctx;
    struct uci_package* uci_firewall;
    struct uci_section* s;
    struct uci_element* e;
    struct uci_ptr ptr = {};
    const char* uci_name;
    bool valid = true;

    uci_ctx = uci_alloc_context();
    uci_load( uci_ctx, "firewall", &uci_firewall );

    /* Check if redirect name is already set */
    uci_foreach_element( &uci_firewall->sections, e )
    {
        s = uci_to_section( e );

        if ( strcmp( s->type, "redirect" ) )
            continue;

        uci_name = uci_lookup_option_string( uci_ctx, s, "name" );
        if ( !uci_name )
            continue;

        if ( config.Name == uci_name )
            valid = false;
    }

    if ( !valid )
    {
        spdlog::info( "Redirect name already in use ({})", config.Name );
        uci_free_context( uci_ctx );
        return false;
    }

    uci_add_section( uci_ctx, uci_firewall, "redirect", &s );

    ptr.p = s->package;
    ptr.s = s;

    /* Default options for DNAT redirect on bosinet */
    ptr.o      = NULL;
    ptr.option = "src";
    ptr.value  = FirewallZone.c_str();
    uci_set( uci_ctx, &ptr );

    ptr.o      = NULL;
    ptr.option = "dest";
    ptr.value  = "lan";
    uci_set( uci_ctx, &ptr );

    ptr.o      = NULL;
    ptr.option = "target";
    ptr.value  = "DNAT";
    uci_set( uci_ctx, &ptr );

    ptr.o      = NULL;
    ptr.option = "family";
    ptr.value  = "ipv4";
    uci_set( uci_ctx, &ptr );

    ptr.o      = NULL;
    ptr.option = "proto";
    ptr.value  = "tcp udp";
    uci_set( uci_ctx, &ptr );

    /* Received options form the IoT-Hub */
    /* @todo validate redirect configuration from IoT-Hub */
    ptr.o      = NULL;
    ptr.option = "name";
    ptr.value  = config.Name.c_str();
    uci_set( uci_ctx, &ptr );

    /*
	 * The option src_ip is not used because openwrt uses a firewall
	 * zone concept. We should use instead the option src
	 */
    //	ptr.o = NULL;
    //	ptr.option = "src_ip";
    //	ptr.value  = blobmsg_get_string(redirect[REDIRECT_SRCIP]);
    //	uci_set(uci_ctx, &ptr);

    ptr.o      = NULL;
    ptr.option = "src_dport";
    ptr.value  = config.SourcePort.c_str();
    uci_set( uci_ctx, &ptr );

    ptr.o      = NULL;
    ptr.option = "dest_ip";
    ptr.value  = config.DestinationIP.c_str();
    uci_set( uci_ctx, &ptr );

    ptr.o      = NULL;
    ptr.option = "dest_port";
    ptr.value  = config.DestinationPort.c_str();
    uci_set( uci_ctx, &ptr );

    uci_save( uci_ctx, uci_firewall );
    uci_commit( uci_ctx, &uci_firewall, true );

    uci_free_context( uci_ctx );

    return true;
}


enum
{
    SYSTEM_BOARD_MODEL,
    SYSTEM_BOARD_HOSTNAME,
    SYSTEM_BOARD_SERIAL,
    SYSTEM_BOARD_RELEASE,
    __SYSTEM_BOARD_MAX
};

static const struct blobmsg_policy system_board_policy[__SYSTEM_BOARD_MAX] = {
        [SYSTEM_BOARD_MODEL]    = { .name = "model", .type = BLOBMSG_TYPE_STRING },
        [SYSTEM_BOARD_HOSTNAME] = { .name = "hostname", .type = BLOBMSG_TYPE_STRING },
        [SYSTEM_BOARD_SERIAL]   = { .name = "serial", .type = BLOBMSG_TYPE_STRING },
        [SYSTEM_BOARD_RELEASE]  = { .name = "release", .type = BLOBMSG_TYPE_TABLE },
};

static struct blob_attr* system_board = nullptr;

static void ubus_system_board_cb( struct ubus_request* req, int type, struct blob_attr* msg )
{
    spdlog::info( "Ubus system board callback invoked" );
    system_board = blob_memdup( msg );
}

bool Ubus::UbusImpl::ReadProperties()
{
    uint32_t id;
    struct ubus_context* ctx = ubus_connect( NULL );

    if ( !ctx )
    {
        spdlog::info( "Unable to connect to ubus backend" );
        return false;
    }

    if ( ubus_lookup_id( ctx, "system", &id ) )
    {
        spdlog::info( "Unable to connect to ubus path 'system'" );
        ubus_free( ctx );
        return false;
    }

    if ( ubus_invoke( ctx, id, "board", NULL, ubus_system_board_cb, NULL, 500 ) )
    {
        spdlog::info( "Unable to call ubus method 'board' from path 'system'" );
        ubus_free( ctx );
        return false;
    }

    if ( system_board )
    {
        struct blob_attr* tb[__SYSTEM_BOARD_MAX];
        blobmsg_parse( system_board_policy,
                       __SYSTEM_BOARD_MAX,
                       tb,
                       blobmsg_data( system_board ),
                       blobmsg_len( system_board ) );

        if ( blobmsg_data( tb[SYSTEM_BOARD_HOSTNAME] ) )
        {
            Hostname = blobmsg_get_string( tb[SYSTEM_BOARD_HOSTNAME] );
        }
        if ( blobmsg_data( tb[SYSTEM_BOARD_MODEL] ) )
        {
            Type = blobmsg_get_string( tb[SYSTEM_BOARD_MODEL] );
        }
        if ( blobmsg_data( tb[SYSTEM_BOARD_SERIAL] ) )
        {
            Serial = blobmsg_get_string( tb[SYSTEM_BOARD_SERIAL] );
        }

        if ( tb[SYSTEM_BOARD_RELEASE] )
        {
            struct blob_attr* release;
            int i;
            blobmsg_for_each_attr( release, tb[SYSTEM_BOARD_RELEASE], i )
            {
                if ( !strcmp( "version", blobmsg_name( release ) ) )
                {
                    FirmwareVersion = blobmsg_get_string( release );
                }
            }
        }
        free( system_board );
    }
    return true;
}

bool Ubus::UbusImpl::ReloadFirewall()
{
    uint32_t id;
    struct blob_buf data = {};
    void* a;

    struct ubus_context* ctx = ubus_connect( NULL );

    if ( !ctx )
    {
        spdlog::info( "Unable to connect to ubus backend" );
        return false;
    }


    if ( ubus_lookup_id( ctx, "service", &id ) )
    {
        spdlog::info( "Unable to connect to ubus path 'service'" );
        ubus_free( ctx );
        return false;
    }

    blob_buf_init( &data, 0 );
    blobmsg_add_string( &data, "type", "config.change" );
    a = blobmsg_open_table( &data, "data" );
    blobmsg_add_string( &data, "package", "firewall" );
    blobmsg_close_table( &data, a );

    ubus_invoke( ctx, id, "event", data.head, NULL, NULL, 500 );
    spdlog::info( "Trigger firewall reload handling" );
    blob_buf_free( &data );
    ubus_free( ctx );
    return true;
}

#define SYS_PATH "/sys/class/net/"
static std::string get_mac( const std::string& device )
{
    std::string path{ SYS_PATH };
    path.append( device );
    path.append( "/address" );

    std::ifstream is( path, std::ifstream::in );
    std::string mac;
    is >> mac;
    return mac;
}

Command::IVPNActor::ConnectionStatusVPN Ubus::UbusImpl::StartVPN( const std::string& name, std::string& ipAddress )
{
    std::string filename{ "/etc/openvpn/" };
    filename.append( name );
    filename.append( ".ovpn" );

    struct stat buffer;
    if ( stat( filename.c_str(), &buffer ) != 0 )
    {
        spdlog::error( "Configuration does not exists: {}", filename );
        return NoConfiguration;
    }

    spdlog::info( "Checking for VPN {} already started.", name );
    std::vector<Command::INetworkDetailSource::NetworkDetail> details;
    (void)GetNetworkDetails( details );
    auto network = std::find_if( details.begin(), details.end(), [name]( auto& element ) {
        return element.InterfaceName == name;
    } );

    if ( network != details.end() )
    {
        spdlog::warn( "Configuration already connected: {}", name );
        ipAddress  = network->Ipv4Address;
        auto index = ipAddress.find( '/' );
        if ( index != std::string::npos )
        {
            ipAddress = ipAddress.substr( 0, index );
        }
        return AlreadyRunning;
    }

    spdlog::info( "Checking for log file presence." );
    auto fd = open( "/etc/openvpn/openvpn.log", O_RDONLY );
    if ( fd < 0 )
    {
        spdlog::error( "Could not open /etc/openvpn/openvpn.log" );
        return Error;
    }
    (void)lseek( fd, 0, SEEK_END );
    auto oldpos = lseek( fd, 0, SEEK_SET );
    close( fd );

    spdlog::info( "Starting openvpn interface." );
    std::string command{ "/etc/init.d/openvpn start " };
    command.append( name );
    system( command.c_str() );

    auto startTime     = std::chrono::steady_clock::now();
    const auto endTime = startTime + std::chrono::seconds( 15 );

    std::string pattern{ "openvpn-hotplug up " };
    pattern.append( name );
    pattern.append( " [^ ]+ [0-9]+ [0-9]+ ([0-9.]+) " );
    std::regex startLine( pattern, std::regex_constants::ECMAScript );

    spdlog::info( "Waiting for connection in log." );
    std::string text;
    bool gotStart{ false };
    while ( std::chrono::steady_clock::now() < endTime )
    {
        auto fd = open( "/etc/openvpn/openvpn.log", O_RDONLY );
        (void)lseek( fd, oldpos, SEEK_SET );
        std::vector<char> buffer( 1024 );
        auto bytesRead = read( fd, &buffer[0], buffer.size() );
        close( fd );
        if ( bytesRead == 0 )
        {
            usleep( 100000 );
            continue;
        }
        if ( bytesRead < 0 )
        {
            break;
        }
        text.append( &buffer[0], &buffer[bytesRead] );
        oldpos += bytesRead;
        std::smatch matches;
        if ( regex_search( text, matches, startLine ) && matches.size() == 2 )
        {
            spdlog::info( "Found IP in log: {}", matches[1].str() );
            gotStart = true;
            break;
        }
    }
    if ( !gotStart )
    {
        return Error;
    }

    while ( std::chrono::steady_clock::now() < endTime )
    {
        usleep( 100000 );
        details.clear();
        (void)GetNetworkDetails( details );
        network = std::find_if( details.begin(), details.end(), [name]( auto& element ) {
            return element.InterfaceName == name;
        } );

        if ( network != details.end() )
        {
            ipAddress  = network->Ipv4Address;
            auto index = ipAddress.find( '/' );
            if ( index != std::string::npos )
            {
                ipAddress = ipAddress.substr( 0, index );
            }
            spdlog::info( "Interface {} found with IP: {}", name, ipAddress );
            return Established;
        }
    }
    return Error; // Timeout
}

Command::IVPNActor::ConnectionStatusVPN Ubus::UbusImpl::StopVPN( const std::string& name )
{
    std::string filename{ "/etc/openvpn/" };
    filename.append( name );
    filename.append( ".ovpn" );

    struct stat buffer;
    if ( stat( filename.c_str(), &buffer ) != 0 )
    {
        spdlog::error( "Configuration does not exists: {}", filename );
        return NoConfiguration;
    }

    std::vector<Command::INetworkDetailSource::NetworkDetail> details;
    (void)GetNetworkDetails( details );
    auto network = std::find_if( details.begin(), details.end(), [name]( auto& element ) {
        return element.InterfaceName == name;
    } );

    if ( network == details.end() )
    {
        spdlog::error( "Configuration is not connected: {}", name );
        return AlreadyStopped;
    }

    auto fd = open( "/etc/openvpn/openvpn.log", O_RDONLY );
    if ( fd < 0 )
    {
        spdlog::error( "Could not open /etc/openvpn/openvpn.log" );
        return Error;
    }
    (void)lseek( fd, 0, SEEK_END );
    auto oldpos = lseek( fd, 0, SEEK_SET );
    close( fd );

    std::string command{ "/etc/init.d/openvpn stop " };
    command.append( name );
    system( command.c_str() );
    auto startTime     = std::chrono::steady_clock::now();
    const auto endTime = startTime + std::chrono::seconds( 10 );

    std::string pattern{ "openvpn-hotplug down " };
    pattern.append( name );
    std::regex startLine( pattern, std::regex_constants::ECMAScript );

    std::string text;
    bool gotStop{ false };
    while ( std::chrono::steady_clock::now() < endTime )
    {
        auto fd = open( "/etc/openvpn/openvpn.log", O_RDONLY );
        (void)lseek( fd, oldpos, SEEK_SET );
        std::vector<char> buffer( 1024 );
        auto bytesRead = read( fd, &buffer[0], buffer.size() );
        close( fd );
        if ( bytesRead == 0 )
        {
            usleep( 100000 );
            continue;
        }
        if ( bytesRead < 0 )
        {
            break;
        }
        text.append( &buffer[0], &buffer[bytesRead] );
        oldpos += bytesRead;
        if ( regex_search( text, startLine ) )
        {
            spdlog::info( "Found stop" );
            gotStop = true;
            break;
        }
    }
    return gotStop ? Disconnected : Error;
}

bool Ubus::UbusImpl::ConfigureVPN( const std::string& name, const std::string& config )
{
    std::string filename{ "/etc/openvpn/" };
    filename.append( name );
    filename.append( ".ovpn" );

    std::ofstream f( filename );
    if ( !f.good() )
    {
        spdlog::error( "Could not write config file." );
        return false;
    }
    f << config;
    f.close();
    return true;
}

bool Ubus::UbusImpl::GetVPNConfigurations( std::vector<VPNConfiguration>& config )
{
    std::string directoryName{ "/etc/openvpn/" };

    try
    {
        for ( const auto& entry : std::experimental::filesystem::directory_iterator( directoryName ) )
        {
            auto path = entry.path();
            if ( path.extension() == ".ovpn" )
            {
                auto name = path.stem();
                config.push_back( VPNConfiguration{ .Name = name, .IsConnected = false } );
                std::string statusFileName = "/var/run/openvpn.";
                statusFileName.append( name );
                statusFileName.append( ".status" );
                if ( std::experimental::filesystem::exists( statusFileName ) )
                {
                    config.back().IsConnected = true;
                }
            }
        }
    }
    catch ( const std::exception& e )
    {
        spdlog::warn( "Exception iterating through configurations in /etc/openvpn: {]", e.what() );
        config.clear();
    }
    return true;
}

bool Ubus::UbusImpl::GetPortForwardings( std::vector<PortForwardingConfiguration>& config )
{
    struct uci_context* uci_ctx;
    struct uci_package* uci_firewall;
    struct uci_section* s;
    struct uci_element* e;

    uci_ctx = uci_alloc_context();
    uci_load( uci_ctx, "firewall", &uci_firewall );

    /* Check if redirect name is deleteable */
    uci_foreach_element( &uci_firewall->sections, e )
    {
        s = uci_to_section( e );

        if ( strcmp( s->type, "redirect" ) )
            continue;

        auto src = uci_lookup_option_string( uci_ctx, s, "src" );
        if ( !src || strcmp( src, "azurezone" ) )
        {
            continue;
        }

        auto name    = uci_lookup_option_string( uci_ctx, s, "name" );
        auto srcPort = uci_lookup_option_string( uci_ctx, s, "src_dport" );
        auto dstPort = uci_lookup_option_string( uci_ctx, s, "dest_port" );
        auto dstIP   = uci_lookup_option_string( uci_ctx, s, "dest_ip" );

        if ( !name || !srcPort || !dstPort || !dstIP )
        {
            spdlog::warn( "Found uci redirect config with missing fields." );
            continue;
        }

        PortForwardingConfiguration entry;
        entry.Name            = name;
        entry.SourcePort      = srcPort;
        entry.DestinationPort = dstPort;
        entry.DestinationIP   = dstIP;

        config.push_back( entry );
    }

    uci_free_context( uci_ctx );
    return true;
}

#if 0
static void receive_list_result(struct ubus_context *ctx, struct ubus_object_data *obj, void *priv)
{
    std::vector<NetworkDetails> * details = reinterpret_cast<std::vector<NetworkDetails>*>(priv);
    NetworkDetail detail;
    detail.Name = obj->path;
    details.push_back(detail);
}

enum {
	NETWORK_DETAILS_IPV4ADDRESS,
	NETWORK_DETAILS_IPV6ADDRESS,
	NETWORK_DETAILS_IPV6PREFIX,
	NETWORK_DETAILS_ROUTE,
	NETWORK_DETAILS_DEVICE,
	__NETWORK_DETAILS_MAX
};

enum {
    IP_ADDRESS,
    IP_MASK,
    __IP_MAX
}

static const struct blobmsg_policy networkdetails_policy[__NETWORK_DETAILS_MAX] = {
	[NETWORK_DETAILS_IPV4ADDRESS] = { .name = "ipv4-address", .type = BLOBMSG_TYPE_ARRAY },
	[NETWORK_DETAILS_IPV6ADDRESS] = { .name = "ipv6-address", .type = BLOBMSG_TYPE_ARRAY },
	[NETWORK_DETAILS_IPV6PREFIX] = { .name = "ipv6-prefix", .type = BLOBMSG_TYPE_ARRAY },
	[NETWORK_DETAILS_ROUTE] = { .name = "route", .type = BLOBMSG_TYPE_ARRAY },
	[NETWORK_DETAILS_DEVICE] = { .name = "device", .type = BLOBMSG_TYPE_STRING },
};

// Only care for the first instance
static const struct blobmsg_policy ip_address_array_policy[1] = {
    [0] = { .type = BLOBMSG_TYPE_TABLE },
};

static const struct blobmsg_policy ip_address_table_policy[__IP_MAX] = {
    [IP_ADDRESS] = { .name = "address", .type = BLOBMSG_TYPE_STRING },
    [IP_MASK] = { .name = "mask", .type = BLOBMSG_TYPE_INT},
};

static void receive_call_result_data(struct ubus_request *req, int type, struct blob_attr *msg)
{
    NetworkDetail* detail = reinterpret_cast<NetworkDetail*>(reg->priv);
    struct blob_attr *tb[__NETWORK_DETAILS_MAX];
    if(blobmsg_parse(networkdetails_policy, __NETWORK_DETAILS_MAX, tb, blobmsg_data(msg), blobmsg_len(msg)))
    {
        spdlog::error("Unable to parse network details.");
        return;
    }
    if (blobmsg_data(tb[NETWORK_DETAILS_IPV4ADDRESS]))
    {
        struct blob_attr *array[1];
        struct blob_atrr *tb1[__IP_MAX];
        const char *wanip;

        blobmsg_parse_array(ip_address_array_policy, 1, array, blobmsg_data(tb[NETWORK_DETAILS_IPV4ADDRESS]), blobmsg_len(tb[NETWORK_DETAILS_IPV4ADDRESS]));
        blobmsg_parse(ip_address_table_policy, __IP_MAX, tb1, blobmsg_data(array[0]), blob_len(array[0]));

        if( blobmsg_data(tl1[IP_ADDRESS]) )
        {
            detail->Ipv4Address = blobmsg_get_string(tb1[IP_ADDRESS]);
        }
        if( blobmsg_data(tl1[IP_MASK]) )
        {
            auto netmask = blobmsg_get_int(tb1[IP_MASK]);
            uint32_t allbits = 0xFFFFFFFF;
            uint32_t shiftbitsdown = allbits >> (32 - netmask); // lose the lower bits
            uint32_t netmaskbits = shiftbitsdown << (32 - netmask);
            detail->Ipv4Netmask = std::format("%d.%d.%d.%d", netmaskbits >> 24, (netmaskbits >> 16) & 0xFFu, (netmaskbits >> 8) & 0xFFu, netmaskbits & 0xFFu );
        }
    }
    if (blobmsg_data(tb[NETWORK_DETAILS_IPV6ADDRESS]))
    {
        struct blob_attr *array[1];
        struct blob_atrr *tb1[__IP_MAX];
        const char *wanip;

        blobmsg_parse_array(ip_address_array_policy, 1, array, blobmsg_data(tb[NETWORK_DETAILS_IPV6ADDRESS]), blobmsg_len(tb[NETWORK_DETAILS_IPV6ADDRESS]));
        blobmsg_parse(ip_address_table_policy, __IP_MAX, tb1, blobmsg_data(array[0]), blob_len(array[0]));

        if( blobmsg_data(tl1[IP_ADDRESS]) )
        {
            detail->Ipv6Address = blobmsg_get_string(tb1[IP_ADDRESS]);
        }
        if( blobmsg_data(tl1[IP_MASK]) )
        {
            detail->Ipv6Netmask = std::format("%d", blobmsg_get_int(tb1[IP_MASK]));
        }
    }
    if (blobmsg_data(tb[NETWORK_DETAILS_IPV6PREFIX]))
    {
        struct blob_attr *array[1];
        struct blob_atrr *tb1[__IP_MAX];
        const char *wanip;

        blobmsg_parse_array(ip_address_array_policy, 1, array, blobmsg_data(tb[NETWORK_DETAILS_IPV6PREFIX]), blobmsg_len(tb[NETWORK_DETAILS_IPV6PREFIX]));
        blobmsg_parse(ip_address_table_policy, __IP_MAX, tb1, blobmsg_data(array[0]), blob_len(array[0]));

        if( blobmsg_data(tl1[IP_ADDRESS]) && blobmsg_data(tl1[IP_MASK]) )
        {
            detail->Ipv6Prefix = std::format("%s/%d", blobmsg_get_string(tb1[IP_ADDRESS], blobmsg_get_int(tb1[IP_MASK]));
        }
    }
    if (blobmsg_data(tb[NETWORK_DETAILS_ROUTE]))
    {
        struct blob_attr *array[1];
        struct blob_atrr *tb1[__IP_MAX];
        const char *wanip;

        blobmsg_parse_array(ip_address_array_policy, 1, array, blobmsg_data(tb[NETWORK_DETAILS_IPV6ADDRESS]), blobmsg_len(tb[NETWORK_DETAILS_IPV6ADDRESS]));
        blobmsg_parse(ip_address_table_policy, __IP_MAX, tb1, blobmsg_data(array[0]), blob_len(array[0]));

        if( blobmsg_data(tl1[IP_ADDRESS]) && blobmsg_data(tl1[IP_MASK]) )
        {
            detail->Ipv6Prefix = std::format("%s/%d", blobmsg_get_string(tb1[IP_ADDRESS], blobmsg_get_int(tb1[IP_MASK]));
        }
    }


}

bool Ubus::UbusImpl::GetNetworkDetails(std::vector<NetworkDetails>& details)
{
	struct ubus_context *ctx = ubus_connect(NULL);
    details.clear();

	if (!ctx) {
		spdlog::error("Unable to connect to ubus backend");
        return false;
    }

    if(ubus_lookup(ctx, "network.interface.*", receive_list_result, &details) )
    {
		spdlog::error("Unable to enumerate ubus path 'network.interface.*'");
        ubus_free(ctx);
        return false;
    }

    for( auto& detail: details)
    {
        struct blob_buf b;
        blob_buf_init(&b, 0);

	    if( ubus_lookup_id(ctx, detail.Name.c_str(), &id) )
        {
    		spdlog::error("Unable to enumerate ubus path 'network.interface.*'");
            ubus_free(ctx);
            return false;
        }

	    if( ubus_invoke(ctx, id, "status", b.head, receive_call_result_data, &detail, 1000) )
        {
    		spdlog::error("Unable to invoke status call on ubus path '{}'", detail.Name);
            ubus_free(ctx);
            return false;
        }

    }

}
#endif

static std::string runCmdWithOutput( const std::string& command )
{
    std::vector<char> buffer( 1024 );
    std::string output;
    auto pipe = popen( command.c_str(), "r" );
    if ( !pipe )
    {
        spdlog::error( "Pipe open for command {} failed: {}", command, errno );
        return output;
    }
    size_t bytesRead{ 0 };
    while ( ( bytesRead = fread( buffer.data(), 1U, buffer.size(), pipe ) ) > 0 )
    {
        output += std::string_view( &buffer[0], bytesRead );
    }
    auto error = pclose( pipe );
    if ( error != 0 )
    {
        spdlog::error( "Command {} return error code {}", command, error );
        output = "";
    }
    return output;
}

bool Ubus::UbusImpl::GetNetworkDetails( std::vector<NetworkDetail>& details )
{
    auto ipAddrOutput    = runCmdWithOutput( "/sbin/ip addr show" );
    auto ipv4RouteOutput = runCmdWithOutput( "/sbin/ip -4 route show" );
    auto ipv6RouteOutput = runCmdWithOutput( "/sbin/ip -6 route show" );

    std::regex interfaceLine(
            "[0-9]+: ([a-zA-Z0-9.@]+): <([\\w_,-]*)>[^\n]* state ([a-zA-Z]+)[^\n]*[\n](( [^\n]+[\n])*)" );
    std::regex addr4Line( " +inet ([0-9.\\/]+) brd [0-9.\\/]+ scope global.*" );
    std::regex addr6Line( " +inet6 ([0-9a-f:\\/]+) scope global.*" );
    std::regex macLine( " +link\\/ether ([0-9a-f:]+) brd [0-9a-f:]+" );
    std::regex routeLine( "default via ([0-9a-f.:]+) dev ([0-9a-zA-Z.]+)" );

    auto found = std::sregex_iterator( ipAddrOutput.begin(), ipAddrOutput.end(), interfaceLine );
    for ( std::sregex_iterator i = found; i != std::sregex_iterator(); ++i )
    {
        std::smatch sm = *i;
        if ( sm.size() > 4 )
        {
            if ( sm[3] == "DOWN" )
                continue;
            NetworkDetail item;
            item.InterfaceName = sm[1];
            auto index         = item.InterfaceName.find( '@' );
            if ( index != std::string::npos )
            {
                item.InterfaceName = item.InterfaceName.substr( 0, index );
            }
            std::smatch innerMatch;
            auto innerLines = sm[4].str();
            if ( std::regex_search( innerLines, innerMatch, addr4Line ) )
            {
                item.Ipv4Address = innerMatch[1].str();
            }
            if ( std::regex_search( innerLines, innerMatch, addr6Line ) )
            {
                item.Ipv6Address = innerMatch[1].str();
            }
            if ( std::regex_search( innerLines, innerMatch, macLine ) )
            {
                item.MacAddress = innerMatch[1].str();
            }
            if ( sm[2].str().find( "POINTOPOINT" ) != std::string::npos )
            {
                item.IsVpn = true;
            }
            else
            {
                item.IsVpn = false;
            }
            if ( !item.Ipv4Address.empty() || !item.Ipv6Address.empty() )
            {
                details.push_back( item );
            }
        }
    }

    found = std::sregex_iterator( ipv4RouteOutput.begin(), ipv4RouteOutput.end(), routeLine );
    for ( std::sregex_iterator i = found; i != std::sregex_iterator(); ++i )
    {
        std::smatch sm = *i;
        if ( sm.size() > 2 )
        {
            auto interface = sm[2].str();
            auto gateway   = sm[1].str();
            for ( auto& it : details )
            {
                if ( it.InterfaceName == interface )
                {
                    it.Ipv4Gateway = gateway;
                }
            }
        }
    }

    found = std::sregex_iterator( ipv6RouteOutput.begin(), ipv6RouteOutput.end(), routeLine );
    for ( std::sregex_iterator i = found; i != std::sregex_iterator(); ++i )
    {
        std::smatch sm = *i;
        if ( sm.size() > 2 )
        {
            auto interface = sm[2].str();
            auto gateway   = sm[1].str();
            for ( auto& it : details )
            {
                if ( it.InterfaceName == interface )
                {
                    it.Ipv6Gateway = gateway;
                }
            }
        }
    }

    return true;
}

std::string Ubus::Name()
{
    return _impl->Name;
}

bool Ubus::SetName( const std::string& newName )
{
    _impl->Name = newName;
    return true;
}

std::string Ubus::Serial()
{
    return _impl->Serial;
}
std::string Ubus::Hostname()
{
    return _impl->Hostname;
}
std::string Ubus::Type()
{
    return _impl->Type;
}
std::string Ubus::FirmwareVersion()
{
    return _impl->FirmwareVersion;
}
std::string Ubus::MACAddress()
{
    return get_mac( "eth0" );
}

bool Ubus::VPNConnectionActive()
{
    std::vector<Command::INetworkDetailSource::NetworkDetail> details;
    bool isVpnActive{ false };
    (void)_impl->GetNetworkDetails( details );
    for ( auto& entry : details )
    {
        isVpnActive |= entry.IsVpn;
    }
    return isVpnActive;
}

bool Ubus::DeleteRedirect( const std::string& name )
{
    return _impl->DeleteRedirect( name );
}

bool Ubus::ClearRedirect()
{
    return _impl->ClearRedirect();
}

bool Ubus::AddRedirect( const Command::IPortForwardingActor::PortForwardingConfiguration& config )
{
    return _impl->AddRedirect( config );
}

bool Ubus::ReloadFirewall()
{
    return _impl->ReloadFirewall();
}

Command::IVPNActor::ConnectionStatusVPN Ubus::StartVPN( const std::string& name, std::string& ipAddress )
{
    return _impl->StartVPN( name, ipAddress );
}

Command::IVPNActor::ConnectionStatusVPN Ubus::StopVPN( const std::string& name )
{
    return _impl->StopVPN( name );
}

bool Ubus::ConfigureVPN( const std::string& name, const std::string& config )
{
    return _impl->ConfigureVPN( name, config );
}

bool Ubus::GetVPNConfigurations( std::vector<VPNConfiguration>& config )
{
    return _impl->GetVPNConfigurations( config );
}

bool Ubus::GetPortForwardings( std::vector<PortForwardingConfiguration>& config )
{
    return _impl->GetPortForwardings( config );
}

bool Ubus::GetNetworkDetails( std::vector<NetworkDetail>& details )
{
    try
    {
        return _impl->GetNetworkDetails( details );
    }
    catch ( const std::exception& e )
    {
        spdlog::error( "Exception in GetNetworkDetails: {}", e.what() );
        ;
        return false;
    }
}
