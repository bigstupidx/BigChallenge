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
struct PublicKey_t1064;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t874;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1065;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t966;
// System.Security.Cryptography.Oid
struct Oid_t1066;
// System.Byte[]
struct ByteU5BU5D_t817;
// System.Security.Cryptography.DSA
struct DSA_t875;
// System.Security.Cryptography.RSA
struct RSA_t868;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5410 (PublicKey_t1064 * __this, X509Certificate_t874 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1065 * PublicKey_get_EncodedKeyValue_m5411 (PublicKey_t1064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1065 * PublicKey_get_EncodedParameters_m5412 (PublicKey_t1064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t966 * PublicKey_get_Key_m5413 (PublicKey_t1064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1066 * PublicKey_get_Oid_m5414 (PublicKey_t1064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t817* PublicKey_GetUnsignedBigInteger_m5415 (Object_t * __this /* static, unused */, ByteU5BU5D_t817* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t875 * PublicKey_DecodeDSA_m5416 (Object_t * __this /* static, unused */, ByteU5BU5D_t817* ___rawPublicKey, ByteU5BU5D_t817* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t868 * PublicKey_DecodeRSA_m5417 (Object_t * __this /* static, unused */, ByteU5BU5D_t817* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
