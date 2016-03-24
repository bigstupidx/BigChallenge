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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2454;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18422_gshared (Comparison_1_t2454 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m18422(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2454 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m18422_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18423_gshared (Comparison_1_t2454 * __this, KeyValuePair_2_t1968  ___x, KeyValuePair_2_t1968  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m18423(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2454 *, KeyValuePair_2_t1968 , KeyValuePair_2_t1968 , const MethodInfo*))Comparison_1_Invoke_m18423_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18424_gshared (Comparison_1_t2454 * __this, KeyValuePair_2_t1968  ___x, KeyValuePair_2_t1968  ___y, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m18424(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2454 *, KeyValuePair_2_t1968 , KeyValuePair_2_t1968 , AsyncCallback_t315 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m18424_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18425_gshared (Comparison_1_t2454 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m18425(__this, ___result, method) (( int32_t (*) (Comparison_1_t2454 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m18425_gshared)(__this, ___result, method)
