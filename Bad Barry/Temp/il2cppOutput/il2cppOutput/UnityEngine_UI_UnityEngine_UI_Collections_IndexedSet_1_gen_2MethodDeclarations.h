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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1910;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2040;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Predicate`1<System.Object>
struct Predicate_1_t1794;
// System.Comparison`1<System.Object>
struct Comparison_1_t1799;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12489_gshared (IndexedSet_1_t1910 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12489(__this, method) (( void (*) (IndexedSet_1_t1910 *, const MethodInfo*))IndexedSet_1__ctor_m12489_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12491_gshared (IndexedSet_1_t1910 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12491(__this, method) (( Object_t * (*) (IndexedSet_1_t1910 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12491_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12493_gshared (IndexedSet_1_t1910 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12493(__this, ___item, method) (( void (*) (IndexedSet_1_t1910 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12493_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12495_gshared (IndexedSet_1_t1910 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12495(__this, ___item, method) (( bool (*) (IndexedSet_1_t1910 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12495_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12497_gshared (IndexedSet_1_t1910 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12497(__this, method) (( Object_t* (*) (IndexedSet_1_t1910 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12497_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12499_gshared (IndexedSet_1_t1910 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12499(__this, method) (( void (*) (IndexedSet_1_t1910 *, const MethodInfo*))IndexedSet_1_Clear_m12499_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12501_gshared (IndexedSet_1_t1910 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12501(__this, ___item, method) (( bool (*) (IndexedSet_1_t1910 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12501_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12503_gshared (IndexedSet_1_t1910 * __this, ObjectU5BU5D_t79* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12503(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1910 *, ObjectU5BU5D_t79*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12503_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12505_gshared (IndexedSet_1_t1910 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12505(__this, method) (( int32_t (*) (IndexedSet_1_t1910 *, const MethodInfo*))IndexedSet_1_get_Count_m12505_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12507_gshared (IndexedSet_1_t1910 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12507(__this, method) (( bool (*) (IndexedSet_1_t1910 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12507_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12509_gshared (IndexedSet_1_t1910 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12509(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1910 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12509_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12511_gshared (IndexedSet_1_t1910 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12511(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1910 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12511_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12513_gshared (IndexedSet_1_t1910 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12513(__this, ___index, method) (( void (*) (IndexedSet_1_t1910 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12513_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12515_gshared (IndexedSet_1_t1910 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12515(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1910 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12515_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12517_gshared (IndexedSet_1_t1910 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12517(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1910 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12517_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12518_gshared (IndexedSet_1_t1910 * __this, Predicate_1_t1794 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12518(__this, ___match, method) (( void (*) (IndexedSet_1_t1910 *, Predicate_1_t1794 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12518_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12519_gshared (IndexedSet_1_t1910 * __this, Comparison_1_t1799 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12519(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1910 *, Comparison_1_t1799 *, const MethodInfo*))IndexedSet_1_Sort_m12519_gshared)(__this, ___sortLayoutFunction, method)
