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

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t1653;
// System.Byte[]
struct ByteU5BU5D_t772;
// System.UInt32[]
struct UInt32U5BU5D_t778;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1Internal::.ctor()
extern "C" void SHA1Internal__ctor_m10063 (SHA1Internal_t1653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Internal_HashCore_m10064 (SHA1Internal_t1653 * __this, ByteU5BU5D_t772* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Internal::HashFinal()
extern "C" ByteU5BU5D_t772* SHA1Internal_HashFinal_m10065 (SHA1Internal_t1653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::Initialize()
extern "C" void SHA1Internal_Initialize_m10066 (SHA1Internal_t1653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessBlock(System.Byte[],System.UInt32)
extern "C" void SHA1Internal_ProcessBlock_m10067 (SHA1Internal_t1653 * __this, ByteU5BU5D_t772* ___inputBuffer, uint32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::InitialiseBuff(System.UInt32[],System.Byte[],System.UInt32)
extern "C" void SHA1Internal_InitialiseBuff_m10068 (Object_t * __this /* static, unused */, UInt32U5BU5D_t778* ___buff, ByteU5BU5D_t772* ___input, uint32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::FillBuff(System.UInt32[])
extern "C" void SHA1Internal_FillBuff_m10069 (Object_t * __this /* static, unused */, UInt32U5BU5D_t778* ___buff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Internal_ProcessFinalBlock_m10070 (SHA1Internal_t1653 * __this, ByteU5BU5D_t772* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA1Internal_AddLength_m10071 (SHA1Internal_t1653 * __this, uint64_t ___length, ByteU5BU5D_t772* ___buffer, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
