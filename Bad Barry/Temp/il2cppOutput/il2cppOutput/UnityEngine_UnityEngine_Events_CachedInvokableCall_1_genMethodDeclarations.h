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
struct CachedInvokableCall_1_t679;
// UnityEngine.Object
struct Object_t112;
struct Object_t112_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t144;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3606_gshared (CachedInvokableCall_1_t679 * __this, Object_t112 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3606(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t679 *, Object_t112 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3606_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m17596_gshared (CachedInvokableCall_1_t679 * __this, ObjectU5BU5D_t144* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m17596(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t679 *, ObjectU5BU5D_t144*, const MethodInfo*))CachedInvokableCall_1_Invoke_m17596_gshared)(__this, ___args, method)
