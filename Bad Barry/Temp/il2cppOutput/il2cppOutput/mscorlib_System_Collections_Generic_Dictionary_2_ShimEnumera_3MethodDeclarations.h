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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>
struct ShimEnumerator_t2503;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2495;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19020_gshared (ShimEnumerator_t2503 * __this, Dictionary_2_t2495 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19020(__this, ___host, method) (( void (*) (ShimEnumerator_t2503 *, Dictionary_2_t2495 *, const MethodInfo*))ShimEnumerator__ctor_m19020_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19021_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19021(__this, method) (( bool (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_MoveNext_m19021_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Entry()
extern "C" DictionaryEntry_t779  ShimEnumerator_get_Entry_m19022_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19022(__this, method) (( DictionaryEntry_t779  (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Entry_m19022_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19023_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19023(__this, method) (( Object_t * (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Key_m19023_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19024_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19024(__this, method) (( Object_t * (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Value_m19024_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19025_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19025(__this, method) (( Object_t * (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_get_Current_m19025_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m19026_gshared (ShimEnumerator_t2503 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m19026(__this, method) (( void (*) (ShimEnumerator_t2503 *, const MethodInfo*))ShimEnumerator_Reset_m19026_gshared)(__this, method)