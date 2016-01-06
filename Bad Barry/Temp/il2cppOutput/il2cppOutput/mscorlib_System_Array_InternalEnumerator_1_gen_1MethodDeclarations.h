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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11084_gshared (InternalEnumerator_1_t1861 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11084(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1861 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11084_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11085_gshared (InternalEnumerator_1_t1861 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11085(__this, method) (( void (*) (InternalEnumerator_1_t1861 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11085_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11086_gshared (InternalEnumerator_1_t1861 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11086(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1861 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11086_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11087_gshared (InternalEnumerator_1_t1861 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11087(__this, method) (( void (*) (InternalEnumerator_1_t1861 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11087_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11088_gshared (InternalEnumerator_1_t1861 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11088(__this, method) (( bool (*) (InternalEnumerator_1_t1861 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11088_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1860  InternalEnumerator_1_get_Current_m11089_gshared (InternalEnumerator_1_t1861 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11089(__this, method) (( KeyValuePair_2_t1860  (*) (InternalEnumerator_1_t1861 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11089_gshared)(__this, method)
