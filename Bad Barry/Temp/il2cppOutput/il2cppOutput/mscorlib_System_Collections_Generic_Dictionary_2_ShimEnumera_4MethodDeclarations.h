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
struct ShimEnumerator_t2548;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2538;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19713_gshared (ShimEnumerator_t2548 * __this, Dictionary_2_t2538 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19713(__this, ___host, method) (( void (*) (ShimEnumerator_t2548 *, Dictionary_2_t2538 *, const MethodInfo*))ShimEnumerator__ctor_m19713_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19714_gshared (ShimEnumerator_t2548 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19714(__this, method) (( bool (*) (ShimEnumerator_t2548 *, const MethodInfo*))ShimEnumerator_MoveNext_m19714_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t764  ShimEnumerator_get_Entry_m19715_gshared (ShimEnumerator_t2548 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19715(__this, method) (( DictionaryEntry_t764  (*) (ShimEnumerator_t2548 *, const MethodInfo*))ShimEnumerator_get_Entry_m19715_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19716_gshared (ShimEnumerator_t2548 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19716(__this, method) (( Object_t * (*) (ShimEnumerator_t2548 *, const MethodInfo*))ShimEnumerator_get_Key_m19716_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19717_gshared (ShimEnumerator_t2548 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19717(__this, method) (( Object_t * (*) (ShimEnumerator_t2548 *, const MethodInfo*))ShimEnumerator_get_Value_m19717_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19718_gshared (ShimEnumerator_t2548 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19718(__this, method) (( Object_t * (*) (ShimEnumerator_t2548 *, const MethodInfo*))ShimEnumerator_get_Current_m19718_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m19719_gshared (ShimEnumerator_t2548 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m19719(__this, method) (( void (*) (ShimEnumerator_t2548 *, const MethodInfo*))ShimEnumerator_Reset_m19719_gshared)(__this, method)
