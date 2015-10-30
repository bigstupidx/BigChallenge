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

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2074;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t207;
// System.AsyncCallback
struct AsyncCallback_t208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14942_gshared (Predicate_1_t2074 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14942(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2074 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14942_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14943_gshared (Predicate_1_t2074 * __this, Color32_t329  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14943(__this, ___obj, method) (( bool (*) (Predicate_1_t2074 *, Color32_t329 , const MethodInfo*))Predicate_1_Invoke_m14943_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14944_gshared (Predicate_1_t2074 * __this, Color32_t329  ___obj, AsyncCallback_t208 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14944(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2074 *, Color32_t329 , AsyncCallback_t208 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14944_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14945_gshared (Predicate_1_t2074 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14945(__this, ___result, method) (( bool (*) (Predicate_1_t2074 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14945_gshared)(__this, ___result, method)
