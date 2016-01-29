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
extern "C" void InternalEnumerator_1__ctor_m18884_gshared (InternalEnumerator_1_t2481 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18884(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2481 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18884_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18885_gshared (InternalEnumerator_1_t2481 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18885(__this, method) (( void (*) (InternalEnumerator_1_t2481 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18885_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18886_gshared (InternalEnumerator_1_t2481 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18886(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2481 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18886_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18887_gshared (InternalEnumerator_1_t2481 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18887(__this, method) (( void (*) (InternalEnumerator_1_t2481 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18887_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18888_gshared (InternalEnumerator_1_t2481 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18888(__this, method) (( bool (*) (InternalEnumerator_1_t2481 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18888_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<LitJson.ObjectMetadata>::get_Current()
extern "C" ObjectMetadata_t728  InternalEnumerator_1_get_Current_m18889_gshared (InternalEnumerator_1_t2481 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18889(__this, method) (( ObjectMetadata_t728  (*) (InternalEnumerator_1_t2481 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18889_gshared)(__this, method)
