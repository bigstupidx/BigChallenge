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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t205;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2343_gshared (Comparison_1_t205 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2343(__this, ___object, ___method, method) (( void (*) (Comparison_1_t205 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2343_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12993_gshared (Comparison_1_t205 * __this, RaycastResult_t236  ___x, RaycastResult_t236  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12993(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t205 *, RaycastResult_t236 , RaycastResult_t236 , const MethodInfo*))Comparison_1_Invoke_m12993_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12994_gshared (Comparison_1_t205 * __this, RaycastResult_t236  ___x, RaycastResult_t236  ___y, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12994(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t205 *, RaycastResult_t236 , RaycastResult_t236 , AsyncCallback_t318 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12994_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12995_gshared (Comparison_1_t205 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12995(__this, ___result, method) (( int32_t (*) (Comparison_1_t205 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12995_gshared)(__this, ___result, method)
