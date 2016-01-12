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

// System.Byte[]
struct ByteU5BU5D_t772;
// System.Security.Cryptography.RSA
struct RSA_t823;

#include "codegen/il2cpp-codegen.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m7055 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m7056 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t772* CryptoConvert_GetBytesLE_m7057 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C" ByteU5BU5D_t772* CryptoConvert_Trim_m7058 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t823 * CryptoConvert_FromCapiPrivateKeyBlob_m7059 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t772* CryptoConvert_ToCapiPrivateKeyBlob_m7060 (Object_t * __this /* static, unused */, RSA_t823 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t823 * CryptoConvert_FromCapiPublicKeyBlob_m7061 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t823 * CryptoConvert_FromCapiPublicKeyBlob_m7062 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t772* CryptoConvert_ToCapiPublicKeyBlob_m7063 (Object_t * __this /* static, unused */, RSA_t823 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C" RSA_t823 * CryptoConvert_FromCapiKeyBlob_m7064 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t823 * CryptoConvert_FromCapiKeyBlob_m7065 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t772* CryptoConvert_ToCapiKeyBlob_m7066 (Object_t * __this /* static, unused */, RSA_t823 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
