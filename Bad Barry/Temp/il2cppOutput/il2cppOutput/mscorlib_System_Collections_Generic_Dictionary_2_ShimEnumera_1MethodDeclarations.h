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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2001;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1992;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13099_gshared (ShimEnumerator_t2001 * __this, Dictionary_2_t1992 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13099(__this, ___host, method) (( void (*) (ShimEnumerator_t2001 *, Dictionary_2_t1992 *, const MethodInfo*))ShimEnumerator__ctor_m13099_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13100_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13100(__this, method) (( bool (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_MoveNext_m13100_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t702  ShimEnumerator_get_Entry_m13101_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13101(__this, method) (( DictionaryEntry_t702  (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Entry_m13101_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13102_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13102(__this, method) (( Object_t * (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Key_m13102_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13103_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13103(__this, method) (( Object_t * (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Value_m13103_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13104_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13104(__this, method) (( Object_t * (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_get_Current_m13104_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m13105_gshared (ShimEnumerator_t2001 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13105(__this, method) (( void (*) (ShimEnumerator_t2001 *, const MethodInfo*))ShimEnumerator_Reset_m13105_gshared)(__this, method)
