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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2400;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17765_gshared (Predicate_1_t2400 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17765(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2400 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17765_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17766_gshared (Predicate_1_t2400 * __this, UILineInfo_t473  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17766(__this, ___obj, method) (( bool (*) (Predicate_1_t2400 *, UILineInfo_t473 , const MethodInfo*))Predicate_1_Invoke_m17766_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17767_gshared (Predicate_1_t2400 * __this, UILineInfo_t473  ___obj, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17767(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2400 *, UILineInfo_t473 , AsyncCallback_t315 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17767_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17768_gshared (Predicate_1_t2400 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17768(__this, ___result, method) (( bool (*) (Predicate_1_t2400 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17768_gshared)(__this, ___result, method)
