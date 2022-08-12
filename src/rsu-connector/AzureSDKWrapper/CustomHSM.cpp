// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#include "CustomHSM.h"
#include <functional>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include <spdlog/spdlog.h>

#include <azure_prov_client/hsm_client_data.h>

#include <openssl/bio.h>
#include <openssl/obj_mac.h>
#include <openssl/pem.h>
#include <openssl/x509.h>
#include <openssl/x509v3.h>

// The certificate parsing is based on https://zakird.com/2013/10/13/certificate-parsing-with-openssl

// Since the custom hsm is statically linked with the C SDK and we do not need
// any instance specific parameters in the HSM, the internal data of the
// module is also kept as a static structure, not as a pimpl tied to the
// CustomHSM class or allocated in the custom_hsm_create() function.
struct
{
    std::string RegistrationId;
    std::string CommonName;
    std::string Sas;
    std::vector<char> Certificate;
    std::vector<char> Key;
} hsmInternalData;

void CustomHsm::setRegistrationId( const std::string& dpsRegistrationId )
{
    hsmInternalData.RegistrationId = dpsRegistrationId;
}

void CustomHsm::setSas( const std::string& dpsSharedAccessSignature )
{
    hsmInternalData.Sas = dpsSharedAccessSignature;
}

bool CustomHsm::setCertificate( const std::vector<char>& dpsCertificate )
{
    hsmInternalData.Certificate = dpsCertificate;
    hsmInternalData.Certificate.push_back( '\0' );

    std::unique_ptr<BIO, decltype( &BIO_free )> certBio{ BIO_new( BIO_s_mem() ), &BIO_free };
    auto retVal = BIO_write( certBio.get(), &dpsCertificate[0], dpsCertificate.size() );

    spdlog::debug( "Reading certificate: BIO_write returned {}", retVal );

    std::unique_ptr<X509, decltype( &X509_free )> certX509{ PEM_read_bio_X509( certBio.get(), NULL, NULL, NULL ),
                                                            &X509_free };
    if ( !certX509 )
    {
        spdlog::error( "Could not read PEM x509 certificate" );
        return false;
    }

    auto x509_name = X509_get_subject_name( certX509.get() ); // x509_name must not be freed
    if ( !x509_name )
    {
        spdlog::error( "Could not get subject name from certificate" );
        return false;
    }

    int index = -1; // initial index shall be -1
    index     = X509_NAME_get_index_by_NID( x509_name, NID_commonName, index );
    if ( index == -1 )
    {
        spdlog::error( "Could not find CommonName in x509 certificate." );
        return false;
    }

    auto nameEntry = X509_NAME_get_entry( x509_name, index ); // nameEntry must not be freed
    if ( !nameEntry )
    {
        spdlog::error( "Could not reference name entry at index {}", index );
        return false;
    }

    auto asn1data = X509_NAME_ENTRY_get_data( nameEntry );
    if ( asn1data == NULL ) // returns value pointer from nameEntry, so assume it must not be freed
    {
        spdlog::error( "Found CommonName index but fetching name entry data returned nullptr." );
        return false;
    }

    unsigned char* utf8Out{ nullptr };
    auto length  = ASN1_STRING_to_UTF8( &utf8Out, asn1data );
    auto deleter = []( unsigned char* d ) { OPENSSL_free( d ); };
    std::unique_ptr<unsigned char, decltype( deleter )> commonName{ utf8Out, deleter };

    spdlog::debug( "Reading certificate: ASN1_STRING_to_UTF8 returned {}", length );
    if ( length > 0 && commonName )
    {
        std::string value( commonName.get(), commonName.get() + length );
        spdlog::info( "Read certificate successfully and found CommonName: {}", value );
        hsmInternalData.CommonName = value;
        return true;
    }
    else if ( !commonName )
    {
        spdlog::error( "Found CommonName index, but fetching utf8 string failed." );
    }
    else
    {
        spdlog::error( "Found CommonName, but its length is {}. This won't do.", length );
    }
    return false;
}


