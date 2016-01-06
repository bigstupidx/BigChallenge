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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2030;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2021;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13296_gshared (ShimEnumerator_t2030 * __this, Dictionary_2_t2021 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13296(__this, ___host, method) (( void (*) (ShimEnumerator_t2030 *, Dictionary_2_t2021 *, const MethodInfo*))ShimEnumerator__ctor_m13296_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13297_gshared (ShimEnumerator_t2030 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13297(__this, method) (( bool (*) (ShimEnumerator_t2030 *, const MethodInfo*))ShimEnumerator_MoveNext_m13297_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t721  ShimEnumerator_get_Entry_m13298_gshared (ShimEnumerator_t2030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13298(__this, method) (( DictionaryEntry_t721  (*) (ShimEnumerator_t2030 *, const MethodInfo*))ShimEnumerator_get_Entry_m13298_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13299_gshared (ShimEnumerator_t2030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13299(__this, method) (( Object_t * (*) (ShimEnumerator_t2030 *, const MethodInfo*))ShimEnumerator_get_Key_m13299_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13300_gshared (ShimEnumerator_t2030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13300(__this, method) (( Object_t * (*) (ShimEnumerator_t2030 *, const MethodInfo*))ShimEnumerator_get_Value_m13300_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13301_gshared (ShimEnumerator_t2030 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13301(__this, method) (( Object_t * (*) (ShimEnumerator_t2030 *, const MethodInfo*))ShimEnumerator_get_Current_m13301_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m13302_gshared (ShimEnumerator_t2030 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13302(__this, method) (( void (*) (ShimEnumerator_t2030 *, const MethodInfo*))ShimEnumerator_Reset_m13302_gshared)(__this, method)
