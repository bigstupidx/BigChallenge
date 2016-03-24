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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_109.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20450_gshared (InternalEnumerator_1_t2639 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20450(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2639 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20450_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20451_gshared (InternalEnumerator_1_t2639 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20451(__this, method) (( void (*) (InternalEnumerator_1_t2639 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20451_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20452_gshared (InternalEnumerator_1_t2639 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20452(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2639 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20452_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20453_gshared (InternalEnumerator_1_t2639 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20453(__this, method) (( void (*) (InternalEnumerator_1_t2639 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20453_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20454_gshared (InternalEnumerator_1_t2639 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20454(__this, method) (( bool (*) (InternalEnumerator_1_t2639 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20454_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::get_Current()
extern "C" ResourceInfo_t1486  InternalEnumerator_1_get_Current_m20455_gshared (InternalEnumerator_1_t2639 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20455(__this, method) (( ResourceInfo_t1486  (*) (InternalEnumerator_1_t2639 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20455_gshared)(__this, method)
