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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18578_gshared (InternalEnumerator_1_t2466 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18578(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2466 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18578_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18579_gshared (InternalEnumerator_1_t2466 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18579(__this, method) (( void (*) (InternalEnumerator_1_t2466 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18579_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18580_gshared (InternalEnumerator_1_t2466 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18580(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2466 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18580_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18581_gshared (InternalEnumerator_1_t2466 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18581(__this, method) (( void (*) (InternalEnumerator_1_t2466 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18581_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18582_gshared (InternalEnumerator_1_t2466 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18582(__this, method) (( bool (*) (InternalEnumerator_1_t2466 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18582_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2465  InternalEnumerator_1_get_Current_m18583_gshared (InternalEnumerator_1_t2466 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18583(__this, method) (( KeyValuePair_2_t2465  (*) (InternalEnumerator_1_t2466 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18583_gshared)(__this, method)
