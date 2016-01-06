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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1943;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1945;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m12163_gshared (ObjectPool_1_t1943 * __this, UnityAction_1_t1945 * ___actionOnGet, UnityAction_1_t1945 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m12163(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1943 *, UnityAction_1_t1945 *, UnityAction_1_t1945 *, const MethodInfo*))ObjectPool_1__ctor_m12163_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m12165_gshared (ObjectPool_1_t1943 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m12165(__this, method) (( int32_t (*) (ObjectPool_1_t1943 *, const MethodInfo*))ObjectPool_1_get_countAll_m12165_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m12167_gshared (ObjectPool_1_t1943 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m12167(__this, ___value, method) (( void (*) (ObjectPool_1_t1943 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12167_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m12169_gshared (ObjectPool_1_t1943 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m12169(__this, method) (( int32_t (*) (ObjectPool_1_t1943 *, const MethodInfo*))ObjectPool_1_get_countActive_m12169_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m12171_gshared (ObjectPool_1_t1943 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m12171(__this, method) (( int32_t (*) (ObjectPool_1_t1943 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12171_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m12173_gshared (ObjectPool_1_t1943 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m12173(__this, method) (( Object_t * (*) (ObjectPool_1_t1943 *, const MethodInfo*))ObjectPool_1_Get_m12173_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m12175_gshared (ObjectPool_1_t1943 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m12175(__this, ___element, method) (( void (*) (ObjectPool_1_t1943 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m12175_gshared)(__this, ___element, method)
