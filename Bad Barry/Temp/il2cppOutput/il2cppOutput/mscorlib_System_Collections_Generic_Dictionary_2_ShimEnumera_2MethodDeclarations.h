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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>
struct ShimEnumerator_t2370;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2362;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17768_gshared (ShimEnumerator_t2370 * __this, Dictionary_2_t2362 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17768(__this, ___host, method) (( void (*) (ShimEnumerator_t2370 *, Dictionary_2_t2362 *, const MethodInfo*))ShimEnumerator__ctor_m17768_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17769_gshared (ShimEnumerator_t2370 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17769(__this, method) (( bool (*) (ShimEnumerator_t2370 *, const MethodInfo*))ShimEnumerator_MoveNext_m17769_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Entry()
extern "C" DictionaryEntry_t721  ShimEnumerator_get_Entry_m17770_gshared (ShimEnumerator_t2370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17770(__this, method) (( DictionaryEntry_t721  (*) (ShimEnumerator_t2370 *, const MethodInfo*))ShimEnumerator_get_Entry_m17770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17771_gshared (ShimEnumerator_t2370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17771(__this, method) (( Object_t * (*) (ShimEnumerator_t2370 *, const MethodInfo*))ShimEnumerator_get_Key_m17771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17772_gshared (ShimEnumerator_t2370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17772(__this, method) (( Object_t * (*) (ShimEnumerator_t2370 *, const MethodInfo*))ShimEnumerator_get_Value_m17772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17773_gshared (ShimEnumerator_t2370 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17773(__this, method) (( Object_t * (*) (ShimEnumerator_t2370 *, const MethodInfo*))ShimEnumerator_get_Current_m17773_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m17774_gshared (ShimEnumerator_t2370 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17774(__this, method) (( void (*) (ShimEnumerator_t2370 *, const MethodInfo*))ShimEnumerator_Reset_m17774_gshared)(__this, method)