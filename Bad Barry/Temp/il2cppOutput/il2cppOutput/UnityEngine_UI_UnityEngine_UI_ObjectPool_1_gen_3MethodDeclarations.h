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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m13162(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2049 *, UnityAction_1_t2050 *, UnityAction_1_t2050 *, const MethodInfo*))ObjectPool_1__ctor_m12989_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m13163(__this, method) (( int32_t (*) (ObjectPool_1_t2049 *, const MethodInfo*))ObjectPool_1_get_countAll_m12991_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13164(__this, ___value, method) (( void (*) (ObjectPool_1_t2049 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12993_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m13165(__this, method) (( int32_t (*) (ObjectPool_1_t2049 *, const MethodInfo*))ObjectPool_1_get_countActive_m12995_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13166(__this, method) (( int32_t (*) (ObjectPool_1_t2049 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12997_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m13167(__this, method) (( List_1_t422 * (*) (ObjectPool_1_t2049 *, const MethodInfo*))ObjectPool_1_Get_m12999_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m13168(__this, ___element, method) (( void (*) (ObjectPool_1_t2049 *, List_1_t422 *, const MethodInfo*))ObjectPool_1_Release_m13001_gshared)(__this, ___element, method)
