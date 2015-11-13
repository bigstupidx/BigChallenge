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
struct ShimEnumerator_t1852;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1838;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11092_gshared (ShimEnumerator_t1852 * __this, Dictionary_2_t1838 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11092(__this, ___host, method) (( void (*) (ShimEnumerator_t1852 *, Dictionary_2_t1838 *, const MethodInfo*))ShimEnumerator__ctor_m11092_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11093_gshared (ShimEnumerator_t1852 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11093(__this, method) (( bool (*) (ShimEnumerator_t1852 *, const MethodInfo*))ShimEnumerator_MoveNext_m11093_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t702  ShimEnumerator_get_Entry_m11094_gshared (ShimEnumerator_t1852 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11094(__this, method) (( DictionaryEntry_t702  (*) (ShimEnumerator_t1852 *, const MethodInfo*))ShimEnumerator_get_Entry_m11094_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11095_gshared (ShimEnumerator_t1852 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11095(__this, method) (( Object_t * (*) (ShimEnumerator_t1852 *, const MethodInfo*))ShimEnumerator_get_Key_m11095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11096_gshared (ShimEnumerator_t1852 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11096(__this, method) (( Object_t * (*) (ShimEnumerator_t1852 *, const MethodInfo*))ShimEnumerator_get_Value_m11096_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11097_gshared (ShimEnumerator_t1852 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11097(__this, method) (( Object_t * (*) (ShimEnumerator_t1852 *, const MethodInfo*))ShimEnumerator_get_Current_m11097_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m11098_gshared (ShimEnumerator_t1852 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m11098(__this, method) (( void (*) (ShimEnumerator_t1852 *, const MethodInfo*))ShimEnumerator_Reset_m11098_gshared)(__this, method)
