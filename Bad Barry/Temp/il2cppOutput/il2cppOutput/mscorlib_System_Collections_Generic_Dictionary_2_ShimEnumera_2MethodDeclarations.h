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
struct ShimEnumerator_t2486;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2478;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18767_gshared (ShimEnumerator_t2486 * __this, Dictionary_2_t2478 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18767(__this, ___host, method) (( void (*) (ShimEnumerator_t2486 *, Dictionary_2_t2478 *, const MethodInfo*))ShimEnumerator__ctor_m18767_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18768_gshared (ShimEnumerator_t2486 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18768(__this, method) (( bool (*) (ShimEnumerator_t2486 *, const MethodInfo*))ShimEnumerator_MoveNext_m18768_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Entry()
extern "C" DictionaryEntry_t784  ShimEnumerator_get_Entry_m18769_gshared (ShimEnumerator_t2486 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18769(__this, method) (( DictionaryEntry_t784  (*) (ShimEnumerator_t2486 *, const MethodInfo*))ShimEnumerator_get_Entry_m18769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18770_gshared (ShimEnumerator_t2486 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18770(__this, method) (( Object_t * (*) (ShimEnumerator_t2486 *, const MethodInfo*))ShimEnumerator_get_Key_m18770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18771_gshared (ShimEnumerator_t2486 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18771(__this, method) (( Object_t * (*) (ShimEnumerator_t2486 *, const MethodInfo*))ShimEnumerator_get_Value_m18771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18772_gshared (ShimEnumerator_t2486 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18772(__this, method) (( Object_t * (*) (ShimEnumerator_t2486 *, const MethodInfo*))ShimEnumerator_get_Current_m18772_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m18773_gshared (ShimEnumerator_t2486 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18773(__this, method) (( void (*) (ShimEnumerator_t2486 *, const MethodInfo*))ShimEnumerator_Reset_m18773_gshared)(__this, method)
