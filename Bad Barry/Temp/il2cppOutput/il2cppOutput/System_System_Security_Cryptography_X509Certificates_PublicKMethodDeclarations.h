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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1049;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t859;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1050;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t951;
// System.Security.Cryptography.Oid
struct Oid_t1051;
// System.Byte[]
struct ByteU5BU5D_t802;
// System.Security.Cryptography.DSA
struct DSA_t860;
// System.Security.Cryptography.RSA
struct RSA_t853;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5328 (PublicKey_t1049 * __this, X509Certificate_t859 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1050 * PublicKey_get_EncodedKeyValue_m5329 (PublicKey_t1049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1050 * PublicKey_get_EncodedParameters_m5330 (PublicKey_t1049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t951 * PublicKey_get_Key_m5331 (PublicKey_t1049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1051 * PublicKey_get_Oid_m5332 (PublicKey_t1049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t802* PublicKey_GetUnsignedBigInteger_m5333 (Object_t * __this /* static, unused */, ByteU5BU5D_t802* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t860 * PublicKey_DecodeDSA_m5334 (Object_t * __this /* static, unused */, ByteU5BU5D_t802* ___rawPublicKey, ByteU5BU5D_t802* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t853 * PublicKey_DecodeRSA_m5335 (Object_t * __this /* static, unused */, ByteU5BU5D_t802* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
