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
struct DefaultComparer_t2062;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m13306_gshared (DefaultComparer_t2062 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m13306(__this, method) (( void (*) (DefaultComparer_t2062 *, const MethodInfo*))DefaultComparer__ctor_m13306_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m13307_gshared (DefaultComparer_t2062 * __this, RaycastResult_t214  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m13307(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2062 *, RaycastResult_t214 , const MethodInfo*))DefaultComparer_GetHashCode_m13307_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m13308_gshared (DefaultComparer_t2062 * __this, RaycastResult_t214  ___x, RaycastResult_t214  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m13308(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2062 *, RaycastResult_t214 , RaycastResult_t214 , const MethodInfo*))DefaultComparer_Equals_m13308_gshared)(__this, ___x, ___y, method)
