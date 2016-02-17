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

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t2636;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20426_gshared (Predicate_1_t2636 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20426(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2636 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20426_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20427_gshared (Predicate_1_t2636 * __this, CustomAttributeNamedArgument_t1458  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20427(__this, ___obj, method) (( bool (*) (Predicate_1_t2636 *, CustomAttributeNamedArgument_t1458 , const MethodInfo*))Predicate_1_Invoke_m20427_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20428_gshared (Predicate_1_t2636 * __this, CustomAttributeNamedArgument_t1458  ___obj, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20428(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2636 *, CustomAttributeNamedArgument_t1458 , AsyncCallback_t318 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20428_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20429_gshared (Predicate_1_t2636 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20429(__this, ___result, method) (( bool (*) (Predicate_1_t2636 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20429_gshared)(__this, ___result, method)
