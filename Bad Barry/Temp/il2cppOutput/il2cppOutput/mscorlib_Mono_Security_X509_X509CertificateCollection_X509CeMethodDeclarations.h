#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1114;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1110;
// System.Object
struct Object_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1112;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C" void X509CertificateEnumerator__ctor_m6621 (X509CertificateEnumerator_t1114 * __this, X509CertificateCollection_t1110 * ___mappings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m6622 (X509CertificateEnumerator_t1114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m6623 (X509CertificateEnumerator_t1114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern "C" void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m6624 (X509CertificateEnumerator_t1114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" X509Certificate_t1112 * X509CertificateEnumerator_get_Current_m6625 (X509CertificateEnumerator_t1114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" bool X509CertificateEnumerator_MoveNext_m6626 (X509CertificateEnumerator_t1114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
extern "C" void X509CertificateEnumerator_Reset_m6627 (X509CertificateEnumerator_t1114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
