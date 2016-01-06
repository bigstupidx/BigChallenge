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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2205;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m15897_gshared (DefaultComparer_t2205 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15897(__this, method) (( void (*) (DefaultComparer_t2205 *, const MethodInfo*))DefaultComparer__ctor_m15897_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15898_gshared (DefaultComparer_t2205 * __this, Vector2_t23  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15898(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2205 *, Vector2_t23 , const MethodInfo*))DefaultComparer_GetHashCode_m15898_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15899_gshared (DefaultComparer_t2205 * __this, Vector2_t23  ___x, Vector2_t23  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15899(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2205 *, Vector2_t23 , Vector2_t23 , const MethodInfo*))DefaultComparer_Equals_m15899_gshared)(__this, ___x, ___y, method)
