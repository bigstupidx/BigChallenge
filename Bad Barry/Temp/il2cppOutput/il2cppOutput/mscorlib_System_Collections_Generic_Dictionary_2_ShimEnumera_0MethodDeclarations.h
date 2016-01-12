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
struct ShimEnumerator_t2065;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2056;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13545_gshared (ShimEnumerator_t2065 * __this, Dictionary_2_t2056 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13545(__this, ___host, method) (( void (*) (ShimEnumerator_t2065 *, Dictionary_2_t2056 *, const MethodInfo*))ShimEnumerator__ctor_m13545_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13546_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13546(__this, method) (( bool (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_MoveNext_m13546_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t734  ShimEnumerator_get_Entry_m13547_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13547(__this, method) (( DictionaryEntry_t734  (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Entry_m13547_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13548_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13548(__this, method) (( Object_t * (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Key_m13548_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13549_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13549(__this, method) (( Object_t * (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Value_m13549_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13550_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13550(__this, method) (( Object_t * (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Current_m13550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13551_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13551(__this, method) (( void (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_Reset_m13551_gshared)(__this, method)
