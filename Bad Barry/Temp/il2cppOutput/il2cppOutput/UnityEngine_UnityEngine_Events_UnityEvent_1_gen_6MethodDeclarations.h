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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2081;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2041;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t657;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m13512_gshared (UnityEvent_1_t2081 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m13512(__this, method) (( void (*) (UnityEvent_1_t2081 *, const MethodInfo*))UnityEvent_1__ctor_m13512_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13514_gshared (UnityEvent_1_t2081 * __this, UnityAction_1_t2041 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m13514(__this, ___call, method) (( void (*) (UnityEvent_1_t2081 *, UnityAction_1_t2041 *, const MethodInfo*))UnityEvent_1_AddListener_m13514_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13516_gshared (UnityEvent_1_t2081 * __this, UnityAction_1_t2041 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13516(__this, ___call, method) (( void (*) (UnityEvent_1_t2081 *, UnityAction_1_t2041 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13516_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13518_gshared (UnityEvent_1_t2081 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13518(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2081 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13518_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t657 * UnityEvent_1_GetDelegate_m13520_gshared (UnityEvent_1_t2081 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13520(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t657 * (*) (UnityEvent_1_t2081 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13520_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t657 * UnityEvent_1_GetDelegate_m13522_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2041 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13522(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t657 * (*) (Object_t * /* static, unused */, UnityAction_1_t2041 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13522_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m13523_gshared (UnityEvent_1_t2081 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m13523(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2081 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m13523_gshared)(__this, ___arg0, method)
