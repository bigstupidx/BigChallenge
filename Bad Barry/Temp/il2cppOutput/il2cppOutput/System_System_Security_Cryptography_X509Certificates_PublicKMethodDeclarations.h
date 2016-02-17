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
struct PublicKey_t1069;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t879;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1070;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t971;
// System.Security.Cryptography.Oid
struct Oid_t1071;
// System.Byte[]
struct ByteU5BU5D_t822;
// System.Security.Cryptography.DSA
struct DSA_t880;
// System.Security.Cryptography.RSA
struct RSA_t873;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5430 (PublicKey_t1069 * __this, X509Certificate_t879 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1070 * PublicKey_get_EncodedKeyValue_m5431 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1070 * PublicKey_get_EncodedParameters_m5432 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t971 * PublicKey_get_Key_m5433 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1071 * PublicKey_get_Oid_m5434 (PublicKey_t1069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t822* PublicKey_GetUnsignedBigInteger_m5435 (Object_t * __this /* static, unused */, ByteU5BU5D_t822* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t880 * PublicKey_DecodeDSA_m5436 (Object_t * __this /* static, unused */, ByteU5BU5D_t822* ___rawPublicKey, ByteU5BU5D_t822* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t873 * PublicKey_DecodeRSA_m5437 (Object_t * __this /* static, unused */, ByteU5BU5D_t822* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
