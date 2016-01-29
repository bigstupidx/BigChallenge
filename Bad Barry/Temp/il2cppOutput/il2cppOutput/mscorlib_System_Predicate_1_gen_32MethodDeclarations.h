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
struct Predicate_1_t2301;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16776_gshared (Predicate_1_t2301 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16776(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2301 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16776_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16777_gshared (Predicate_1_t2301 * __this, Vector2_t33  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16777(__this, ___obj, method) (( bool (*) (Predicate_1_t2301 *, Vector2_t33 , const MethodInfo*))Predicate_1_Invoke_m16777_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16778_gshared (Predicate_1_t2301 * __this, Vector2_t33  ___obj, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16778(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2301 *, Vector2_t33 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16778_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16779_gshared (Predicate_1_t2301 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16779(__this, ___result, method) (( bool (*) (Predicate_1_t2301 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16779_gshared)(__this, ___result, method)
