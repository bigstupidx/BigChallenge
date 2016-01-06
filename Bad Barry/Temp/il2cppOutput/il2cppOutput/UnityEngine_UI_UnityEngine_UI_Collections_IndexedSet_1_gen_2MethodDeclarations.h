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
struct IndexedSet_1_t2020;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2151;
// System.Object[]
struct ObjectU5BU5D_t128;
// System.Predicate`1<System.Object>
struct Predicate_1_t1888;
// System.Comparison`1<System.Object>
struct Comparison_1_t1893;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13162_gshared (IndexedSet_1_t2020 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m13162(__this, method) (( void (*) (IndexedSet_1_t2020 *, const MethodInfo*))IndexedSet_1__ctor_m13162_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13164_gshared (IndexedSet_1_t2020 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13164(__this, method) (( Object_t * (*) (IndexedSet_1_t2020 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13164_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m13166_gshared (IndexedSet_1_t2020 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m13166(__this, ___item, method) (( void (*) (IndexedSet_1_t2020 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m13166_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13168_gshared (IndexedSet_1_t2020 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m13168(__this, ___item, method) (( bool (*) (IndexedSet_1_t2020 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m13168_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13170_gshared (IndexedSet_1_t2020 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m13170(__this, method) (( Object_t* (*) (IndexedSet_1_t2020 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13170_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m13172_gshared (IndexedSet_1_t2020 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m13172(__this, method) (( void (*) (IndexedSet_1_t2020 *, const MethodInfo*))IndexedSet_1_Clear_m13172_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m13174_gshared (IndexedSet_1_t2020 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m13174(__this, ___item, method) (( bool (*) (IndexedSet_1_t2020 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m13174_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m13176_gshared (IndexedSet_1_t2020 * __this, ObjectU5BU5D_t128* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m13176(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2020 *, ObjectU5BU5D_t128*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m13176_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m13178_gshared (IndexedSet_1_t2020 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m13178(__this, method) (( int32_t (*) (IndexedSet_1_t2020 *, const MethodInfo*))IndexedSet_1_get_Count_m13178_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m13180_gshared (IndexedSet_1_t2020 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m13180(__this, method) (( bool (*) (IndexedSet_1_t2020 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m13180_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m13182_gshared (IndexedSet_1_t2020 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m13182(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2020 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m13182_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m13184_gshared (IndexedSet_1_t2020 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m13184(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2020 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m13184_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m13186_gshared (IndexedSet_1_t2020 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m13186(__this, ___index, method) (( void (*) (IndexedSet_1_t2020 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m13186_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m13188_gshared (IndexedSet_1_t2020 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m13188(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2020 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m13188_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m13190_gshared (IndexedSet_1_t2020 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m13190(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2020 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m13190_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m13192_gshared (IndexedSet_1_t2020 * __this, Predicate_1_t1888 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m13192(__this, ___match, method) (( void (*) (IndexedSet_1_t2020 *, Predicate_1_t1888 *, const MethodInfo*))IndexedSet_1_RemoveAll_m13192_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m13193_gshared (IndexedSet_1_t2020 * __this, Comparison_1_t1893 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m13193(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2020 *, Comparison_1_t1893 *, const MethodInfo*))IndexedSet_1_Sort_m13193_gshared)(__this, ___sortLayoutFunction, method)
