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
struct Comparison_1_t200;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2321_gshared (Comparison_1_t200 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2321(__this, ___object, ___method, method) (( void (*) (Comparison_1_t200 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2321_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12967_gshared (Comparison_1_t200 * __this, RaycastResult_t231  ___x, RaycastResult_t231  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12967(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t200 *, RaycastResult_t231 , RaycastResult_t231 , const MethodInfo*))Comparison_1_Invoke_m12967_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12968_gshared (Comparison_1_t200 * __this, RaycastResult_t231  ___x, RaycastResult_t231  ___y, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12968(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t200 *, RaycastResult_t231 , RaycastResult_t231 , AsyncCallback_t315 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12968_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12969_gshared (Comparison_1_t200 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12969(__this, ___result, method) (( int32_t (*) (Comparison_1_t200 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12969_gshared)(__this, ___result, method)
