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
struct Predicate_1_t2569;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19962_gshared (Predicate_1_t2569 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m19962(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2569 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m19962_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19963_gshared (Predicate_1_t2569 * __this, CustomAttributeNamedArgument_t1399  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m19963(__this, ___obj, method) (( bool (*) (Predicate_1_t2569 *, CustomAttributeNamedArgument_t1399 , const MethodInfo*))Predicate_1_Invoke_m19963_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19964_gshared (Predicate_1_t2569 * __this, CustomAttributeNamedArgument_t1399  ___obj, AsyncCallback_t266 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m19964(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2569 *, CustomAttributeNamedArgument_t1399 , AsyncCallback_t266 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m19964_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19965_gshared (Predicate_1_t2569 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m19965(__this, ___result, method) (( bool (*) (Predicate_1_t2569 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m19965_gshared)(__this, ___result, method)
