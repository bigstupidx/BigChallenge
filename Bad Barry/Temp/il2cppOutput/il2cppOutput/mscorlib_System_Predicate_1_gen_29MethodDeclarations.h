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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2084;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t207;
// System.AsyncCallback
struct AsyncCallback_t208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15086_gshared (Predicate_1_t2084 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15086(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2084 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15086_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15087_gshared (Predicate_1_t2084 * __this, Vector2_t25  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15087(__this, ___obj, method) (( bool (*) (Predicate_1_t2084 *, Vector2_t25 , const MethodInfo*))Predicate_1_Invoke_m15087_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15088_gshared (Predicate_1_t2084 * __this, Vector2_t25  ___obj, AsyncCallback_t208 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15088(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2084 *, Vector2_t25 , AsyncCallback_t208 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15088_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15089_gshared (Predicate_1_t2084 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15089(__this, ___result, method) (( bool (*) (Predicate_1_t2084 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15089_gshared)(__this, ___result, method)
