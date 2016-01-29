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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_115.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20402_gshared (InternalEnumerator_1_t2629 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20402(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2629 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20402_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20403_gshared (InternalEnumerator_1_t2629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20403(__this, method) (( void (*) (InternalEnumerator_1_t2629 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20403_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20404_gshared (InternalEnumerator_1_t2629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20404(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2629 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20404_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20405_gshared (InternalEnumerator_1_t2629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20405(__this, method) (( void (*) (InternalEnumerator_1_t2629 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20405_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20406_gshared (InternalEnumerator_1_t2629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20406(__this, method) (( bool (*) (InternalEnumerator_1_t2629 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20406_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t58  InternalEnumerator_1_get_Current_m20407_gshared (InternalEnumerator_1_t2629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20407(__this, method) (( DateTime_t58  (*) (InternalEnumerator_1_t2629 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20407_gshared)(__this, method)
