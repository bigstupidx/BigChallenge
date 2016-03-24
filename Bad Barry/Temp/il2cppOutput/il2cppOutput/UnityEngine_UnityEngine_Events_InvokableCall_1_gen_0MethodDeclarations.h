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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2128;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t427;
// System.Object[]
struct ObjectU5BU5D_t179;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14070_gshared (InvokableCall_1_t2128 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m14070(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2128 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m14070_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14071_gshared (InvokableCall_1_t2128 * __this, UnityAction_1_t427 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m14071(__this, ___action, method) (( void (*) (InvokableCall_1_t2128 *, UnityAction_1_t427 *, const MethodInfo*))InvokableCall_1__ctor_m14071_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14072_gshared (InvokableCall_1_t2128 * __this, ObjectU5BU5D_t179* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m14072(__this, ___args, method) (( void (*) (InvokableCall_1_t2128 *, ObjectU5BU5D_t179*, const MethodInfo*))InvokableCall_1_Invoke_m14072_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14073_gshared (InvokableCall_1_t2128 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m14073(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2128 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m14073_gshared)(__this, ___targetObj, ___method, method)
