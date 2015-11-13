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

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2282;
// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t102;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m16779_gshared (CachedInvokableCall_1_t2282 * __this, Object_t79 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m16779(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2282 *, Object_t79 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m16779_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16780_gshared (CachedInvokableCall_1_t2282 * __this, ObjectU5BU5D_t102* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16780(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2282 *, ObjectU5BU5D_t102*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16780_gshared)(__this, ___args, method)
