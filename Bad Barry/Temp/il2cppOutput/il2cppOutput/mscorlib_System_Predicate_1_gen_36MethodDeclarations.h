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

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2391;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17620_gshared (Predicate_1_t2391 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17620(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2391 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17620_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17621_gshared (Predicate_1_t2391 * __this, UICharInfo_t475  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17621(__this, ___obj, method) (( bool (*) (Predicate_1_t2391 *, UICharInfo_t475 , const MethodInfo*))Predicate_1_Invoke_m17621_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17622_gshared (Predicate_1_t2391 * __this, UICharInfo_t475  ___obj, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17622(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2391 *, UICharInfo_t475 , AsyncCallback_t315 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17622_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17623_gshared (Predicate_1_t2391 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17623(__this, ___result, method) (( bool (*) (Predicate_1_t2391 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17623_gshared)(__this, ___result, method)