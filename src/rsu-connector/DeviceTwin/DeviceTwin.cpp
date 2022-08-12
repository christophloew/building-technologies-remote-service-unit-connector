// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "DeviceTwin.h"

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/parser/json/mapping/ObjectMapper.hpp"
#include <spdlog/spdlog.h>

class _DesiredDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _DesiredDTO, DTO )
    DTO_FIELD( String, Name );
    DTO_FIELD( Int64, Version, "$version" );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

class _MutableStringPropertyDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _MutableStringPropertyDTO, DTO )
    DTO_FIELD( String, value );
    DTO_FIELD( Int32, ac );
    DTO_FIELD( Int64, av );
    DTO_FIELD( String, ad );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

class _ReportedDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _ReportedDTO, DTO )
    DTO_FIELD( Object<_MutableStringPropertyDTO>, Name );
    DTO_FIELD( String, MACAddress );
    DTO_FIELD( String, Hostname );
    DTO_FIELD( String, Type );
    DTO_FIELD( String, FirmwareVersion );
    DTO_FIELD( String, Serial );
    DTO_FIELD( Boolean, VPNConnectionActive );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

class _DeviceTwinDTO : public oatpp::DTO
{
#include OATPP_CODEGEN_BEGIN( DTO ) ///< Begin DTO codegen section
    DTO_INIT( _DeviceTwinDTO, DTO )
    DTO_FIELD( Object<_DesiredDTO>, desired );
    DTO_FIELD( Object<_ReportedDTO>, reported );
#include OATPP_CODEGEN_END( DTO ) ///< End DTO codegen section
};

struct DeviceTwin::DeviceTwinImpl
{
    std::shared_ptr<IDeviceInformation> DeviceInformationProvider;
    std::function<void( const std::string& json )> TriggerUpdate;
};

DeviceTwin::DeviceTwin( std::shared_ptr<IDeviceInformation> deviceInformationProvider )
    : _impl( std::make_shared<DeviceTwinImpl>() )
{
    _impl->DeviceInformationProvider = deviceInformationProvider;
    if ( !deviceInformationProvider )
    {
        throw std::runtime_error( "Device information provider must be specified." );
    }
}

void DeviceTwin::SetReportDeviceTwin( std::function<void( const std::string& )> reporter )
{
    _impl->TriggerUpdate = reporter;
}

bool DeviceTwin::ReceiveDeviceTwin( const std::string& from, bool partial )
{
    auto dip = _impl->DeviceInformationProvider;
    if ( from.empty() )
    {
        spdlog::error( "Device Twin string empty." );
        return false;
    }
    auto objectMapper = oatpp::parser::json::mapping::ObjectMapper::createShared();
    oatpp::Object<_DeviceTwinDTO> twin;
    try
    {
        twin = objectMapper->readFromString<oatpp::Object<_DeviceTwinDTO>>( from.c_str() );
    }
    catch ( const std::exception& e )
    {
        spdlog::warn( "Device Twin failed to parse, exception {}.", e.what() );
        return false;
    }
    if ( !twin )
    {
        spdlog::error( "Could not deserialize device Twin." );
        return false;
    }

    auto report = _ReportedDTO::createShared();
    bool nameUpdate{ false };
    if ( twin->desired )
    {
        if ( !twin->desired->Version )
        {
            spdlog::error( "Device twin contained desired property, but no $version tag." );
            return false;
        }
        if ( twin->desired->Name )
        {
            spdlog::info( "request to change Name recognized." );
            if ( twin->desired->Name->std_str() != dip->Name() )
            {
                spdlog::info( "Name actually has changed." );
                report->Name = decltype( report->Name )::createShared();
                if ( dip->SetName( twin->desired->Name->std_str() ) )
                {
                    report->Name->ac = 200;
                    report->Name->av = twin->desired->Version;
                    report->Name->ad = "Name successfully updated.";
                }
                else
                {
                    report->Name->ac = 500;
                    report->Name->av = twin->desired->Version;
                    report->Name->ad = "Name update refused.";
                }
                report->Name->value = dip->Name().c_str();
                nameUpdate          = true;
            }
        }
    }
    else
    {
        spdlog::debug( "No desired property" );
    }

    std::string oldName;
    std::string oldMACAddress;
    std::string oldHostname;
    std::string oldType;
    std::string oldFirmwareVersion;
    std::string oldSerial;
    bool oldVPNConnectionActive;

    if ( twin->reported )
    {
        if ( twin->reported->Name && twin->reported->Name->value )
        {
            oldName = twin->reported->Name->value->std_str();
        }
        if ( twin->reported->MACAddress )
        {
            oldMACAddress = twin->reported->MACAddress->std_str();
        }
        if ( twin->reported->Hostname )
        {
            oldHostname = twin->reported->Hostname->std_str();
        }
        if ( twin->reported->Type )
        {
            oldType = twin->reported->Type->std_str();
        }
        if ( twin->reported->FirmwareVersion )
        {
            oldFirmwareVersion = twin->reported->FirmwareVersion->std_str();
        }
        if ( twin->reported->Serial )
        {
            oldSerial = twin->reported->Serial->std_str();
        }
        oldVPNConnectionActive = twin->reported->VPNConnectionActive;
    }

    spdlog::debug( "Generating reported" );
    auto isVPNActive = dip->VPNConnectionActive();
    if ( nameUpdate || oldName != dip->Name() || oldMACAddress != dip->MACAddress() || oldHostname != dip->Hostname() ||
         oldType != dip->Type() || oldFirmwareVersion != dip->FirmwareVersion() || oldSerial != dip->Serial() ||
         oldVPNConnectionActive != isVPNActive )
    {
        if ( !report->Name )
        {
            spdlog::info( "Reporting same name." );
            report->Name        = decltype( report->Name )::createShared();
            report->Name->value = dip->Name().c_str();
            if ( twin->reported && twin->reported->Name )
            {
                report->Name->ac = twin->reported->Name->ac;
                report->Name->av = twin->reported->Name->av;
                report->Name->ad = twin->reported->Name->ad;
            }
        }
        spdlog::info( "MAC changed by backend from {} to {}.", oldMACAddress, dip->MACAddress() );
        report->MACAddress = dip->MACAddress().c_str();
        spdlog::info( "Hostname changed by backend from {} to {}.", oldHostname, dip->Hostname() );
        report->Hostname = dip->Hostname().c_str();
        spdlog::info( "Type changed by backend from {} to {}.", oldType, dip->Type() );
        report->Type = dip->Type().c_str();
        spdlog::info( "FirmwareVersion changed by backend from {} to {}.", oldFirmwareVersion, dip->FirmwareVersion() );
        report->FirmwareVersion = dip->FirmwareVersion().c_str();
        spdlog::info( "Serial changed by backend from {} to {}.", oldSerial, dip->Serial() );
        report->Serial = dip->Serial().c_str();
        spdlog::info( "VPNConnectionActive changed by backend from {} to {}.", oldVPNConnectionActive, isVPNActive );
        report->VPNConnectionActive = isVPNActive;
        auto reportJson             = objectMapper->writeToString( report );
        if ( _impl->TriggerUpdate )
        {
            _impl->TriggerUpdate( reportJson->std_str() );
        }
    }

    return true;
}
