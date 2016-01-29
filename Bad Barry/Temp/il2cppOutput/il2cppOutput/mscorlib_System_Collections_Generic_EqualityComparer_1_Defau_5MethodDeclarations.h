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
struct DefaultComparer_t2300;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m16773_gshared (DefaultComparer_t2300 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16773(__this, method) (( void (*) (DefaultComparer_t2300 *, const MethodInfo*))DefaultComparer__ctor_m16773_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16774_gshared (DefaultComparer_t2300 * __this, Vector2_t33  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16774(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2300 *, Vector2_t33 , const MethodInfo*))DefaultComparer_GetHashCode_m16774_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16775_gshared (DefaultComparer_t2300 * __this, Vector2_t33  ___x, Vector2_t33  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16775(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2300 *, Vector2_t33 , Vector2_t33 , const MethodInfo*))DefaultComparer_Equals_m16775_gshared)(__this, ___x, ___y, method)
