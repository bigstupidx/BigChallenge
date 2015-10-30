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
struct DefaultComparer_t2073;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m14939_gshared (DefaultComparer_t2073 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14939(__this, method) (( void (*) (DefaultComparer_t2073 *, const MethodInfo*))DefaultComparer__ctor_m14939_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14940_gshared (DefaultComparer_t2073 * __this, Color32_t329  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14940(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2073 *, Color32_t329 , const MethodInfo*))DefaultComparer_GetHashCode_m14940_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14941_gshared (DefaultComparer_t2073 * __this, Color32_t329  ___x, Color32_t329  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14941(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2073 *, Color32_t329 , Color32_t329 , const MethodInfo*))DefaultComparer_Equals_m14941_gshared)(__this, ___x, ___y, method)
