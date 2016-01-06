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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1871;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1857;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11166_gshared (ShimEnumerator_t1871 * __this, Dictionary_2_t1857 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11166(__this, ___host, method) (( void (*) (ShimEnumerator_t1871 *, Dictionary_2_t1857 *, const MethodInfo*))ShimEnumerator__ctor_m11166_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11167_gshared (ShimEnumerator_t1871 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11167(__this, method) (( bool (*) (ShimEnumerator_t1871 *, const MethodInfo*))ShimEnumerator_MoveNext_m11167_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t721  ShimEnumerator_get_Entry_m11168_gshared (ShimEnumerator_t1871 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11168(__this, method) (( DictionaryEntry_t721  (*) (ShimEnumerator_t1871 *, const MethodInfo*))ShimEnumerator_get_Entry_m11168_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11169_gshared (ShimEnumerator_t1871 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11169(__this, method) (( Object_t * (*) (ShimEnumerator_t1871 *, const MethodInfo*))ShimEnumerator_get_Key_m11169_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11170_gshared (ShimEnumerator_t1871 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11170(__this, method) (( Object_t * (*) (ShimEnumerator_t1871 *, const MethodInfo*))ShimEnumerator_get_Value_m11170_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11171_gshared (ShimEnumerator_t1871 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11171(__this, method) (( Object_t * (*) (ShimEnumerator_t1871 *, const MethodInfo*))ShimEnumerator_get_Current_m11171_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m11172_gshared (ShimEnumerator_t1871 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m11172(__this, method) (( void (*) (ShimEnumerator_t1871 *, const MethodInfo*))ShimEnumerator_Reset_m11172_gshared)(__this, method)
