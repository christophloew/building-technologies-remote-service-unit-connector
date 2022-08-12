// Copyright (c) 2022 - for information on the respective copyright owner see the NOTICE file and/or the repository
// https://github.com/boschglobal/building-technologies-remote-service-unit-connector.
//
// SPDX-License-Identifier: Apache-2.0
//--- END HEADER ---

#ifndef CONNECTOR_COMMON_NONCOPYABLE_H_
#define CONNECTOR_COMMON_NONCOPYABLE_H_

/// @brief Derive from this template to declare the intention that the class shall never be copied.
template<class T> class NonCopyable
{
public:
    NonCopyable( const NonCopyable& ) = delete;
    T& operator=( const T& ) = delete;

protected:
    NonCopyable()  = default;
    ~NonCopyable() = default; /// Protected non-virtual destructor
};

#endif /* CONNECTOR_COMMON_NONCOPYABLE_H_ */
