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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18239_gshared (InternalEnumerator_1_t2417 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18239(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2417 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18239_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18240_gshared (InternalEnumerator_1_t2417 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18240(__this, method) (( void (*) (InternalEnumerator_1_t2417 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18240_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18241_gshared (InternalEnumerator_1_t2417 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18241(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2417 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18241_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18242_gshared (InternalEnumerator_1_t2417 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18242(__this, method) (( void (*) (InternalEnumerator_1_t2417 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18242_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18243_gshared (InternalEnumerator_1_t2417 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18243(__this, method) (( bool (*) (InternalEnumerator_1_t2417 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18243_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2416  InternalEnumerator_1_get_Current_m18244_gshared (InternalEnumerator_1_t2417 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18244(__this, method) (( KeyValuePair_2_t2416  (*) (InternalEnumerator_1_t2417 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18244_gshared)(__this, method)
