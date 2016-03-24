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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2306;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m16712_gshared (DefaultComparer_t2306 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16712(__this, method) (( void (*) (DefaultComparer_t2306 *, const MethodInfo*))DefaultComparer__ctor_m16712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16713_gshared (DefaultComparer_t2306 * __this, Color32_t432  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16713(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2306 *, Color32_t432 , const MethodInfo*))DefaultComparer_GetHashCode_m16713_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16714_gshared (DefaultComparer_t2306 * __this, Color32_t432  ___x, Color32_t432  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16714(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2306 *, Color32_t432 , Color32_t432 , const MethodInfo*))DefaultComparer_Equals_m16714_gshared)(__this, ___x, ___y, method)
