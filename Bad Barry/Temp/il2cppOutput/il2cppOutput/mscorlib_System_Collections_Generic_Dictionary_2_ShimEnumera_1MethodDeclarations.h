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
struct ShimEnumerator_t2147;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2138;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14244_gshared (ShimEnumerator_t2147 * __this, Dictionary_2_t2138 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14244(__this, ___host, method) (( void (*) (ShimEnumerator_t2147 *, Dictionary_2_t2138 *, const MethodInfo*))ShimEnumerator__ctor_m14244_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14245_gshared (ShimEnumerator_t2147 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14245(__this, method) (( bool (*) (ShimEnumerator_t2147 *, const MethodInfo*))ShimEnumerator_MoveNext_m14245_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t784  ShimEnumerator_get_Entry_m14246_gshared (ShimEnumerator_t2147 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14246(__this, method) (( DictionaryEntry_t784  (*) (ShimEnumerator_t2147 *, const MethodInfo*))ShimEnumerator_get_Entry_m14246_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14247_gshared (ShimEnumerator_t2147 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14247(__this, method) (( Object_t * (*) (ShimEnumerator_t2147 *, const MethodInfo*))ShimEnumerator_get_Key_m14247_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14248_gshared (ShimEnumerator_t2147 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14248(__this, method) (( Object_t * (*) (ShimEnumerator_t2147 *, const MethodInfo*))ShimEnumerator_get_Value_m14248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14249_gshared (ShimEnumerator_t2147 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14249(__this, method) (( Object_t * (*) (ShimEnumerator_t2147 *, const MethodInfo*))ShimEnumerator_get_Current_m14249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m14250_gshared (ShimEnumerator_t2147 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14250(__this, method) (( void (*) (ShimEnumerator_t2147 *, const MethodInfo*))ShimEnumerator_Reset_m14250_gshared)(__this, method)
