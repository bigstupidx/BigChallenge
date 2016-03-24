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
struct ShimEnumerator_t2141;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2132;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14218_gshared (ShimEnumerator_t2141 * __this, Dictionary_2_t2132 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14218(__this, ___host, method) (( void (*) (ShimEnumerator_t2141 *, Dictionary_2_t2132 *, const MethodInfo*))ShimEnumerator__ctor_m14218_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14219_gshared (ShimEnumerator_t2141 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14219(__this, method) (( bool (*) (ShimEnumerator_t2141 *, const MethodInfo*))ShimEnumerator_MoveNext_m14219_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t779  ShimEnumerator_get_Entry_m14220_gshared (ShimEnumerator_t2141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14220(__this, method) (( DictionaryEntry_t779  (*) (ShimEnumerator_t2141 *, const MethodInfo*))ShimEnumerator_get_Entry_m14220_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14221_gshared (ShimEnumerator_t2141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14221(__this, method) (( Object_t * (*) (ShimEnumerator_t2141 *, const MethodInfo*))ShimEnumerator_get_Key_m14221_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14222_gshared (ShimEnumerator_t2141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14222(__this, method) (( Object_t * (*) (ShimEnumerator_t2141 *, const MethodInfo*))ShimEnumerator_get_Value_m14222_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14223_gshared (ShimEnumerator_t2141 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14223(__this, method) (( Object_t * (*) (ShimEnumerator_t2141 *, const MethodInfo*))ShimEnumerator_get_Current_m14223_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m14224_gshared (ShimEnumerator_t2141 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14224(__this, method) (( void (*) (ShimEnumerator_t2141 *, const MethodInfo*))ShimEnumerator_Reset_m14224_gshared)(__this, method)
