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
struct ShimEnumerator_t2392;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2384;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18041_gshared (ShimEnumerator_t2392 * __this, Dictionary_2_t2384 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18041(__this, ___host, method) (( void (*) (ShimEnumerator_t2392 *, Dictionary_2_t2384 *, const MethodInfo*))ShimEnumerator__ctor_m18041_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18042_gshared (ShimEnumerator_t2392 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18042(__this, method) (( bool (*) (ShimEnumerator_t2392 *, const MethodInfo*))ShimEnumerator_MoveNext_m18042_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Entry()
extern "C" DictionaryEntry_t721  ShimEnumerator_get_Entry_m18043_gshared (ShimEnumerator_t2392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18043(__this, method) (( DictionaryEntry_t721  (*) (ShimEnumerator_t2392 *, const MethodInfo*))ShimEnumerator_get_Entry_m18043_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18044_gshared (ShimEnumerator_t2392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18044(__this, method) (( Object_t * (*) (ShimEnumerator_t2392 *, const MethodInfo*))ShimEnumerator_get_Key_m18044_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18045_gshared (ShimEnumerator_t2392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18045(__this, method) (( Object_t * (*) (ShimEnumerator_t2392 *, const MethodInfo*))ShimEnumerator_get_Value_m18045_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18046_gshared (ShimEnumerator_t2392 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18046(__this, method) (( Object_t * (*) (ShimEnumerator_t2392 *, const MethodInfo*))ShimEnumerator_get_Current_m18046_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m18047_gshared (ShimEnumerator_t2392 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18047(__this, method) (( void (*) (ShimEnumerator_t2392 *, const MethodInfo*))ShimEnumerator_Reset_m18047_gshared)(__this, method)
