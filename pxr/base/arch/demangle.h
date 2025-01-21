//
// Copyright 2016 Pixar
//
// Licensed under the terms set forth in the LICENSE.txt file available at
// https://openusd.org/license.
//
#ifndef PXR_BASE_ARCH_DEMANGLE_H
#define PXR_BASE_ARCH_DEMANGLE_H

#if !defined(__cplusplus)
#error This include file can only be included in C++ programs.
#endif

/// \file arch/demangle.h
/// \ingroup group_arch_Strings
/// Demangle C++ typenames generated by the \c typeid() facility.

#include "pxr/pxr.h"
#include "pxr/base/arch/api.h"
#include <string>
#include <typeinfo>
#include <typeindex>

PXR_NAMESPACE_OPEN_SCOPE

/// \addtogroup group_arch_Strings
///@{

/// Demangle RTTI-generated type name.
///
/// Given a variable \c v, the construct \c typeid(v).name() returns
/// the type-name of \c v; unfortunately, the returned type-name is
/// sometimes extremely encoded (otherwise known as "mangled").
/// \c ArchDemangle parses the passed in type-name \c typeName into a
/// readable form, and overwrites \c typeName.  If \c typeName
/// cannot be unmangled, the function returns \c false without altering
/// \c typeName. Otherwise \c true is returned.
ARCH_API bool ArchDemangle(std::string* typeName);

/// Return demangled RTTI-generated type name.
///
/// If \c typeName can be demangled, the function returns the demangled
/// string; otherwise, the function returns the empty string.
///
/// \see ArchDemangle()
ARCH_API std::string
ArchGetDemangled(const std::string& typeName);

/// Return demangled RTTI-generated type name.
///
/// \see ArchDemangle()
/// \overload
ARCH_API std::string
ArchGetDemangled(const char *typeName);

/// Return demangled RTTI-generated type name.
///
/// Returns the demangled name associated with typeInfo (i.e. typeInfo.name()).
///
/// \see ArchDemangle()
/// \overload
inline std::string
ArchGetDemangled(const std::type_info& typeInfo) {
    return ArchGetDemangled(typeInfo.name());
}

/// Return demangled RTTI-generated type name.
///
/// Returns the demangled name associated with typeIndex (i.e. typeIndex.name()).
///
/// \see ArchDemangle()
/// \overload
inline std::string
ArchGetDemangled(const std::type_index& typeIndex) {
    return ArchGetDemangled(typeIndex.name());
}

/// Return demangled RTTI generated-type name.
///
/// Returns the demangled name of type T.
///
/// \see ArchDemangle()
/// \overload
template <typename T>
inline std::string
ArchGetDemangled() {
    return ArchGetDemangled(typeid(T).name());
}

///@}

/// \private
ARCH_API
void Arch_DemangleFunctionName(std::string* functionName);

PXR_NAMESPACE_CLOSE_SCOPE

#endif	// PXR_BASE_ARCH_DEMANGLE_H 
