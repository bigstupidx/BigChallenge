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

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1024;
// System.Net.ServicePoint
struct ServicePoint_t987;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t930;
// System.Net.WebRequest
struct WebRequest_t991;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m5208 (DefaultCertificatePolicy_t1024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m5209 (DefaultCertificatePolicy_t1024 * __this, ServicePoint_t987 * ___point, X509Certificate_t930 * ___certificate, WebRequest_t991 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
