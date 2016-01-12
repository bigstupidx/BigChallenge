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
struct IndexedSet_1_t2080;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2211;
// System.Object[]
struct ObjectU5BU5D_t144;
// System.Predicate`1<System.Object>
struct Predicate_1_t1949;
// System.Comparison`1<System.Object>
struct Comparison_1_t1954;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13730_gshared (IndexedSet_1_t2080 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m13730(__this, method) (( void (*) (IndexedSet_1_t2080 *, const MethodInfo*))IndexedSet_1__ctor_m13730_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13732_gshared (IndexedSet_1_t2080 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13732(__this, method) (( Object_t * (*) (IndexedSet_1_t2080 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13732_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m13734_gshared (IndexedSet_1_t2080 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m13734(__this, ___item, method) (( void (*) (IndexedSet_1_t2080 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m13734_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13736_gshared (IndexedSet_1_t2080 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m13736(__this, ___item, method) (( bool (*) (IndexedSet_1_t2080 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m13736_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13738_gshared (IndexedSet_1_t2080 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m13738(__this, method) (( Object_t* (*) (IndexedSet_1_t2080 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13738_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m13740_gshared (IndexedSet_1_t2080 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m13740(__this, method) (( void (*) (IndexedSet_1_t2080 *, const MethodInfo*))IndexedSet_1_Clear_m13740_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m13742_gshared (IndexedSet_1_t2080 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m13742(__this, ___item, method) (( bool (*) (IndexedSet_1_t2080 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m13742_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m13744_gshared (IndexedSet_1_t2080 * __this, ObjectU5BU5D_t144* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m13744(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2080 *, ObjectU5BU5D_t144*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m13744_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m13746_gshared (IndexedSet_1_t2080 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m13746(__this, method) (( int32_t (*) (IndexedSet_1_t2080 *, const MethodInfo*))IndexedSet_1_get_Count_m13746_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m13748_gshared (IndexedSet_1_t2080 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m13748(__this, method) (( bool (*) (IndexedSet_1_t2080 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m13748_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m13750_gshared (IndexedSet_1_t2080 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m13750(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2080 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m13750_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m13752_gshared (IndexedSet_1_t2080 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m13752(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2080 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m13752_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m13754_gshared (IndexedSet_1_t2080 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m13754(__this, ___index, method) (( void (*) (IndexedSet_1_t2080 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m13754_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m13756_gshared (IndexedSet_1_t2080 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m13756(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2080 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m13756_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m13758_gshared (IndexedSet_1_t2080 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m13758(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2080 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m13758_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m13760_gshared (IndexedSet_1_t2080 * __this, Predicate_1_t1949 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m13760(__this, ___match, method) (( void (*) (IndexedSet_1_t2080 *, Predicate_1_t1949 *, const MethodInfo*))IndexedSet_1_RemoveAll_m13760_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m13761_gshared (IndexedSet_1_t2080 * __this, Comparison_1_t1954 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m13761(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2080 *, Comparison_1_t1954 *, const MethodInfo*))IndexedSet_1_Sort_m13761_gshared)(__this, ___sortLayoutFunction, method)
