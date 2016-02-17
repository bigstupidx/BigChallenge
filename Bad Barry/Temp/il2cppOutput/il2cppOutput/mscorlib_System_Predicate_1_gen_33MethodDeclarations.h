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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2333;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17031_gshared (Predicate_1_t2333 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17031(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2333 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17031_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17032_gshared (Predicate_1_t2333 * __this, Vector4_t404  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17032(__this, ___obj, method) (( bool (*) (Predicate_1_t2333 *, Vector4_t404 , const MethodInfo*))Predicate_1_Invoke_m17032_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17033_gshared (Predicate_1_t2333 * __this, Vector4_t404  ___obj, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17033(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2333 *, Vector4_t404 , AsyncCallback_t318 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17033_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17034_gshared (Predicate_1_t2333 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17034(__this, ___result, method) (( bool (*) (Predicate_1_t2333 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17034_gshared)(__this, ___result, method)
