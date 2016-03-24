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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t922;
// System.IO.Stream
struct Stream_t928;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t947;
// System.Net.HttpWebRequest
struct HttpWebRequest_t923;
// System.Byte[]
struct ByteU5BU5D_t817;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t948;
// System.Int32[]
struct Int32U5BU5D_t61;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t966;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m4738 (HttpsClientStream_t922 * __this, Stream_t928 * ___stream, X509CertificateCollection_t947 * ___clientCertificates, HttpWebRequest_t923 * ___request, ByteU5BU5D_t817* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m4739 (HttpsClientStream_t922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m4740 (HttpsClientStream_t922 * __this, X509Certificate_t948 * ___certificate, Int32U5BU5D_t61* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t948 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m4741 (Object_t * __this /* static, unused */, X509CertificateCollection_t947 * ___clientCerts, X509Certificate_t948 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t947 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t966 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m4742 (Object_t * __this /* static, unused */, X509Certificate_t948 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
