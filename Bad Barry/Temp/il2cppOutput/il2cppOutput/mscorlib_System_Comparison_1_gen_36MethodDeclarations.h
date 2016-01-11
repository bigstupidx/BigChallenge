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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2332;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17186_gshared (Comparison_1_t2332 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17186(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2332 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17186_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17187_gshared (Comparison_1_t2332 * __this, UICharInfo_t430  ___x, UICharInfo_t430  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17187(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2332 *, UICharInfo_t430 , UICharInfo_t430 , const MethodInfo*))Comparison_1_Invoke_m17187_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17188_gshared (Comparison_1_t2332 * __this, UICharInfo_t430  ___x, UICharInfo_t430  ___y, AsyncCallback_t266 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17188(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2332 *, UICharInfo_t430 , UICharInfo_t430 , AsyncCallback_t266 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17188_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17189_gshared (Comparison_1_t2332 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17189(__this, ___result, method) (( int32_t (*) (Comparison_1_t2332 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17189_gshared)(__this, ___result, method)
