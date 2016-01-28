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
struct Comparison_1_t2435;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18335_gshared (Comparison_1_t2435 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m18335(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2435 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m18335_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18336_gshared (Comparison_1_t2435 * __this, KeyValuePair_2_t1950  ___x, KeyValuePair_2_t1950  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m18336(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2435 *, KeyValuePair_2_t1950 , KeyValuePair_2_t1950 , const MethodInfo*))Comparison_1_Invoke_m18336_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18337_gshared (Comparison_1_t2435 * __this, KeyValuePair_2_t1950  ___x, KeyValuePair_2_t1950  ___y, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m18337(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2435 *, KeyValuePair_2_t1950 , KeyValuePair_2_t1950 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m18337_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18338_gshared (Comparison_1_t2435 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m18338(__this, ___result, method) (( int32_t (*) (Comparison_1_t2435 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m18338_gshared)(__this, ___result, method)
