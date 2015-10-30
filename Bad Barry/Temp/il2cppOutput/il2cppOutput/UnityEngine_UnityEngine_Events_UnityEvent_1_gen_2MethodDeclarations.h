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
struct UnityEvent_1_t165;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1930;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t575;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m1874_gshared (UnityEvent_1_t165 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1874(__this, method) (( void (*) (UnityEvent_1_t165 *, const MethodInfo*))UnityEvent_1__ctor_m1874_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m12823_gshared (UnityEvent_1_t165 * __this, UnityAction_1_t1930 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m12823(__this, ___call, method) (( void (*) (UnityEvent_1_t165 *, UnityAction_1_t1930 *, const MethodInfo*))UnityEvent_1_AddListener_m12823_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12824_gshared (UnityEvent_1_t165 * __this, UnityAction_1_t1930 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12824(__this, ___call, method) (( void (*) (UnityEvent_1_t165 *, UnityAction_1_t1930 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12824_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12825_gshared (UnityEvent_1_t165 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12825(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t165 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12825_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t575 * UnityEvent_1_GetDelegate_m12826_gshared (UnityEvent_1_t165 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12826(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t575 * (*) (UnityEvent_1_t165 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12826_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t575 * UnityEvent_1_GetDelegate_m12827_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1930 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12827(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t575 * (*) (Object_t * /* static, unused */, UnityAction_1_t1930 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12827_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1878_gshared (UnityEvent_1_t165 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1878(__this, ___arg0, method) (( void (*) (UnityEvent_1_t165 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m1878_gshared)(__this, ___arg0, method)
