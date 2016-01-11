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
struct IndexedSet_1_t2069;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2200;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Predicate`1<System.Object>
struct Predicate_1_t1938;
// System.Comparison`1<System.Object>
struct Comparison_1_t1943;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13637_gshared (IndexedSet_1_t2069 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m13637(__this, method) (( void (*) (IndexedSet_1_t2069 *, const MethodInfo*))IndexedSet_1__ctor_m13637_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13639_gshared (IndexedSet_1_t2069 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13639(__this, method) (( Object_t * (*) (IndexedSet_1_t2069 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13639_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m13641_gshared (IndexedSet_1_t2069 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m13641(__this, ___item, method) (( void (*) (IndexedSet_1_t2069 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m13641_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13643_gshared (IndexedSet_1_t2069 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m13643(__this, ___item, method) (( bool (*) (IndexedSet_1_t2069 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m13643_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13645_gshared (IndexedSet_1_t2069 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m13645(__this, method) (( Object_t* (*) (IndexedSet_1_t2069 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13645_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m13647_gshared (IndexedSet_1_t2069 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m13647(__this, method) (( void (*) (IndexedSet_1_t2069 *, const MethodInfo*))IndexedSet_1_Clear_m13647_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m13649_gshared (IndexedSet_1_t2069 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m13649(__this, ___item, method) (( bool (*) (IndexedSet_1_t2069 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m13649_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m13651_gshared (IndexedSet_1_t2069 * __this, ObjectU5BU5D_t142* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m13651(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2069 *, ObjectU5BU5D_t142*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m13651_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m13653_gshared (IndexedSet_1_t2069 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m13653(__this, method) (( int32_t (*) (IndexedSet_1_t2069 *, const MethodInfo*))IndexedSet_1_get_Count_m13653_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m13655_gshared (IndexedSet_1_t2069 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m13655(__this, method) (( bool (*) (IndexedSet_1_t2069 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m13655_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m13657_gshared (IndexedSet_1_t2069 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m13657(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2069 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m13657_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m13659_gshared (IndexedSet_1_t2069 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m13659(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2069 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m13659_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m13661_gshared (IndexedSet_1_t2069 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m13661(__this, ___index, method) (( void (*) (IndexedSet_1_t2069 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m13661_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m13663_gshared (IndexedSet_1_t2069 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m13663(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2069 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m13663_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m13665_gshared (IndexedSet_1_t2069 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m13665(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2069 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m13665_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m13667_gshared (IndexedSet_1_t2069 * __this, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m13667(__this, ___match, method) (( void (*) (IndexedSet_1_t2069 *, Predicate_1_t1938 *, const MethodInfo*))IndexedSet_1_RemoveAll_m13667_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m13668_gshared (IndexedSet_1_t2069 * __this, Comparison_1_t1943 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m13668(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2069 *, Comparison_1_t1943 *, const MethodInfo*))IndexedSet_1_Sort_m13668_gshared)(__this, ___sortLayoutFunction, method)
