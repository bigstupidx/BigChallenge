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

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t724;
// UnityEngine.Object
struct Object_t162;
struct Object_t162_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t179;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3870_gshared (CachedInvokableCall_1_t724 * __this, Object_t162 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3870(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t724 *, Object_t162 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3870_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m17947_gshared (CachedInvokableCall_1_t724 * __this, ObjectU5BU5D_t179* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m17947(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t724 *, ObjectU5BU5D_t179*, const MethodInfo*))CachedInvokableCall_1_Invoke_m17947_gshared)(__this, ___args, method)
