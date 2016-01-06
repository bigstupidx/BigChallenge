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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t804;
// System.Byte[]
struct ByteU5BU5D_t759;
// System.Security.Cryptography.RSA
struct RSA_t810;
// System.Security.Cryptography.DSA
struct DSA_t817;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m4002 (PrivateKeyInfo_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m4003 (PrivateKeyInfo_t804 * __this, ByteU5BU5D_t759* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t759* PrivateKeyInfo_get_PrivateKey_m4004 (PrivateKeyInfo_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m4005 (PrivateKeyInfo_t804 * __this, ByteU5BU5D_t759* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t759* PrivateKeyInfo_RemoveLeadingZero_m4006 (Object_t * __this /* static, unused */, ByteU5BU5D_t759* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t759* PrivateKeyInfo_Normalize_m4007 (Object_t * __this /* static, unused */, ByteU5BU5D_t759* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t810 * PrivateKeyInfo_DecodeRSA_m4008 (Object_t * __this /* static, unused */, ByteU5BU5D_t759* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t817 * PrivateKeyInfo_DecodeDSA_m4009 (Object_t * __this /* static, unused */, ByteU5BU5D_t759* ___privateKey, DSAParameters_t920  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
