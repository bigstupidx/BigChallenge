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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
struct UnityAdsDelegate_2_t2374;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m17358_gshared (UnityAdsDelegate_2_t2374 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m17358(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t2374 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m17358_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m17359_gshared (UnityAdsDelegate_2_t2374 * __this, Object_t * ___p1, bool ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m17359(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t2374 *, Object_t *, bool, const MethodInfo*))UnityAdsDelegate_2_Invoke_m17359_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m17361_gshared (UnityAdsDelegate_2_t2374 * __this, Object_t * ___p1, bool ___p2, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m17361(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t2374 *, Object_t *, bool, AsyncCallback_t315 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m17361_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m17363_gshared (UnityAdsDelegate_2_t2374 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m17363(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t2374 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m17363_gshared)(__this, ___result, method)