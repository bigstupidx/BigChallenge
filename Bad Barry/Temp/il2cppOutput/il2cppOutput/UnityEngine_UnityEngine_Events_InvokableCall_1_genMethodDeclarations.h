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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2098;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2057;
// System.Object[]
struct ObjectU5BU5D_t179;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13608_gshared (InvokableCall_1_t2098 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13608(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2098 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13608_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13609_gshared (InvokableCall_1_t2098 * __this, UnityAction_1_t2057 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13609(__this, ___action, method) (( void (*) (InvokableCall_1_t2098 *, UnityAction_1_t2057 *, const MethodInfo*))InvokableCall_1__ctor_m13609_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13610_gshared (InvokableCall_1_t2098 * __this, ObjectU5BU5D_t179* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13610(__this, ___args, method) (( void (*) (InvokableCall_1_t2098 *, ObjectU5BU5D_t179*, const MethodInfo*))InvokableCall_1_Invoke_m13610_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13611_gshared (InvokableCall_1_t2098 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13611(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2098 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13611_gshared)(__this, ___targetObj, ___method, method)
