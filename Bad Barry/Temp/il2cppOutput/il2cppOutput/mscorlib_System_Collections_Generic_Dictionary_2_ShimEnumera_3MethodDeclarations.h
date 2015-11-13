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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>
struct ShimEnumerator_t2363;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2355;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17844_gshared (ShimEnumerator_t2363 * __this, Dictionary_2_t2355 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17844(__this, ___host, method) (( void (*) (ShimEnumerator_t2363 *, Dictionary_2_t2355 *, const MethodInfo*))ShimEnumerator__ctor_m17844_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17845_gshared (ShimEnumerator_t2363 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17845(__this, method) (( bool (*) (ShimEnumerator_t2363 *, const MethodInfo*))ShimEnumerator_MoveNext_m17845_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Entry()
extern "C" DictionaryEntry_t702  ShimEnumerator_get_Entry_m17846_gshared (ShimEnumerator_t2363 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17846(__this, method) (( DictionaryEntry_t702  (*) (ShimEnumerator_t2363 *, const MethodInfo*))ShimEnumerator_get_Entry_m17846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17847_gshared (ShimEnumerator_t2363 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17847(__this, method) (( Object_t * (*) (ShimEnumerator_t2363 *, const MethodInfo*))ShimEnumerator_get_Key_m17847_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17848_gshared (ShimEnumerator_t2363 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17848(__this, method) (( Object_t * (*) (ShimEnumerator_t2363 *, const MethodInfo*))ShimEnumerator_get_Value_m17848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17849_gshared (ShimEnumerator_t2363 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17849(__this, method) (( Object_t * (*) (ShimEnumerator_t2363 *, const MethodInfo*))ShimEnumerator_get_Current_m17849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m17850_gshared (ShimEnumerator_t2363 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17850(__this, method) (( void (*) (ShimEnumerator_t2363 *, const MethodInfo*))ShimEnumerator_Reset_m17850_gshared)(__this, method)
