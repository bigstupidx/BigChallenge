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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2587;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m20095_gshared (StaticGetter_1_t2587 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m20095(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2587 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m20095_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m20096_gshared (StaticGetter_1_t2587 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m20096(__this, method) (( Object_t * (*) (StaticGetter_1_t2587 *, const MethodInfo*))StaticGetter_1_Invoke_m20096_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m20097_gshared (StaticGetter_1_t2587 * __this, AsyncCallback_t266 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m20097(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2587 *, AsyncCallback_t266 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m20097_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m20098_gshared (StaticGetter_1_t2587 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m20098(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2587 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m20098_gshared)(__this, ___result, method)
