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

// Mono.Math.BigInteger
struct BigInteger_t1213;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1844;
// System.UInt32[]
struct UInt32U5BU5D_t778;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1213 * Kernel_AddSameSign_m6990 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi1, BigInteger_t1213 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1213 * Kernel_Subtract_m6991 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___big, BigInteger_t1213 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m6992 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___big, BigInteger_t1213 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m6993 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi1, BigInteger_t1213 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m6994 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi1, BigInteger_t1213 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m6995 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m6996 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1844* Kernel_DwordDivMod_m6997 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1844* Kernel_multiByteDivide_m6998 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi1, BigInteger_t1213 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1213 * Kernel_LeftShift_m6999 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1213 * Kernel_RightShift_m7000 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1213 * Kernel_MultiplyByDword_m7001 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m7002 (Object_t * __this /* static, unused */, UInt32U5BU5D_t778* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t778* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t778* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m7003 (Object_t * __this /* static, unused */, UInt32U5BU5D_t778* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t778* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t778* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m7004 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1213 * Kernel_modInverse_m7005 (Object_t * __this /* static, unused */, BigInteger_t1213 * ___bi, BigInteger_t1213 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
