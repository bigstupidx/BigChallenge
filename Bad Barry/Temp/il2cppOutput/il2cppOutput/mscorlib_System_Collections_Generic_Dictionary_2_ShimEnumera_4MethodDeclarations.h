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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2424;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2414;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18621_gshared (ShimEnumerator_t2424 * __this, Dictionary_2_t2414 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18621(__this, ___host, method) (( void (*) (ShimEnumerator_t2424 *, Dictionary_2_t2414 *, const MethodInfo*))ShimEnumerator__ctor_m18621_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18622_gshared (ShimEnumerator_t2424 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18622(__this, method) (( bool (*) (ShimEnumerator_t2424 *, const MethodInfo*))ShimEnumerator_MoveNext_m18622_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t702  ShimEnumerator_get_Entry_m18623_gshared (ShimEnumerator_t2424 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18623(__this, method) (( DictionaryEntry_t702  (*) (ShimEnumerator_t2424 *, const MethodInfo*))ShimEnumerator_get_Entry_m18623_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18624_gshared (ShimEnumerator_t2424 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18624(__this, method) (( Object_t * (*) (ShimEnumerator_t2424 *, const MethodInfo*))ShimEnumerator_get_Key_m18624_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18625_gshared (ShimEnumerator_t2424 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18625(__this, method) (( Object_t * (*) (ShimEnumerator_t2424 *, const MethodInfo*))ShimEnumerator_get_Value_m18625_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18626_gshared (ShimEnumerator_t2424 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18626(__this, method) (( Object_t * (*) (ShimEnumerator_t2424 *, const MethodInfo*))ShimEnumerator_get_Current_m18626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m18627_gshared (ShimEnumerator_t2424 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18627(__this, method) (( void (*) (ShimEnumerator_t2424 *, const MethodInfo*))ShimEnumerator_Reset_m18627_gshared)(__this, method)
