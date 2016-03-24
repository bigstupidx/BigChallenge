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

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t2171;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t455;
// System.Object[]
struct ObjectU5BU5D_t179;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14653_gshared (InvokableCall_1_t2171 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m14653(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2171 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m14653_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14654_gshared (InvokableCall_1_t2171 * __this, UnityAction_1_t455 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m14654(__this, ___action, method) (( void (*) (InvokableCall_1_t2171 *, UnityAction_1_t455 *, const MethodInfo*))InvokableCall_1__ctor_m14654_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14655_gshared (InvokableCall_1_t2171 * __this, ObjectU5BU5D_t179* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m14655(__this, ___args, method) (( void (*) (InvokableCall_1_t2171 *, ObjectU5BU5D_t179*, const MethodInfo*))InvokableCall_1_Invoke_m14655_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14656_gshared (InvokableCall_1_t2171 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m14656(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2171 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m14656_gshared)(__this, ___targetObj, ___method, method)
