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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1191;
// Mono.Math.BigInteger
struct BigInteger_t1192;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6827 (ModulusRing_t1191 * __this, BigInteger_t1192 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6828 (ModulusRing_t1191 * __this, BigInteger_t1192 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1192 * ModulusRing_Multiply_m6829 (ModulusRing_t1191 * __this, BigInteger_t1192 * ___a, BigInteger_t1192 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1192 * ModulusRing_Difference_m6830 (ModulusRing_t1191 * __this, BigInteger_t1192 * ___a, BigInteger_t1192 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1192 * ModulusRing_Pow_m6831 (ModulusRing_t1191 * __this, BigInteger_t1192 * ___a, BigInteger_t1192 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1192 * ModulusRing_Pow_m6832 (ModulusRing_t1191 * __this, uint32_t ___b, BigInteger_t1192 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
