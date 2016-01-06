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
struct Comparison_1_t2199;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t251;
// System.AsyncCallback
struct AsyncCallback_t252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15767_gshared (Comparison_1_t2199 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15767(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2199 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15767_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15768_gshared (Comparison_1_t2199 * __this, Color32_t371  ___x, Color32_t371  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15768(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2199 *, Color32_t371 , Color32_t371 , const MethodInfo*))Comparison_1_Invoke_m15768_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15769_gshared (Comparison_1_t2199 * __this, Color32_t371  ___x, Color32_t371  ___y, AsyncCallback_t252 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15769(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2199 *, Color32_t371 , Color32_t371 , AsyncCallback_t252 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15769_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15770_gshared (Comparison_1_t2199 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15770(__this, ___result, method) (( int32_t (*) (Comparison_1_t2199 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15770_gshared)(__this, ___result, method)
