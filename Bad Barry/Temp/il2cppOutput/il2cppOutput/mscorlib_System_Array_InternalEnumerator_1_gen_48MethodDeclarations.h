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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17391_gshared (InternalEnumerator_1_t2324 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17391(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2324 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17391_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17392_gshared (InternalEnumerator_1_t2324 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17392(__this, method) (( void (*) (InternalEnumerator_1_t2324 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17392_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17393_gshared (InternalEnumerator_1_t2324 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17393(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2324 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17393_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17394_gshared (InternalEnumerator_1_t2324 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17394(__this, method) (( void (*) (InternalEnumerator_1_t2324 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17394_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17395_gshared (InternalEnumerator_1_t2324 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17395(__this, method) (( bool (*) (InternalEnumerator_1_t2324 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17395_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2323  InternalEnumerator_1_get_Current_m17396_gshared (InternalEnumerator_1_t2324 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17396(__this, method) (( KeyValuePair_2_t2323  (*) (InternalEnumerator_1_t2324 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17396_gshared)(__this, method)
