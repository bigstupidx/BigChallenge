﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t6_310;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m6_1590_gshared (UnityAction_1_t6_310 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m6_1590(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t6_310 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m6_1590_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m6_1591_gshared (UnityAction_1_t6_310 * __this, Vector2_t6_48  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m6_1591(__this, ___arg0, method) (( void (*) (UnityAction_1_t6_310 *, Vector2_t6_48 , const MethodInfo*))UnityAction_1_Invoke_m6_1591_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m6_1592_gshared (UnityAction_1_t6_310 * __this, Vector2_t6_48  ___arg0, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m6_1592(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t6_310 *, Vector2_t6_48 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m6_1592_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m6_1593_gshared (UnityAction_1_t6_310 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m6_1593(__this, ___result, method) (( void (*) (UnityAction_1_t6_310 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m6_1593_gshared)(__this, ___result, method)