bool CustomHsm::setKey( const std::vector<char>& dpsKey )
{
    // Although not strictly necessary, try to load the key here to see if it is valid.

    std::unique_ptr<BIO, decltype( &BIO_free )> certBio{ BIO_new( BIO_s_mem() ), &BIO_free };
    auto retVal = BIO_write( certBio.get(), &dpsKey[0], dpsKey.size() );
    spdlog::debug( "Reading key: BIO_write returned {}", retVal );

    auto passwordProvider = []( char* buf, int bufSize, int rwflag, void* u ) -> int {
        spdlog::warn( "PrivateKey passphrase requested. The Azure C SDK does not provide a way to set the password for "
                      "the key, so using a password protected device key will fail." );
        return 0; // signal empty password, this will likely also fail the PEM_read_bio_PrivateKey() call which is what we want here.
    };

    std::unique_ptr<EVP_PKEY, decltype( &EVP_PKEY_free )> privateKey{
            PEM_read_bio_PrivateKey( certBio.get(), NULL, passwordProvider, NULL ),
            &EVP_PKEY_free };
    if ( !privateKey )
    {
        spdlog::error( "Could not read PEM private key" );
        return false;
    }
    else
    {
        spdlog::info( "PEM private key successfully read." );
    }
    hsmInternalData.Key = dpsKey;
    hsmInternalData.Key.push_back( '\0' );
    return true;
}

static HSM_CLIENT_HANDLE custom_hsm_create()
{
    return (void*)0xdeadbeef;
}

static void custom_hsm_destroy( HSM_CLIENT_HANDLE handle ) {}

static char* custom_hsm_get_certificate( HSM_CLIENT_HANDLE handle )
{
    return strdup( &hsmInternalData.Certificate[0] );
}

static char* custom_hsm_get_key( HSM_CLIENT_HANDLE handle )
{
    return strdup( &hsmInternalData.Key[0] );
}

static char* custom_hsm_get_common_name( HSM_CLIENT_HANDLE handle )
{
    return strdup( &hsmInternalData.CommonName[0] );
}

static char* custom_hsm_symm_key( HSM_CLIENT_HANDLE handle )
{
    return strdup( &hsmInternalData.Sas[0] );
}

static char* custom_hsm_get_registration_name( HSM_CLIENT_HANDLE handle )
{
    return strdup( &hsmInternalData.RegistrationId[0] );
}

static int custom_hsm_set_symmetrical_key_info( HSM_CLIENT_HANDLE handle, const char* reg_name, const char* sas )
{
    if ( handle == NULL || reg_name == NULL || sas == NULL )
    {
        spdlog::error( "custom_hsm_set_symmetrical_key_info with NULL param" );
        return 1;
    }
    hsmInternalData.RegistrationId = reg_name;
    hsmInternalData.Sas            = sas;
    return 0;
}

static const HSM_CLIENT_X509_INTERFACE x509_interface = { custom_hsm_create,
                                                          custom_hsm_destroy,
                                                          custom_hsm_get_certificate,
                                                          custom_hsm_get_key,
                                                          custom_hsm_get_common_name };

static const HSM_CLIENT_KEY_INTERFACE symm_key_interface = { custom_hsm_create,
                                                             custom_hsm_destroy,
                                                             custom_hsm_symm_key,
                                                             custom_hsm_get_registration_name,
                                                             custom_hsm_set_symmetrical_key_info };

const HSM_CLIENT_TPM_INTERFACE* hsm_client_tpm_interface()
{
    return NULL;
}

const HSM_CLIENT_X509_INTERFACE* hsm_client_x509_interface()
{
    return &x509_interface;
}

const HSM_CLIENT_KEY_INTERFACE* hsm_client_key_interface()
{
    return &symm_key_interface;
}

int hsm_client_x509_init()
{
    return 0;
}

void hsm_client_x509_deinit() {}

int hsm_client_tpm_init()
{
    return 0; // although we do not provide a TPM implementation, this still needs to return success or the SDK will not initialize.
}

void hsm_client_tpm_deinit() {}
