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
struct Comparison_1_t109;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1885_gshared (Comparison_1_t109 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1885(__this, ___object, ___method, method) (( void (*) (Comparison_1_t109 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1885_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11863_gshared (Comparison_1_t109 * __this, RaycastResult_t140  ___x, RaycastResult_t140  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11863(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t109 *, RaycastResult_t140 , RaycastResult_t140 , const MethodInfo*))Comparison_1_Invoke_m11863_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11864_gshared (Comparison_1_t109 * __this, RaycastResult_t140  ___x, RaycastResult_t140  ___y, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11864(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t109 *, RaycastResult_t140 , RaycastResult_t140 , AsyncCallback_t229 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11864_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11865_gshared (Comparison_1_t109 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11865(__this, ___result, method) (( int32_t (*) (Comparison_1_t109 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11865_gshared)(__this, ___result, method)
