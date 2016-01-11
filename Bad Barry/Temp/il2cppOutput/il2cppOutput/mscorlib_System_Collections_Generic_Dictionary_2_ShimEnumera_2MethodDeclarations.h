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
struct ShimEnumerator_t2419;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2411;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18303_gshared (ShimEnumerator_t2419 * __this, Dictionary_2_t2411 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18303(__this, ___host, method) (( void (*) (ShimEnumerator_t2419 *, Dictionary_2_t2411 *, const MethodInfo*))ShimEnumerator__ctor_m18303_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18304_gshared (ShimEnumerator_t2419 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18304(__this, method) (( bool (*) (ShimEnumerator_t2419 *, const MethodInfo*))ShimEnumerator_MoveNext_m18304_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Entry()
extern "C" DictionaryEntry_t734  ShimEnumerator_get_Entry_m18305_gshared (ShimEnumerator_t2419 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18305(__this, method) (( DictionaryEntry_t734  (*) (ShimEnumerator_t2419 *, const MethodInfo*))ShimEnumerator_get_Entry_m18305_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18306_gshared (ShimEnumerator_t2419 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18306(__this, method) (( Object_t * (*) (ShimEnumerator_t2419 *, const MethodInfo*))ShimEnumerator_get_Key_m18306_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18307_gshared (ShimEnumerator_t2419 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18307(__this, method) (( Object_t * (*) (ShimEnumerator_t2419 *, const MethodInfo*))ShimEnumerator_get_Value_m18307_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18308_gshared (ShimEnumerator_t2419 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18308(__this, method) (( Object_t * (*) (ShimEnumerator_t2419 *, const MethodInfo*))ShimEnumerator_get_Current_m18308_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m18309_gshared (ShimEnumerator_t2419 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18309(__this, method) (( void (*) (ShimEnumerator_t2419 *, const MethodInfo*))ShimEnumerator_Reset_m18309_gshared)(__this, method)
