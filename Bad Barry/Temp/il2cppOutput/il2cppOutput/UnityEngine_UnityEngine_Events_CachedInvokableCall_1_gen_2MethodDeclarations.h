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

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_t632;
// UnityEngine.Object
struct Object_t59;
struct Object_t59_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t79;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3277_gshared (CachedInvokableCall_1_t632 * __this, Object_t59 * ___target, MethodInfo_t * ___theFunction, bool ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3277(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t632 *, Object_t59 *, MethodInfo_t *, bool, const MethodInfo*))CachedInvokableCall_1__ctor_m3277_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16284_gshared (CachedInvokableCall_1_t632 * __this, ObjectU5BU5D_t79* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16284(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t632 *, ObjectU5BU5D_t79*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16284_gshared)(__this, ___args, method)
