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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17427_gshared (InternalEnumerator_1_t2329 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17427(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2329 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17427_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17428_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17428(__this, method) (( void (*) (InternalEnumerator_1_t2329 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17428_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17429_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17429(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2329 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17429_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17430_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17430(__this, method) (( void (*) (InternalEnumerator_1_t2329 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17430_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17431_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17431(__this, method) (( bool (*) (InternalEnumerator_1_t2329 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17431_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::get_Current()
extern "C" PropertyMetadata_t664  InternalEnumerator_1_get_Current_m17432_gshared (InternalEnumerator_1_t2329 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17432(__this, method) (( PropertyMetadata_t664  (*) (InternalEnumerator_1_t2329 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17432_gshared)(__this, method)
