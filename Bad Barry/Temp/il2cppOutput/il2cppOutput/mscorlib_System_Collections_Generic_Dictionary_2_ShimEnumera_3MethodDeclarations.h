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
struct ShimEnumerator_t2487;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2479;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18936_gshared (ShimEnumerator_t2487 * __this, Dictionary_2_t2479 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18936(__this, ___host, method) (( void (*) (ShimEnumerator_t2487 *, Dictionary_2_t2479 *, const MethodInfo*))ShimEnumerator__ctor_m18936_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18937_gshared (ShimEnumerator_t2487 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18937(__this, method) (( bool (*) (ShimEnumerator_t2487 *, const MethodInfo*))ShimEnumerator_MoveNext_m18937_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Entry()
extern "C" DictionaryEntry_t764  ShimEnumerator_get_Entry_m18938_gshared (ShimEnumerator_t2487 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18938(__this, method) (( DictionaryEntry_t764  (*) (ShimEnumerator_t2487 *, const MethodInfo*))ShimEnumerator_get_Entry_m18938_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18939_gshared (ShimEnumerator_t2487 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18939(__this, method) (( Object_t * (*) (ShimEnumerator_t2487 *, const MethodInfo*))ShimEnumerator_get_Key_m18939_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18940_gshared (ShimEnumerator_t2487 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18940(__this, method) (( Object_t * (*) (ShimEnumerator_t2487 *, const MethodInfo*))ShimEnumerator_get_Value_m18940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18941_gshared (ShimEnumerator_t2487 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18941(__this, method) (( Object_t * (*) (ShimEnumerator_t2487 *, const MethodInfo*))ShimEnumerator_get_Current_m18941_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m18942_gshared (ShimEnumerator_t2487 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18942(__this, method) (( void (*) (ShimEnumerator_t2487 *, const MethodInfo*))ShimEnumerator_Reset_m18942_gshared)(__this, method)
