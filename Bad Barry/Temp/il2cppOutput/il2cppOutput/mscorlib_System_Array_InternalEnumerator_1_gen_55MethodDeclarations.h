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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18566_gshared (InternalEnumerator_1_t2464 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18566(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2464 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18566_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18567_gshared (InternalEnumerator_1_t2464 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18567(__this, method) (( void (*) (InternalEnumerator_1_t2464 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18567_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18568_gshared (InternalEnumerator_1_t2464 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18568(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2464 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18568_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18569_gshared (InternalEnumerator_1_t2464 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18569(__this, method) (( void (*) (InternalEnumerator_1_t2464 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18569_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18570_gshared (InternalEnumerator_1_t2464 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18570(__this, method) (( bool (*) (InternalEnumerator_1_t2464 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18570_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2463  InternalEnumerator_1_get_Current_m18571_gshared (InternalEnumerator_1_t2464 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18571(__this, method) (( KeyValuePair_2_t2463  (*) (InternalEnumerator_1_t2464 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18571_gshared)(__this, method)