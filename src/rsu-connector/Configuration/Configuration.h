// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef DEVICECONNECTOR_CONFIGURATION_CONFIGURATION_H_
#define DEVICECONNECTOR_CONFIGURATION_CONFIGURATION_H_
#include <string>

/// @brief Read a configuration file in JSON format and allow to query settings in this file.
class Configuration
{
public:
    Configuration() = delete;
    /// @brief Construct configuration instance and read from filename.
    /// Will throw a runtime exception if file cannot be read or is not valid JSON.
    /// @param filename Name of the file to read.
    Configuration( const std::string filename );

    ~Configuration();

    /// @brief Read integer setting with given key.
    /// Will throw a runtime exception if key is not found.
    /// @param key Key the setting is stored under.
    int32_t GetIntValue( const std::string& key );

    /// @brief Read string setting with given key.
    /// Will throw a runtime exception if key is not found.
    /// @param key Key the setting is stored under.
    std::string GetStringValue( const std::string& key );

    /// @brief Read boolean setting with given key.
    /// Will throw a runtime exception if key is not found.
    /// @param key Key the setting is stored under.
    bool GetBooleanValue( const std::string& key );

private:
    struct ConfigurationImpl;
    std::shared_ptr<ConfigurationImpl> _impl;
};

#endif // DEVICECONNECTOR_CONFIGURATION_CONFIGURATION_H_
