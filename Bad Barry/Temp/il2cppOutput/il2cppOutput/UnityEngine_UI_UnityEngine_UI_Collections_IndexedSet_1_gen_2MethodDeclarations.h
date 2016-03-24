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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2131;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2262;
// System.Object[]
struct ObjectU5BU5D_t179;
// System.Predicate`1<System.Object>
struct Predicate_1_t1995;
// System.Comparison`1<System.Object>
struct Comparison_1_t2000;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m14084_gshared (IndexedSet_1_t2131 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m14084(__this, method) (( void (*) (IndexedSet_1_t2131 *, const MethodInfo*))IndexedSet_1__ctor_m14084_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14086_gshared (IndexedSet_1_t2131 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14086(__this, method) (( Object_t * (*) (IndexedSet_1_t2131 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m14086_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14088_gshared (IndexedSet_1_t2131 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14088(__this, ___item, method) (( void (*) (IndexedSet_1_t2131 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14088_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14090_gshared (IndexedSet_1_t2131 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14090(__this, ___item, method) (( bool (*) (IndexedSet_1_t2131 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14090_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14092_gshared (IndexedSet_1_t2131 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14092(__this, method) (( Object_t* (*) (IndexedSet_1_t2131 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14092_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14094_gshared (IndexedSet_1_t2131 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14094(__this, method) (( void (*) (IndexedSet_1_t2131 *, const MethodInfo*))IndexedSet_1_Clear_m14094_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14096_gshared (IndexedSet_1_t2131 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14096(__this, ___item, method) (( bool (*) (IndexedSet_1_t2131 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14096_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14098_gshared (IndexedSet_1_t2131 * __this, ObjectU5BU5D_t179* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14098(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2131 *, ObjectU5BU5D_t179*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14098_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14100_gshared (IndexedSet_1_t2131 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14100(__this, method) (( int32_t (*) (IndexedSet_1_t2131 *, const MethodInfo*))IndexedSet_1_get_Count_m14100_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14102_gshared (IndexedSet_1_t2131 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14102(__this, method) (( bool (*) (IndexedSet_1_t2131 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14102_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14104_gshared (IndexedSet_1_t2131 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14104(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2131 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14104_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14106_gshared (IndexedSet_1_t2131 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14106(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2131 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14106_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14108_gshared (IndexedSet_1_t2131 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14108(__this, ___index, method) (( void (*) (IndexedSet_1_t2131 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14108_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14110_gshared (IndexedSet_1_t2131 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14110(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2131 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14110_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14112_gshared (IndexedSet_1_t2131 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14112(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2131 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14112_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14114_gshared (IndexedSet_1_t2131 * __this, Predicate_1_t1995 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14114(__this, ___match, method) (( void (*) (IndexedSet_1_t2131 *, Predicate_1_t1995 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14114_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14115_gshared (IndexedSet_1_t2131 * __this, Comparison_1_t2000 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14115(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2131 *, Comparison_1_t2000 *, const MethodInfo*))IndexedSet_1_Sort_m14115_gshared)(__this, ___sortLayoutFunction, method)
