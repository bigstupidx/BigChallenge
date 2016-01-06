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
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17989_gshared (InternalEnumerator_1_t2386 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17989(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2386 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17989_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17990_gshared (InternalEnumerator_1_t2386 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17990(__this, method) (( void (*) (InternalEnumerator_1_t2386 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17990_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17991_gshared (InternalEnumerator_1_t2386 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17991(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2386 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17991_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17992_gshared (InternalEnumerator_1_t2386 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17992(__this, method) (( void (*) (InternalEnumerator_1_t2386 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17992_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17993_gshared (InternalEnumerator_1_t2386 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17993(__this, method) (( bool (*) (InternalEnumerator_1_t2386 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17993_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::get_Current()
extern "C" ObjectMetadata_t685  InternalEnumerator_1_get_Current_m17994_gshared (InternalEnumerator_1_t2386 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17994(__this, method) (( ObjectMetadata_t685  (*) (InternalEnumerator_1_t2386 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17994_gshared)(__this, method)
