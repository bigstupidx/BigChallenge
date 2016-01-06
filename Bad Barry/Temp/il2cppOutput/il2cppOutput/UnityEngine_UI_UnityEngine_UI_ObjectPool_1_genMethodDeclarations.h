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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m2020(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t160 *, UnityAction_1_t162 *, UnityAction_1_t162 *, const MethodInfo*))ObjectPool_1__ctor_m12163_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m12164(__this, method) (( int32_t (*) (ObjectPool_1_t160 *, const MethodInfo*))ObjectPool_1_get_countAll_m12165_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m12166(__this, ___value, method) (( void (*) (ObjectPool_1_t160 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12167_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m12168(__this, method) (( int32_t (*) (ObjectPool_1_t160 *, const MethodInfo*))ObjectPool_1_get_countActive_m12169_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m12170(__this, method) (( int32_t (*) (ObjectPool_1_t160 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12171_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m12172(__this, method) (( List_1_t346 * (*) (ObjectPool_1_t160 *, const MethodInfo*))ObjectPool_1_Get_m12173_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m12174(__this, ___element, method) (( void (*) (ObjectPool_1_t160 *, List_1_t346 *, const MethodInfo*))ObjectPool_1_Release_m12175_gshared)(__this, ___element, method)
