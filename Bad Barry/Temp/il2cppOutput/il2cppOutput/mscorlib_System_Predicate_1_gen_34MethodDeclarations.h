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

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2163;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t207;
// System.AsyncCallback
struct AsyncCallback_t208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15953_gshared (Predicate_1_t2163 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15953(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2163 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15953_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15954_gshared (Predicate_1_t2163 * __this, UICharInfo_t377  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15954(__this, ___obj, method) (( bool (*) (Predicate_1_t2163 *, UICharInfo_t377 , const MethodInfo*))Predicate_1_Invoke_m15954_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15955_gshared (Predicate_1_t2163 * __this, UICharInfo_t377  ___obj, AsyncCallback_t208 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15955(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2163 *, UICharInfo_t377 , AsyncCallback_t208 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15955_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15956_gshared (Predicate_1_t2163 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15956(__this, ___result, method) (( bool (*) (Predicate_1_t2163 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15956_gshared)(__this, ___result, method)
