﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2340;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t251;
// System.AsyncCallback
struct AsyncCallback_t252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17435_gshared (Predicate_1_t2340 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17435(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2340 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17435_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17436_gshared (Predicate_1_t2340 * __this, KeyValuePair_2_t1860  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17436(__this, ___obj, method) (( bool (*) (Predicate_1_t2340 *, KeyValuePair_2_t1860 , const MethodInfo*))Predicate_1_Invoke_m17436_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17437_gshared (Predicate_1_t2340 * __this, KeyValuePair_2_t1860  ___obj, AsyncCallback_t252 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17437(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2340 *, KeyValuePair_2_t1860 , AsyncCallback_t252 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17437_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17438_gshared (Predicate_1_t2340 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17438(__this, ___result, method) (( bool (*) (Predicate_1_t2340 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17438_gshared)(__this, ___result, method)