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
struct Comparison_1_t2384;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17688_gshared (Comparison_1_t2384 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17688(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2384 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17688_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17689_gshared (Comparison_1_t2384 * __this, UILineInfo_t458  ___x, UILineInfo_t458  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17689(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2384 *, UILineInfo_t458 , UILineInfo_t458 , const MethodInfo*))Comparison_1_Invoke_m17689_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17690_gshared (Comparison_1_t2384 * __this, UILineInfo_t458  ___x, UILineInfo_t458  ___y, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17690(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2384 *, UILineInfo_t458 , UILineInfo_t458 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17690_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17691_gshared (Comparison_1_t2384 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17691(__this, ___result, method) (( int32_t (*) (Comparison_1_t2384 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17691_gshared)(__this, ___result, method)
