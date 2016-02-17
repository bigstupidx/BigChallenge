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

// System.Func`2<System.Object,System.Object>
struct Func_2_t2552;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m19632_gshared (Func_2_t2552 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m19632(__this, ___object, ___method, method) (( void (*) (Func_2_t2552 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m19632_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m19633_gshared (Func_2_t2552 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m19633(__this, ___arg1, method) (( Object_t * (*) (Func_2_t2552 *, Object_t *, const MethodInfo*))Func_2_Invoke_m19633_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m19634_gshared (Func_2_t2552 * __this, Object_t * ___arg1, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m19634(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2552 *, Object_t *, AsyncCallback_t318 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m19634_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m19635_gshared (Func_2_t2552 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m19635(__this, ___result, method) (( Object_t * (*) (Func_2_t2552 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m19635_gshared)(__this, ___result, method)
