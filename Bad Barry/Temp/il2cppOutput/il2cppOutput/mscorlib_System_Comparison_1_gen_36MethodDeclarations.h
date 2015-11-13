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
struct Comparison_1_t2263;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16612_gshared (Comparison_1_t2263 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16612(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2263 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16612_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16613_gshared (Comparison_1_t2263 * __this, UILineInfo_t393  ___x, UILineInfo_t393  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16613(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2263 *, UILineInfo_t393 , UILineInfo_t393 , const MethodInfo*))Comparison_1_Invoke_m16613_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16614_gshared (Comparison_1_t2263 * __this, UILineInfo_t393  ___x, UILineInfo_t393  ___y, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16614(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2263 *, UILineInfo_t393 , UILineInfo_t393 , AsyncCallback_t229 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16614_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16615_gshared (Comparison_1_t2263 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16615(__this, ___result, method) (( int32_t (*) (Comparison_1_t2263 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16615_gshared)(__this, ___result, method)
