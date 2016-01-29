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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2274;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16351_gshared (Comparison_1_t2274 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16351(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2274 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16351_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16352_gshared (Comparison_1_t2274 * __this, Vector3_t20  ___x, Vector3_t20  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16352(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2274 *, Vector3_t20 , Vector3_t20 , const MethodInfo*))Comparison_1_Invoke_m16352_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16353_gshared (Comparison_1_t2274 * __this, Vector3_t20  ___x, Vector3_t20  ___y, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16353(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2274 *, Vector3_t20 , Vector3_t20 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16353_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16354_gshared (Comparison_1_t2274 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16354(__this, ___result, method) (( int32_t (*) (Comparison_1_t2274 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16354_gshared)(__this, ___result, method)
