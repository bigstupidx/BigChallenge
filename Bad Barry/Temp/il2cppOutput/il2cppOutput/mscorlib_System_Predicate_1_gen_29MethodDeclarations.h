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

// System.Predicate`1<System.Int32>
struct Predicate_1_t2155;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15410_gshared (Predicate_1_t2155 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15410(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2155 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15410_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15411_gshared (Predicate_1_t2155 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15411(__this, ___obj, method) (( bool (*) (Predicate_1_t2155 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m15411_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15412_gshared (Predicate_1_t2155 * __this, int32_t ___obj, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15412(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2155 *, int32_t, AsyncCallback_t229 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15412_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15413_gshared (Predicate_1_t2155 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15413(__this, ___result, method) (( bool (*) (Predicate_1_t2155 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15413_gshared)(__this, ___result, method)
