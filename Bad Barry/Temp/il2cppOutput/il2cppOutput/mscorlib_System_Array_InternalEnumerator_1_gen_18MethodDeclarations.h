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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12921_gshared (InternalEnumerator_1_t1999 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12921(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1999 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12921_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12922_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12922(__this, method) (( void (*) (InternalEnumerator_1_t1999 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12922_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12923_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12923(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1999 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12923_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12924_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12924(__this, method) (( void (*) (InternalEnumerator_1_t1999 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12924_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12925_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12925(__this, method) (( bool (*) (InternalEnumerator_1_t1999 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12925_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1998  InternalEnumerator_1_get_Current_m12926_gshared (InternalEnumerator_1_t1999 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12926(__this, method) (( KeyValuePair_2_t1998  (*) (InternalEnumerator_1_t1999 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12926_gshared)(__this, method)
