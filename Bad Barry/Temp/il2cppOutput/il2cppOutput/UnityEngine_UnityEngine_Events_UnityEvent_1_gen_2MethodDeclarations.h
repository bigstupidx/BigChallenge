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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t222;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2090;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t625;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m2219_gshared (UnityEvent_1_t222 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2219(__this, method) (( void (*) (UnityEvent_1_t222 *, const MethodInfo*))UnityEvent_1__ctor_m2219_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13975_gshared (UnityEvent_1_t222 * __this, UnityAction_1_t2090 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m13975(__this, ___call, method) (( void (*) (UnityEvent_1_t222 *, UnityAction_1_t2090 *, const MethodInfo*))UnityEvent_1_AddListener_m13975_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13976_gshared (UnityEvent_1_t222 * __this, UnityAction_1_t2090 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13976(__this, ___call, method) (( void (*) (UnityEvent_1_t222 *, UnityAction_1_t2090 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13976_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13977_gshared (UnityEvent_1_t222 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13977(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t222 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13977_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t625 * UnityEvent_1_GetDelegate_m13978_gshared (UnityEvent_1_t222 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13978(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t625 * (*) (UnityEvent_1_t222 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13978_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t625 * UnityEvent_1_GetDelegate_m13979_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2090 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13979(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t625 * (*) (Object_t * /* static, unused */, UnityAction_1_t2090 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13979_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2223_gshared (UnityEvent_1_t222 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2223(__this, ___arg0, method) (( void (*) (UnityEvent_1_t222 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m2223_gshared)(__this, ___arg0, method)
