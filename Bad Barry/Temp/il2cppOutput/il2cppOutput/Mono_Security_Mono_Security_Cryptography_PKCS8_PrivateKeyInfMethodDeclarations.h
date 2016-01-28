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
struct PrivateKeyInfo_t844;
// System.Byte[]
struct ByteU5BU5D_t799;
// System.Security.Cryptography.RSA
struct RSA_t850;
// System.Security.Cryptography.DSA
struct DSA_t857;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m4254 (PrivateKeyInfo_t844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m4255 (PrivateKeyInfo_t844 * __this, ByteU5BU5D_t799* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t799* PrivateKeyInfo_get_PrivateKey_m4256 (PrivateKeyInfo_t844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m4257 (PrivateKeyInfo_t844 * __this, ByteU5BU5D_t799* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t799* PrivateKeyInfo_RemoveLeadingZero_m4258 (Object_t * __this /* static, unused */, ByteU5BU5D_t799* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t799* PrivateKeyInfo_Normalize_m4259 (Object_t * __this /* static, unused */, ByteU5BU5D_t799* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t850 * PrivateKeyInfo_DecodeRSA_m4260 (Object_t * __this /* static, unused */, ByteU5BU5D_t799* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t857 * PrivateKeyInfo_DecodeDSA_m4261 (Object_t * __this /* static, unused */, ByteU5BU5D_t799* ___privateKey, DSAParameters_t960  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
