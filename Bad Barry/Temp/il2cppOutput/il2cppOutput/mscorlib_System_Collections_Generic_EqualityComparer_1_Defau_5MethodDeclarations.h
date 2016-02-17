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
struct DefaultComparer_t2321;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m16877_gshared (DefaultComparer_t2321 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16877(__this, method) (( void (*) (DefaultComparer_t2321 *, const MethodInfo*))DefaultComparer__ctor_m16877_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16878_gshared (DefaultComparer_t2321 * __this, Vector2_t8  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16878(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2321 *, Vector2_t8 , const MethodInfo*))DefaultComparer_GetHashCode_m16878_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16879_gshared (DefaultComparer_t2321 * __this, Vector2_t8  ___x, Vector2_t8  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16879(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2321 *, Vector2_t8 , Vector2_t8 , const MethodInfo*))DefaultComparer_Equals_m16879_gshared)(__this, ___x, ___y, method)
