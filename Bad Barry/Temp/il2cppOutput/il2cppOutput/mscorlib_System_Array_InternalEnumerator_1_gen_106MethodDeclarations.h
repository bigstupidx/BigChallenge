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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_106.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceCacheItem.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19461_gshared (InternalEnumerator_1_t2527 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19461(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2527 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19461_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19462_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19462(__this, method) (( void (*) (InternalEnumerator_1_t2527 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19462_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19463_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19463(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2527 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19463_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19464_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19464(__this, method) (( void (*) (InternalEnumerator_1_t2527 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19464_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19465_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19465(__this, method) (( bool (*) (InternalEnumerator_1_t2527 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19465_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::get_Current()
extern "C" ResourceCacheItem_t1403  InternalEnumerator_1_get_Current_m19466_gshared (InternalEnumerator_1_t2527 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19466(__this, method) (( ResourceCacheItem_t1403  (*) (InternalEnumerator_1_t2527 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19466_gshared)(__this, method)
