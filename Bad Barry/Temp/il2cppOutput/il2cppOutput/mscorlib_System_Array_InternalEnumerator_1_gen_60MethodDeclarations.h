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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_60.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18968_gshared (InternalEnumerator_1_t2497 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18968(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2497 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18968_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18969_gshared (InternalEnumerator_1_t2497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18969(__this, method) (( void (*) (InternalEnumerator_1_t2497 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18969_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18970_gshared (InternalEnumerator_1_t2497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18970(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2497 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18970_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18971_gshared (InternalEnumerator_1_t2497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18971(__this, method) (( void (*) (InternalEnumerator_1_t2497 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18971_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18972_gshared (InternalEnumerator_1_t2497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18972(__this, method) (( bool (*) (InternalEnumerator_1_t2497 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18972_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::get_Current()
extern "C" ObjectMetadata_t743  InternalEnumerator_1_get_Current_m18973_gshared (InternalEnumerator_1_t2497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18973(__this, method) (( ObjectMetadata_t743  (*) (InternalEnumerator_1_t2497 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18973_gshared)(__this, method)
