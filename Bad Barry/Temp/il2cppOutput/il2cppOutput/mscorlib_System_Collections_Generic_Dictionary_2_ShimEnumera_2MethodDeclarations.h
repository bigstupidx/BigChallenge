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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>
struct ShimEnumerator_t2481;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2473;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18747_gshared (ShimEnumerator_t2481 * __this, Dictionary_2_t2473 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18747(__this, ___host, method) (( void (*) (ShimEnumerator_t2481 *, Dictionary_2_t2473 *, const MethodInfo*))ShimEnumerator__ctor_m18747_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18748_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18748(__this, method) (( bool (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_MoveNext_m18748_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Entry()
extern "C" DictionaryEntry_t779  ShimEnumerator_get_Entry_m18749_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18749(__this, method) (( DictionaryEntry_t779  (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Entry_m18749_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18750_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18750(__this, method) (( Object_t * (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Key_m18750_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18751_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18751(__this, method) (( Object_t * (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Value_m18751_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18752_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18752(__this, method) (( Object_t * (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Current_m18752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m18753_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18753(__this, method) (( void (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_Reset_m18753_gshared)(__this, method)
