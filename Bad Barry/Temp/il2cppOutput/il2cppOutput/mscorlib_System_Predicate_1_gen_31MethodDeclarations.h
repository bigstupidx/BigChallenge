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
struct Predicate_1_t2288;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16628_gshared (Predicate_1_t2288 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16628(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2288 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16628_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16629_gshared (Predicate_1_t2288 * __this, Color32_t416  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16629(__this, ___obj, method) (( bool (*) (Predicate_1_t2288 *, Color32_t416 , const MethodInfo*))Predicate_1_Invoke_m16629_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16630_gshared (Predicate_1_t2288 * __this, Color32_t416  ___obj, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16630(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2288 *, Color32_t416 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16630_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16631_gshared (Predicate_1_t2288 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16631(__this, ___result, method) (( bool (*) (Predicate_1_t2288 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16631_gshared)(__this, ___result, method)
