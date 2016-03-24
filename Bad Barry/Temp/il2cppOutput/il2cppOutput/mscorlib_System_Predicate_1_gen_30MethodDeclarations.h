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
struct Predicate_1_t2295;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16562_gshared (Predicate_1_t2295 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16562(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2295 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16562_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16563_gshared (Predicate_1_t2295 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16563(__this, ___obj, method) (( bool (*) (Predicate_1_t2295 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m16563_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16564_gshared (Predicate_1_t2295 * __this, int32_t ___obj, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16564(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2295 *, int32_t, AsyncCallback_t315 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16564_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16565_gshared (Predicate_1_t2295 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16565(__this, ___result, method) (( bool (*) (Predicate_1_t2295 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16565_gshared)(__this, ___result, method)
