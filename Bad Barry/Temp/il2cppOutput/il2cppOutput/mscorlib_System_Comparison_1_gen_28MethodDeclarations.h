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

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2077;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t207;
// System.AsyncCallback
struct AsyncCallback_t208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14952_gshared (Comparison_1_t2077 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14952(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2077 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14952_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14953_gshared (Comparison_1_t2077 * __this, Color32_t329  ___x, Color32_t329  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14953(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2077 *, Color32_t329 , Color32_t329 , const MethodInfo*))Comparison_1_Invoke_m14953_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14954_gshared (Comparison_1_t2077 * __this, Color32_t329  ___x, Color32_t329  ___y, AsyncCallback_t208 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14954(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2077 *, Color32_t329 , Color32_t329 , AsyncCallback_t208 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14954_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14955_gshared (Comparison_1_t2077 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14955(__this, ___result, method) (( int32_t (*) (Comparison_1_t2077 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14955_gshared)(__this, ___result, method)
