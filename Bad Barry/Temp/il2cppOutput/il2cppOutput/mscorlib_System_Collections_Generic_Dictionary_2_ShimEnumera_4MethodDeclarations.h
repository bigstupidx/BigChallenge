﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2453;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2443;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18818_gshared (ShimEnumerator_t2453 * __this, Dictionary_2_t2443 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18818(__this, ___host, method) (( void (*) (ShimEnumerator_t2453 *, Dictionary_2_t2443 *, const MethodInfo*))ShimEnumerator__ctor_m18818_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18819_gshared (ShimEnumerator_t2453 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18819(__this, method) (( bool (*) (ShimEnumerator_t2453 *, const MethodInfo*))ShimEnumerator_MoveNext_m18819_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t721  ShimEnumerator_get_Entry_m18820_gshared (ShimEnumerator_t2453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18820(__this, method) (( DictionaryEntry_t721  (*) (ShimEnumerator_t2453 *, const MethodInfo*))ShimEnumerator_get_Entry_m18820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18821_gshared (ShimEnumerator_t2453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18821(__this, method) (( Object_t * (*) (ShimEnumerator_t2453 *, const MethodInfo*))ShimEnumerator_get_Key_m18821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18822_gshared (ShimEnumerator_t2453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18822(__this, method) (( Object_t * (*) (ShimEnumerator_t2453 *, const MethodInfo*))ShimEnumerator_get_Value_m18822_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18823_gshared (ShimEnumerator_t2453 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18823(__this, method) (( Object_t * (*) (ShimEnumerator_t2453 *, const MethodInfo*))ShimEnumerator_get_Current_m18823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m18824_gshared (ShimEnumerator_t2453 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18824(__this, method) (( void (*) (ShimEnumerator_t2453 *, const MethodInfo*))ShimEnumerator_Reset_m18824_gshared)(__this, method)
