﻿#pragma once

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
struct UnityEvent_1_t266;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t396;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t612;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m2381_gshared (UnityEvent_1_t266 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2381(__this, method) (( void (*) (UnityEvent_1_t266 *, const MethodInfo*))UnityEvent_1__ctor_m2381_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2171_gshared (UnityEvent_1_t266 * __this, UnityAction_1_t396 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2171(__this, ___call, method) (( void (*) (UnityEvent_1_t266 *, UnityAction_1_t396 *, const MethodInfo*))UnityEvent_1_AddListener_m2171_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13719_gshared (UnityEvent_1_t266 * __this, UnityAction_1_t396 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13719(__this, ___call, method) (( void (*) (UnityEvent_1_t266 *, UnityAction_1_t396 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13719_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13720_gshared (UnityEvent_1_t266 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13720(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t266 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13720_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t612 * UnityEvent_1_GetDelegate_m13721_gshared (UnityEvent_1_t266 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13721(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t612 * (*) (UnityEvent_1_t266 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13721_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t612 * UnityEvent_1_GetDelegate_m13722_gshared (Object_t * __this /* static, unused */, UnityAction_1_t396 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13722(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t612 * (*) (Object_t * /* static, unused */, UnityAction_1_t396 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13722_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2386_gshared (UnityEvent_1_t266 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2386(__this, ___arg0, method) (( void (*) (UnityEvent_1_t266 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m2386_gshared)(__this, ___arg0, method)