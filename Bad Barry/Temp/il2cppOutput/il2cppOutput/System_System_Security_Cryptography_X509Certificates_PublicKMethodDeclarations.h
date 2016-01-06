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
struct PublicKey_t1007;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t816;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1008;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t908;
// System.Security.Cryptography.Oid
struct Oid_t1009;
// System.Byte[]
struct ByteU5BU5D_t759;
// System.Security.Cryptography.DSA
struct DSA_t817;
// System.Security.Cryptography.RSA
struct RSA_t810;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5073 (PublicKey_t1007 * __this, X509Certificate_t816 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1008 * PublicKey_get_EncodedKeyValue_m5074 (PublicKey_t1007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1008 * PublicKey_get_EncodedParameters_m5075 (PublicKey_t1007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t908 * PublicKey_get_Key_m5076 (PublicKey_t1007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1009 * PublicKey_get_Oid_m5077 (PublicKey_t1007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t759* PublicKey_GetUnsignedBigInteger_m5078 (Object_t * __this /* static, unused */, ByteU5BU5D_t759* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t817 * PublicKey_DecodeDSA_m5079 (Object_t * __this /* static, unused */, ByteU5BU5D_t759* ___rawPublicKey, ByteU5BU5D_t759* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t810 * PublicKey_DecodeRSA_m5080 (Object_t * __this /* static, unused */, ByteU5BU5D_t759* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
