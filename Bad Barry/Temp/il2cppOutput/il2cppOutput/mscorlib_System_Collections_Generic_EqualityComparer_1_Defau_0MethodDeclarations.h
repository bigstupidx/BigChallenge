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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1969;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m12479_gshared (DefaultComparer_t1969 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12479(__this, method) (( void (*) (DefaultComparer_t1969 *, const MethodInfo*))DefaultComparer__ctor_m12479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12480_gshared (DefaultComparer_t1969 * __this, RaycastResult_t166  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12480(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1969 *, RaycastResult_t166 , const MethodInfo*))DefaultComparer_GetHashCode_m12480_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12481_gshared (DefaultComparer_t1969 * __this, RaycastResult_t166  ___x, RaycastResult_t166  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12481(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1969 *, RaycastResult_t166 , RaycastResult_t166 , const MethodInfo*))DefaultComparer_Equals_m12481_gshared)(__this, ___x, ___y, method)
