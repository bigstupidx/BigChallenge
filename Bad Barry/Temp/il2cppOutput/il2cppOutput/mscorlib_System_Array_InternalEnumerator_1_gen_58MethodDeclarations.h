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
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18602_gshared (InternalEnumerator_1_t2469 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18602(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2469 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18602_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18603_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18603(__this, method) (( void (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18603_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18604_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18604(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18604_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18605_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18605(__this, method) (( void (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18605_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18606_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18606(__this, method) (( bool (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18606_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.PropertyMetadata>::get_Current()
extern "C" PropertyMetadata_t741  InternalEnumerator_1_get_Current_m18607_gshared (InternalEnumerator_1_t2469 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18607(__this, method) (( PropertyMetadata_t741  (*) (InternalEnumerator_1_t2469 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18607_gshared)(__this, method)
