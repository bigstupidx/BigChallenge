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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_58.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18251_gshared (InternalEnumerator_1_t2413 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18251(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2413 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18251_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18252_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18252(__this, method) (( void (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18252_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18253_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18253(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18253_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18254_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18254(__this, method) (( void (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18254_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18255_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18255(__this, method) (( bool (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18255_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::get_Current()
extern "C" ArrayMetadata_t697  InternalEnumerator_1_get_Current_m18256_gshared (InternalEnumerator_1_t2413 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18256(__this, method) (( ArrayMetadata_t697  (*) (InternalEnumerator_1_t2413 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18256_gshared)(__this, method)
