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
struct ShimEnumerator_t2125;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2116;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14134_gshared (ShimEnumerator_t2125 * __this, Dictionary_2_t2116 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14134(__this, ___host, method) (( void (*) (ShimEnumerator_t2125 *, Dictionary_2_t2116 *, const MethodInfo*))ShimEnumerator__ctor_m14134_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14135_gshared (ShimEnumerator_t2125 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14135(__this, method) (( bool (*) (ShimEnumerator_t2125 *, const MethodInfo*))ShimEnumerator_MoveNext_m14135_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t764  ShimEnumerator_get_Entry_m14136_gshared (ShimEnumerator_t2125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14136(__this, method) (( DictionaryEntry_t764  (*) (ShimEnumerator_t2125 *, const MethodInfo*))ShimEnumerator_get_Entry_m14136_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14137_gshared (ShimEnumerator_t2125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14137(__this, method) (( Object_t * (*) (ShimEnumerator_t2125 *, const MethodInfo*))ShimEnumerator_get_Key_m14137_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14138_gshared (ShimEnumerator_t2125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14138(__this, method) (( Object_t * (*) (ShimEnumerator_t2125 *, const MethodInfo*))ShimEnumerator_get_Value_m14138_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14139_gshared (ShimEnumerator_t2125 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14139(__this, method) (( Object_t * (*) (ShimEnumerator_t2125 *, const MethodInfo*))ShimEnumerator_get_Current_m14139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m14140_gshared (ShimEnumerator_t2125 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14140(__this, method) (( void (*) (ShimEnumerator_t2125 *, const MethodInfo*))ShimEnumerator_Reset_m14140_gshared)(__this, method)
