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
extern "C" void InternalEnumerator_1__ctor_m19968_gshared (InternalEnumerator_1_t2590 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m19968(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2590 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m19968_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19969_gshared (InternalEnumerator_1_t2590 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19969(__this, method) (( void (*) (InternalEnumerator_1_t2590 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m19969_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19970_gshared (InternalEnumerator_1_t2590 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19970(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2590 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19970_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m19971_gshared (InternalEnumerator_1_t2590 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m19971(__this, method) (( void (*) (InternalEnumerator_1_t2590 *, const MethodInfo*))InternalEnumerator_1_Dispose_m19971_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m19972_gshared (InternalEnumerator_1_t2590 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m19972(__this, method) (( bool (*) (InternalEnumerator_1_t2590 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m19972_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t1386  InternalEnumerator_1_get_Current_m19973_gshared (InternalEnumerator_1_t2590 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m19973(__this, method) (( LabelFixup_t1386  (*) (InternalEnumerator_1_t2590 *, const MethodInfo*))InternalEnumerator_1_get_Current_m19973_gshared)(__this, method)
