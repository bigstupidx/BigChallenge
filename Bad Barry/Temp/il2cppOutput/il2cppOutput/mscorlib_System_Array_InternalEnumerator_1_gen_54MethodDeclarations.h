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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18215_gshared (InternalEnumerator_1_t2413 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18215(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2413 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18215_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18216_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18216(__this, method) (( void (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18216_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18217_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18217(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18217_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18218_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18218(__this, method) (( void (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18218_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18219_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18219(__this, method) (( bool (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18219_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2412  InternalEnumerator_1_get_Current_m18220_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18220(__this, method) (( KeyValuePair_2_t2412  (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18220_gshared)(__this, method)
