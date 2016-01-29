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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_59.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18611_gshared (InternalEnumerator_1_t2459 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18611(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2459 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18611_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18612_gshared (InternalEnumerator_1_t2459 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18612(__this, method) (( void (*) (InternalEnumerator_1_t2459 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18612_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18613_gshared (InternalEnumerator_1_t2459 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18613(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2459 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18613_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18614_gshared (InternalEnumerator_1_t2459 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18614(__this, method) (( void (*) (InternalEnumerator_1_t2459 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18614_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18615_gshared (InternalEnumerator_1_t2459 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18615(__this, method) (( bool (*) (InternalEnumerator_1_t2459 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18615_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::get_Current()
extern "C" ArrayMetadata_t727  InternalEnumerator_1_get_Current_m18616_gshared (InternalEnumerator_1_t2459 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18616(__this, method) (( ArrayMetadata_t727  (*) (InternalEnumerator_1_t2459 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18616_gshared)(__this, method)
