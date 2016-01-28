﻿#pragma once

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
struct RijndaelTransform_t1678;
// System.Security.Cryptography.Rijndael
struct Rijndael_t984;
// System.Byte[]
struct ByteU5BU5D_t799;
// System.UInt32[]
struct UInt32U5BU5D_t805;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m10223 (RijndaelTransform_t1678 * __this, Rijndael_t984 * ___algo, bool ___encryption, ByteU5BU5D_t799* ___key, ByteU5BU5D_t799* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m10224 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m10225 (RijndaelTransform_t1678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m10226 (RijndaelTransform_t1678 * __this, ByteU5BU5D_t799* ___input, ByteU5BU5D_t799* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m10227 (RijndaelTransform_t1678 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m10228 (RijndaelTransform_t1678 * __this, ByteU5BU5D_t799* ___indata, ByteU5BU5D_t799* ___outdata, UInt32U5BU5D_t805* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m10229 (RijndaelTransform_t1678 * __this, ByteU5BU5D_t799* ___indata, ByteU5BU5D_t799* ___outdata, UInt32U5BU5D_t805* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m10230 (RijndaelTransform_t1678 * __this, ByteU5BU5D_t799* ___indata, ByteU5BU5D_t799* ___outdata, UInt32U5BU5D_t805* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m10231 (RijndaelTransform_t1678 * __this, ByteU5BU5D_t799* ___indata, ByteU5BU5D_t799* ___outdata, UInt32U5BU5D_t805* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m10232 (RijndaelTransform_t1678 * __this, ByteU5BU5D_t799* ___indata, ByteU5BU5D_t799* ___outdata, UInt32U5BU5D_t805* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m10233 (RijndaelTransform_t1678 * __this, ByteU5BU5D_t799* ___indata, ByteU5BU5D_t799* ___outdata, UInt32U5BU5D_t805* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
