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

// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t862;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t863;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t902;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.ClientContext::.ctor(Mono.Security.Protocol.Tls.SslClientStream,Mono.Security.Protocol.Tls.SecurityProtocolType,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void ClientContext__ctor_m4384 (ClientContext_t862 * __this, SslClientStream_t863 * ___stream, int32_t ___securityProtocolType, String_t* ___targetHost, X509CertificateCollection_t902 * ___clientCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::get_SslStream()
extern "C" SslClientStream_t863 * ClientContext_get_SslStream_m4385 (ClientContext_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.ClientContext::get_ClientHelloProtocol()
extern "C" int16_t ClientContext_get_ClientHelloProtocol_m4386 (ClientContext_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::set_ClientHelloProtocol(System.Int16)
extern "C" void ClientContext_set_ClientHelloProtocol_m4387 (ClientContext_t862 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::Clear()
extern "C" void ClientContext_Clear_m4388 (ClientContext_t862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
