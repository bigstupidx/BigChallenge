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

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2294;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16641_gshared (Comparison_1_t2294 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16641(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2294 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16641_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16642_gshared (Comparison_1_t2294 * __this, Color32_t416  ___x, Color32_t416  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16642(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2294 *, Color32_t416 , Color32_t416 , const MethodInfo*))Comparison_1_Invoke_m16642_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16643_gshared (Comparison_1_t2294 * __this, Color32_t416  ___x, Color32_t416  ___y, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16643(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2294 *, Color32_t416 , Color32_t416 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16643_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16644_gshared (Comparison_1_t2294 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16644(__this, ___result, method) (( int32_t (*) (Comparison_1_t2294 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16644_gshared)(__this, ___result, method)
