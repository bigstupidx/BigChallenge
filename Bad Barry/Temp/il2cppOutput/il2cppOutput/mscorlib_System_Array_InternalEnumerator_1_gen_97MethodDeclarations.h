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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_97.h"
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m19689_gshared (InternalEnumerator_1_t2553 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19689(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2553 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19689_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19690_gshared (InternalEnumerator_1_t2553 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19690(__this, method) (( void (*) (InternalEnumerator_1_t2553 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19690_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19691_gshared (InternalEnumerator_1_t2553 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19691(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2553 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19691_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19692_gshared (InternalEnumerator_1_t2553 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19692(__this, method) (( void (*) (InternalEnumerator_1_t2553 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19692_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19693_gshared (InternalEnumerator_1_t2553 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19693(__this, method) (( bool (*) (InternalEnumerator_1_t2553 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19693_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1355  InternalEnumerator_1_get_Current_m19694_gshared (InternalEnumerator_1_t2553 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19694(__this, method) (( ILTokenInfo_t1355  (*) (InternalEnumerator_1_t2553 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19694_gshared)(__this, method)
