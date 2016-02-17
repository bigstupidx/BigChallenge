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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t331;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t458;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t677;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m2730_gshared (UnityEvent_1_t331 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2730(__this, method) (( void (*) (UnityEvent_1_t331 *, const MethodInfo*))UnityEvent_1__ctor_m2730_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2526_gshared (UnityEvent_1_t331 * __this, UnityAction_1_t458 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2526(__this, ___call, method) (( void (*) (UnityEvent_1_t331 *, UnityAction_1_t458 *, const MethodInfo*))UnityEvent_1_AddListener_m2526_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m14675_gshared (UnityEvent_1_t331 * __this, UnityAction_1_t458 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m14675(__this, ___call, method) (( void (*) (UnityEvent_1_t331 *, UnityAction_1_t458 *, const MethodInfo*))UnityEvent_1_RemoveListener_m14675_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m14676_gshared (UnityEvent_1_t331 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m14676(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t331 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m14676_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t677 * UnityEvent_1_GetDelegate_m14677_gshared (UnityEvent_1_t331 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14677(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t677 * (*) (UnityEvent_1_t331 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m14677_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t677 * UnityEvent_1_GetDelegate_m14678_gshared (Object_t * __this /* static, unused */, UnityAction_1_t458 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m14678(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t677 * (*) (Object_t * /* static, unused */, UnityAction_1_t458 *, const MethodInfo*))UnityEvent_1_GetDelegate_m14678_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2735_gshared (UnityEvent_1_t331 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2735(__this, ___arg0, method) (( void (*) (UnityEvent_1_t331 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m2735_gshared)(__this, ___arg0, method)
