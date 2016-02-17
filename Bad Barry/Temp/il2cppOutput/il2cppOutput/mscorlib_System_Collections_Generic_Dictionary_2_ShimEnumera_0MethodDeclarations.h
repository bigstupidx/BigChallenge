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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2122;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2113;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13925_gshared (ShimEnumerator_t2122 * __this, Dictionary_2_t2113 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13925(__this, ___host, method) (( void (*) (ShimEnumerator_t2122 *, Dictionary_2_t2113 *, const MethodInfo*))ShimEnumerator__ctor_m13925_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13926_gshared (ShimEnumerator_t2122 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13926(__this, method) (( bool (*) (ShimEnumerator_t2122 *, const MethodInfo*))ShimEnumerator_MoveNext_m13926_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t784  ShimEnumerator_get_Entry_m13927_gshared (ShimEnumerator_t2122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13927(__this, method) (( DictionaryEntry_t784  (*) (ShimEnumerator_t2122 *, const MethodInfo*))ShimEnumerator_get_Entry_m13927_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13928_gshared (ShimEnumerator_t2122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13928(__this, method) (( Object_t * (*) (ShimEnumerator_t2122 *, const MethodInfo*))ShimEnumerator_get_Key_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13929_gshared (ShimEnumerator_t2122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13929(__this, method) (( Object_t * (*) (ShimEnumerator_t2122 *, const MethodInfo*))ShimEnumerator_get_Value_m13929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13930_gshared (ShimEnumerator_t2122 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13930(__this, method) (( Object_t * (*) (ShimEnumerator_t2122 *, const MethodInfo*))ShimEnumerator_get_Current_m13930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13931_gshared (ShimEnumerator_t2122 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13931(__this, method) (( void (*) (ShimEnumerator_t2122 *, const MethodInfo*))ShimEnumerator_Reset_m13931_gshared)(__this, method)
