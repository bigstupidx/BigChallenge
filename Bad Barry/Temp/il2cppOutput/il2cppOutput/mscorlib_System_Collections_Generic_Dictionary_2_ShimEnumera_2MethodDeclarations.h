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
struct ShimEnumerator_t2462;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2454;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18660_gshared (ShimEnumerator_t2462 * __this, Dictionary_2_t2454 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18660(__this, ___host, method) (( void (*) (ShimEnumerator_t2462 *, Dictionary_2_t2454 *, const MethodInfo*))ShimEnumerator__ctor_m18660_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18661_gshared (ShimEnumerator_t2462 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18661(__this, method) (( bool (*) (ShimEnumerator_t2462 *, const MethodInfo*))ShimEnumerator_MoveNext_m18661_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Entry()
extern "C" DictionaryEntry_t761  ShimEnumerator_get_Entry_m18662_gshared (ShimEnumerator_t2462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18662(__this, method) (( DictionaryEntry_t761  (*) (ShimEnumerator_t2462 *, const MethodInfo*))ShimEnumerator_get_Entry_m18662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18663_gshared (ShimEnumerator_t2462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18663(__this, method) (( Object_t * (*) (ShimEnumerator_t2462 *, const MethodInfo*))ShimEnumerator_get_Key_m18663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18664_gshared (ShimEnumerator_t2462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18664(__this, method) (( Object_t * (*) (ShimEnumerator_t2462 *, const MethodInfo*))ShimEnumerator_get_Value_m18664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18665_gshared (ShimEnumerator_t2462 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18665(__this, method) (( Object_t * (*) (ShimEnumerator_t2462 *, const MethodInfo*))ShimEnumerator_get_Current_m18665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m18666_gshared (ShimEnumerator_t2462 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18666(__this, method) (( void (*) (ShimEnumerator_t2462 *, const MethodInfo*))ShimEnumerator_Reset_m18666_gshared)(__this, method)
