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

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2196;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14991_gshared (Comparison_1_t2196 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14991(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2196 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14991_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14992_gshared (Comparison_1_t2196 * __this, UIVertex_t325  ___x, UIVertex_t325  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14992(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2196 *, UIVertex_t325 , UIVertex_t325 , const MethodInfo*))Comparison_1_Invoke_m14992_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14993_gshared (Comparison_1_t2196 * __this, UIVertex_t325  ___x, UIVertex_t325  ___y, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14993(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2196 *, UIVertex_t325 , UIVertex_t325 , AsyncCallback_t315 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14993_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14994_gshared (Comparison_1_t2196 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14994(__this, ___result, method) (( int32_t (*) (Comparison_1_t2196 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14994_gshared)(__this, ___result, method)
