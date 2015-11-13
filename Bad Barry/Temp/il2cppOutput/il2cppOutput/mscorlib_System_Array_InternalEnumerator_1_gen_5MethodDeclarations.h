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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11083_gshared (InternalEnumerator_1_t1850 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11083(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1850 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11083_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11084_gshared (InternalEnumerator_1_t1850 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11084(__this, method) (( void (*) (InternalEnumerator_1_t1850 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11084_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11085_gshared (InternalEnumerator_1_t1850 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11085(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1850 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11085_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11086_gshared (InternalEnumerator_1_t1850 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11086(__this, method) (( void (*) (InternalEnumerator_1_t1850 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11086_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11087_gshared (InternalEnumerator_1_t1850 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11087(__this, method) (( bool (*) (InternalEnumerator_1_t1850 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11087_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t702  InternalEnumerator_1_get_Current_m11088_gshared (InternalEnumerator_1_t1850 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11088(__this, method) (( DictionaryEntry_t702  (*) (InternalEnumerator_1_t1850 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11088_gshared)(__this, method)
