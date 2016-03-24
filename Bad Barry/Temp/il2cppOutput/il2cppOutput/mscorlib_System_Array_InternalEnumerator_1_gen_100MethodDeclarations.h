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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20052_gshared (InternalEnumerator_1_t2606 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20052(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2606 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20052_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20053_gshared (InternalEnumerator_1_t2606 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20053(__this, method) (( void (*) (InternalEnumerator_1_t2606 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20053_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20054_gshared (InternalEnumerator_1_t2606 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20054(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2606 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20054_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20055_gshared (InternalEnumerator_1_t2606 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20055(__this, method) (( void (*) (InternalEnumerator_1_t2606 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20055_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20056_gshared (InternalEnumerator_1_t2606 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20056(__this, method) (( bool (*) (InternalEnumerator_1_t2606 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20056_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1401  InternalEnumerator_1_get_Current_m20057_gshared (InternalEnumerator_1_t2606 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20057(__this, method) (( LabelFixup_t1401  (*) (InternalEnumerator_1_t2606 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20057_gshared)(__this, method)
