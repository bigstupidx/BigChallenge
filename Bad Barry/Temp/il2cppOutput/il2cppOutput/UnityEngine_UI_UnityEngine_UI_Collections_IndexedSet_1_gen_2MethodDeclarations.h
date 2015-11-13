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
struct IndexedSet_1_t1991;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2122;
// System.Object[]
struct ObjectU5BU5D_t102;
// System.Predicate`1<System.Object>
struct Predicate_1_t1869;
// System.Comparison`1<System.Object>
struct Comparison_1_t1874;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12966_gshared (IndexedSet_1_t1991 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12966(__this, method) (( void (*) (IndexedSet_1_t1991 *, const MethodInfo*))IndexedSet_1__ctor_m12966_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12968_gshared (IndexedSet_1_t1991 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12968(__this, method) (( Object_t * (*) (IndexedSet_1_t1991 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12968_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12970_gshared (IndexedSet_1_t1991 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12970(__this, ___item, method) (( void (*) (IndexedSet_1_t1991 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12970_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12972_gshared (IndexedSet_1_t1991 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12972(__this, ___item, method) (( bool (*) (IndexedSet_1_t1991 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12972_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12974_gshared (IndexedSet_1_t1991 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12974(__this, method) (( Object_t* (*) (IndexedSet_1_t1991 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12974_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12976_gshared (IndexedSet_1_t1991 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12976(__this, method) (( void (*) (IndexedSet_1_t1991 *, const MethodInfo*))IndexedSet_1_Clear_m12976_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12978_gshared (IndexedSet_1_t1991 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12978(__this, ___item, method) (( bool (*) (IndexedSet_1_t1991 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12978_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12980_gshared (IndexedSet_1_t1991 * __this, ObjectU5BU5D_t102* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12980(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1991 *, ObjectU5BU5D_t102*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12980_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12982_gshared (IndexedSet_1_t1991 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12982(__this, method) (( int32_t (*) (IndexedSet_1_t1991 *, const MethodInfo*))IndexedSet_1_get_Count_m12982_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12984_gshared (IndexedSet_1_t1991 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12984(__this, method) (( bool (*) (IndexedSet_1_t1991 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12984_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12986_gshared (IndexedSet_1_t1991 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12986(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1991 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12986_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12988_gshared (IndexedSet_1_t1991 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12988(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1991 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12988_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12990_gshared (IndexedSet_1_t1991 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12990(__this, ___index, method) (( void (*) (IndexedSet_1_t1991 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12990_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12992_gshared (IndexedSet_1_t1991 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12992(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1991 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12992_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12994_gshared (IndexedSet_1_t1991 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12994(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1991 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12994_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12996_gshared (IndexedSet_1_t1991 * __this, Predicate_1_t1869 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12996(__this, ___match, method) (( void (*) (IndexedSet_1_t1991 *, Predicate_1_t1869 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12996_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12997_gshared (IndexedSet_1_t1991 * __this, Comparison_1_t1874 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12997(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1991 *, Comparison_1_t1874 *, const MethodInfo*))IndexedSet_1_Sort_m12997_gshared)(__this, ___sortLayoutFunction, method)
