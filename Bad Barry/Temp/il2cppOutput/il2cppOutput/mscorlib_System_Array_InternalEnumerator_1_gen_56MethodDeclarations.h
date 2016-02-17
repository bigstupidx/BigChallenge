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
extern "C" void InternalEnumerator_1__ctor_m18598_gshared (InternalEnumerator_1_t2471 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18598(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2471 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18598_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18599_gshared (InternalEnumerator_1_t2471 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18599(__this, method) (( void (*) (InternalEnumerator_1_t2471 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18599_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18600_gshared (InternalEnumerator_1_t2471 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18600(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2471 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18600_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18601_gshared (InternalEnumerator_1_t2471 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18601(__this, method) (( void (*) (InternalEnumerator_1_t2471 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18601_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18602_gshared (InternalEnumerator_1_t2471 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18602(__this, method) (( bool (*) (InternalEnumerator_1_t2471 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18602_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2470  InternalEnumerator_1_get_Current_m18603_gshared (InternalEnumerator_1_t2471 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18603(__this, method) (( KeyValuePair_2_t2470  (*) (InternalEnumerator_1_t2471 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18603_gshared)(__this, method)
