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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t2303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2531;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2592;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2593;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t2306;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2304;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2311;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2314;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m17061_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1__ctor_m17061(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1__ctor_m17061_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17063_gshared (List_1_t2303 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17063(__this, ___capacity, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1__ctor_m17063_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m17065_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17065(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17065_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17067_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17067(__this, method) (( Object_t* (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17067_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17069_gshared (List_1_t2303 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17069(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2303 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17069_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17071_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17071(__this, method) (( Object_t * (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17071_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17073_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17073(__this, ___item, method) (( int32_t (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17073_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17075_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17075(__this, ___item, method) (( bool (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17075_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17077_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17077(__this, ___item, method) (( int32_t (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17077_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17079_gshared (List_1_t2303 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17079(__this, ___index, ___item, method) (( void (*) (List_1_t2303 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17079_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17081_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17081(__this, ___item, method) (( void (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17081_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17083_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17083(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17083_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17085_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17085(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17087_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17087(__this, method) (( Object_t * (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17087_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17089_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17089(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17089_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17091_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17091(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17091_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17093_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17093(__this, ___index, method) (( Object_t * (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17093_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17095_gshared (List_1_t2303 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17095(__this, ___index, ___value, method) (( void (*) (List_1_t2303 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17095_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m17097_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Add_m17097(__this, ___item, method) (( void (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Add_m17097_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17099_gshared (List_1_t2303 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17099(__this, ___newCount, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17099_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17101_gshared (List_1_t2303 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17101(__this, ___collection, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17101_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17103_gshared (List_1_t2303 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17103(__this, ___enumerable, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17103_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17105_gshared (List_1_t2303 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17105(__this, ___collection, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_AddRange_m17105_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2306 * List_1_AsReadOnly_m17107_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17107(__this, method) (( ReadOnlyCollection_1_t2306 * (*) (List_1_t2303 *, const MethodInfo*))List_1_AsReadOnly_m17107_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m17109_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_Clear_m17109(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_Clear_m17109_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m17111_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Contains_m17111(__this, ___item, method) (( bool (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Contains_m17111_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17113_gshared (List_1_t2303 * __this, KeyValuePair_2U5BU5D_t2304* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17113(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2303 *, KeyValuePair_2U5BU5D_t2304*, int32_t, const MethodInfo*))List_1_CopyTo_m17113_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1841  List_1_Find_m17115_gshared (List_1_t2303 * __this, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_Find_m17115(__this, ___match, method) (( KeyValuePair_2_t1841  (*) (List_1_t2303 *, Predicate_1_t2311 *, const MethodInfo*))List_1_Find_m17115_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17117_gshared (Object_t * __this /* static, unused */, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17117(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2311 *, const MethodInfo*))List_1_CheckMatch_m17117_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17119_gshared (List_1_t2303 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17119(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2303 *, int32_t, int32_t, Predicate_1_t2311 *, const MethodInfo*))List_1_GetIndex_m17119_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2305  List_1_GetEnumerator_m17121_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17121(__this, method) (( Enumerator_t2305  (*) (List_1_t2303 *, const MethodInfo*))List_1_GetEnumerator_m17121_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17123_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17123(__this, ___item, method) (( int32_t (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_IndexOf_m17123_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17125_gshared (List_1_t2303 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17125(__this, ___start, ___delta, method) (( void (*) (List_1_t2303 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17125_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17127_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17127(__this, ___index, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17127_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17129_gshared (List_1_t2303 * __this, int32_t ___index, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Insert_m17129(__this, ___index, ___item, method) (( void (*) (List_1_t2303 *, int32_t, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Insert_m17129_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17131_gshared (List_1_t2303 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17131(__this, ___collection, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17131_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m17133_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Remove_m17133(__this, ___item, method) (( bool (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Remove_m17133_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17135_gshared (List_1_t2303 * __this, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17135(__this, ___match, method) (( int32_t (*) (List_1_t2303 *, Predicate_1_t2311 *, const MethodInfo*))List_1_RemoveAll_m17135_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17137_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17137(__this, ___index, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17137_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m17139_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_Reverse_m17139(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_Reverse_m17139_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m17141_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_Sort_m17141(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_Sort_m17141_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17143_gshared (List_1_t2303 * __this, Comparison_1_t2314 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17143(__this, ___comparison, method) (( void (*) (List_1_t2303 *, Comparison_1_t2314 *, const MethodInfo*))List_1_Sort_m17143_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2304* List_1_ToArray_m17145_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_ToArray_m17145(__this, method) (( KeyValuePair_2U5BU5D_t2304* (*) (List_1_t2303 *, const MethodInfo*))List_1_ToArray_m17145_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m17147_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17147(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_TrimExcess_m17147_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17149_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17149(__this, method) (( int32_t (*) (List_1_t2303 *, const MethodInfo*))List_1_get_Capacity_m17149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17151_gshared (List_1_t2303 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17151(__this, ___value, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17151_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m17153_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_get_Count_m17153(__this, method) (( int32_t (*) (List_1_t2303 *, const MethodInfo*))List_1_get_Count_m17153_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1841  List_1_get_Item_m17155_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17155(__this, ___index, method) (( KeyValuePair_2_t1841  (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_get_Item_m17155_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17157_gshared (List_1_t2303 * __this, int32_t ___index, KeyValuePair_2_t1841  ___value, const MethodInfo* method);
#define List_1_set_Item_m17157(__this, ___index, ___value, method) (( void (*) (List_1_t2303 *, int32_t, KeyValuePair_2_t1841 , const MethodInfo*))List_1_set_Item_m17157_gshared)(__this, ___index, ___value, method)
