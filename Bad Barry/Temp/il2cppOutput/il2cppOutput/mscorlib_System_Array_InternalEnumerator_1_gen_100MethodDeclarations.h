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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17364_gshared (InternalEnumerator_1_t2310 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17364(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2310 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17364_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17365_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17365(__this, method) (( void (*) (InternalEnumerator_1_t2310 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17365_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17366_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17366(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2310 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17366_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17367_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17367(__this, method) (( void (*) (InternalEnumerator_1_t2310 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17367_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17368_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17368(__this, method) (( bool (*) (InternalEnumerator_1_t2310 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17368_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t551  InternalEnumerator_1_get_Current_m17369_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17369(__this, method) (( DateTime_t551  (*) (InternalEnumerator_1_t2310 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17369_gshared)(__this, method)
