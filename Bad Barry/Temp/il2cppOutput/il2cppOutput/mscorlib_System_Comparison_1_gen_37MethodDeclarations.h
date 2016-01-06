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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2292;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t251;
// System.AsyncCallback
struct AsyncCallback_t252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16808_gshared (Comparison_1_t2292 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16808(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2292 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16808_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16809_gshared (Comparison_1_t2292 * __this, UILineInfo_t414  ___x, UILineInfo_t414  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16809(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2292 *, UILineInfo_t414 , UILineInfo_t414 , const MethodInfo*))Comparison_1_Invoke_m16809_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16810_gshared (Comparison_1_t2292 * __this, UILineInfo_t414  ___x, UILineInfo_t414  ___y, AsyncCallback_t252 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16810(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2292 *, UILineInfo_t414 , UILineInfo_t414 , AsyncCallback_t252 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16810_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16811_gshared (Comparison_1_t2292 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16811(__this, ___result, method) (( int32_t (*) (Comparison_1_t2292 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16811_gshared)(__this, ___result, method)
