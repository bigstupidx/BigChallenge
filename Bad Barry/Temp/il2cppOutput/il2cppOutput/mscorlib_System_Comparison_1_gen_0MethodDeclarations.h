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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t182;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t251;
// System.AsyncCallback
struct AsyncCallback_t252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2092_gshared (Comparison_1_t182 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2092(__this, ___object, ___method, method) (( void (*) (Comparison_1_t182 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2092_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m13132_gshared (Comparison_1_t182 * __this, RaycastHit_t365  ___x, RaycastHit_t365  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m13132(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t182 *, RaycastHit_t365 , RaycastHit_t365 , const MethodInfo*))Comparison_1_Invoke_m13132_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m13133_gshared (Comparison_1_t182 * __this, RaycastHit_t365  ___x, RaycastHit_t365  ___y, AsyncCallback_t252 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m13133(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t182 *, RaycastHit_t365 , RaycastHit_t365 , AsyncCallback_t252 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m13133_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m13134_gshared (Comparison_1_t182 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m13134(__this, ___result, method) (( int32_t (*) (Comparison_1_t182 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m13134_gshared)(__this, ___result, method)
