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
struct InvokableCall_1_t2134;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t430;
// System.Object[]
struct ObjectU5BU5D_t184;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m14096_gshared (InvokableCall_1_t2134 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m14096(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2134 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m14096_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m14097_gshared (InvokableCall_1_t2134 * __this, UnityAction_1_t430 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m14097(__this, ___action, method) (( void (*) (InvokableCall_1_t2134 *, UnityAction_1_t430 *, const MethodInfo*))InvokableCall_1__ctor_m14097_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m14098_gshared (InvokableCall_1_t2134 * __this, ObjectU5BU5D_t184* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m14098(__this, ___args, method) (( void (*) (InvokableCall_1_t2134 *, ObjectU5BU5D_t184*, const MethodInfo*))InvokableCall_1_Invoke_m14098_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m14099_gshared (InvokableCall_1_t2134 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m14099(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2134 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m14099_gshared)(__this, ___targetObj, ___method, method)
