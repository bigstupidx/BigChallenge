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
struct PublicKey_t988;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t797;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t989;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t889;
// System.Security.Cryptography.Oid
struct Oid_t990;
// System.Byte[]
struct ByteU5BU5D_t740;
// System.Security.Cryptography.DSA
struct DSA_t798;
// System.Security.Cryptography.RSA
struct RSA_t791;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5000 (PublicKey_t988 * __this, X509Certificate_t797 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t989 * PublicKey_get_EncodedKeyValue_m5001 (PublicKey_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t989 * PublicKey_get_EncodedParameters_m5002 (PublicKey_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t889 * PublicKey_get_Key_m5003 (PublicKey_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t990 * PublicKey_get_Oid_m5004 (PublicKey_t988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t740* PublicKey_GetUnsignedBigInteger_m5005 (Object_t * __this /* static, unused */, ByteU5BU5D_t740* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t798 * PublicKey_DecodeDSA_m5006 (Object_t * __this /* static, unused */, ByteU5BU5D_t740* ___rawPublicKey, ByteU5BU5D_t740* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t791 * PublicKey_DecodeRSA_m5007 (Object_t * __this /* static, unused */, ByteU5BU5D_t740* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
