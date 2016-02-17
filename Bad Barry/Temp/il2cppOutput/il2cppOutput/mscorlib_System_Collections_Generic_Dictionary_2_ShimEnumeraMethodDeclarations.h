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
struct ShimEnumerator_t1985;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1971;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11999_gshared (ShimEnumerator_t1985 * __this, Dictionary_2_t1971 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11999(__this, ___host, method) (( void (*) (ShimEnumerator_t1985 *, Dictionary_2_t1971 *, const MethodInfo*))ShimEnumerator__ctor_m11999_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12000_gshared (ShimEnumerator_t1985 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12000(__this, method) (( bool (*) (ShimEnumerator_t1985 *, const MethodInfo*))ShimEnumerator_MoveNext_m12000_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t784  ShimEnumerator_get_Entry_m12001_gshared (ShimEnumerator_t1985 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12001(__this, method) (( DictionaryEntry_t784  (*) (ShimEnumerator_t1985 *, const MethodInfo*))ShimEnumerator_get_Entry_m12001_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12002_gshared (ShimEnumerator_t1985 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12002(__this, method) (( Object_t * (*) (ShimEnumerator_t1985 *, const MethodInfo*))ShimEnumerator_get_Key_m12002_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12003_gshared (ShimEnumerator_t1985 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12003(__this, method) (( Object_t * (*) (ShimEnumerator_t1985 *, const MethodInfo*))ShimEnumerator_get_Value_m12003_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12004_gshared (ShimEnumerator_t1985 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12004(__this, method) (( Object_t * (*) (ShimEnumerator_t1985 *, const MethodInfo*))ShimEnumerator_get_Current_m12004_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12005_gshared (ShimEnumerator_t1985 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12005(__this, method) (( void (*) (ShimEnumerator_t1985 *, const MethodInfo*))ShimEnumerator_Reset_m12005_gshared)(__this, method)
