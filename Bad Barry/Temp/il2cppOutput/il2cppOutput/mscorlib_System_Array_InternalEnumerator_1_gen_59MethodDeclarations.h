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
extern "C" void InternalEnumerator_1__ctor_m18695_gshared (InternalEnumerator_1_t2475 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18695(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2475 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18695_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18696_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18696(__this, method) (( void (*) (InternalEnumerator_1_t2475 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18696_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2475 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18698_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18698(__this, method) (( void (*) (InternalEnumerator_1_t2475 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18698_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18699_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18699(__this, method) (( bool (*) (InternalEnumerator_1_t2475 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18699_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.ArrayMetadata>::get_Current()
extern "C" ArrayMetadata_t742  InternalEnumerator_1_get_Current_m18700_gshared (InternalEnumerator_1_t2475 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18700(__this, method) (( ArrayMetadata_t742  (*) (InternalEnumerator_1_t2475 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18700_gshared)(__this, method)
