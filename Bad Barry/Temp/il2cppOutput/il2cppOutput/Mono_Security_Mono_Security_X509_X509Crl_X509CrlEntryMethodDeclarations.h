﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t804;
// Mono.Security.ASN1
struct ASN1_t770;
// System.Byte[]
struct ByteU5BU5D_t740;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t799;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m4075 (X509CrlEntry_t804 * __this, ASN1_t770 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t740* X509CrlEntry_get_SerialNumber_m4076 (X509CrlEntry_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t569  X509CrlEntry_get_RevocationDate_m4077 (X509CrlEntry_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t799 * X509CrlEntry_get_Extensions_m4078 (X509CrlEntry_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
