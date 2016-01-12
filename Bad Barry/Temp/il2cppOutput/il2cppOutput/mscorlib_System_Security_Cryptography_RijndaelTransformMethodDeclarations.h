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

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1651;
// System.Security.Cryptography.Rijndael
struct Rijndael_t957;
// System.Byte[]
struct ByteU5BU5D_t772;
// System.UInt32[]
struct UInt32U5BU5D_t778;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m10045 (RijndaelTransform_t1651 * __this, Rijndael_t957 * ___algo, bool ___encryption, ByteU5BU5D_t772* ___key, ByteU5BU5D_t772* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m10046 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m10047 (RijndaelTransform_t1651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m10048 (RijndaelTransform_t1651 * __this, ByteU5BU5D_t772* ___input, ByteU5BU5D_t772* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m10049 (RijndaelTransform_t1651 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m10050 (RijndaelTransform_t1651 * __this, ByteU5BU5D_t772* ___indata, ByteU5BU5D_t772* ___outdata, UInt32U5BU5D_t778* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m10051 (RijndaelTransform_t1651 * __this, ByteU5BU5D_t772* ___indata, ByteU5BU5D_t772* ___outdata, UInt32U5BU5D_t778* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m10052 (RijndaelTransform_t1651 * __this, ByteU5BU5D_t772* ___indata, ByteU5BU5D_t772* ___outdata, UInt32U5BU5D_t778* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m10053 (RijndaelTransform_t1651 * __this, ByteU5BU5D_t772* ___indata, ByteU5BU5D_t772* ___outdata, UInt32U5BU5D_t778* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m10054 (RijndaelTransform_t1651 * __this, ByteU5BU5D_t772* ___indata, ByteU5BU5D_t772* ___outdata, UInt32U5BU5D_t778* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m10055 (RijndaelTransform_t1651 * __this, ByteU5BU5D_t772* ___indata, ByteU5BU5D_t772* ___outdata, UInt32U5BU5D_t778* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
