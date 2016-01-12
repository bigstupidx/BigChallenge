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
struct ShimEnumerator_t2090;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2081;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13864_gshared (ShimEnumerator_t2090 * __this, Dictionary_2_t2081 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13864(__this, ___host, method) (( void (*) (ShimEnumerator_t2090 *, Dictionary_2_t2081 *, const MethodInfo*))ShimEnumerator__ctor_m13864_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13865_gshared (ShimEnumerator_t2090 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13865(__this, method) (( bool (*) (ShimEnumerator_t2090 *, const MethodInfo*))ShimEnumerator_MoveNext_m13865_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t734  ShimEnumerator_get_Entry_m13866_gshared (ShimEnumerator_t2090 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13866(__this, method) (( DictionaryEntry_t734  (*) (ShimEnumerator_t2090 *, const MethodInfo*))ShimEnumerator_get_Entry_m13866_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13867_gshared (ShimEnumerator_t2090 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13867(__this, method) (( Object_t * (*) (ShimEnumerator_t2090 *, const MethodInfo*))ShimEnumerator_get_Key_m13867_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13868_gshared (ShimEnumerator_t2090 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13868(__this, method) (( Object_t * (*) (ShimEnumerator_t2090 *, const MethodInfo*))ShimEnumerator_get_Value_m13868_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13869_gshared (ShimEnumerator_t2090 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13869(__this, method) (( Object_t * (*) (ShimEnumerator_t2090 *, const MethodInfo*))ShimEnumerator_get_Current_m13869_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m13870_gshared (ShimEnumerator_t2090 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13870(__this, method) (( void (*) (ShimEnumerator_t2090 *, const MethodInfo*))ShimEnumerator_Reset_m13870_gshared)(__this, method)
