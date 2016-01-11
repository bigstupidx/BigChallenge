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
struct List_1_t2381;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2612;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2673;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2674;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t2384;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2382;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2389;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2392;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m17786_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1__ctor_m17786(__this, method) (( void (*) (List_1_t2381 *, const MethodInfo*))List_1__ctor_m17786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17788_gshared (List_1_t2381 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17788(__this, ___capacity, method) (( void (*) (List_1_t2381 *, int32_t, const MethodInfo*))List_1__ctor_m17788_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m17790_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17790(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17790_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17792_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17792(__this, method) (( Object_t* (*) (List_1_t2381 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17792_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17794_gshared (List_1_t2381 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17794(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2381 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17794_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17796_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17796(__this, method) (( Object_t * (*) (List_1_t2381 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17796_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17798_gshared (List_1_t2381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17798(__this, ___item, method) (( int32_t (*) (List_1_t2381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17798_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17800_gshared (List_1_t2381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17800(__this, ___item, method) (( bool (*) (List_1_t2381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17800_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17802_gshared (List_1_t2381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17802(__this, ___item, method) (( int32_t (*) (List_1_t2381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17802_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17804_gshared (List_1_t2381 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17804(__this, ___index, ___item, method) (( void (*) (List_1_t2381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17804_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17806_gshared (List_1_t2381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17806(__this, ___item, method) (( void (*) (List_1_t2381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17806_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17808_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17808(__this, method) (( bool (*) (List_1_t2381 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17810_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17810(__this, method) (( bool (*) (List_1_t2381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17810_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17812_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17812(__this, method) (( Object_t * (*) (List_1_t2381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17812_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17814_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17814(__this, method) (( bool (*) (List_1_t2381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17816_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17816(__this, method) (( bool (*) (List_1_t2381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17818_gshared (List_1_t2381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17818(__this, ___index, method) (( Object_t * (*) (List_1_t2381 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17818_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17820_gshared (List_1_t2381 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17820(__this, ___index, ___value, method) (( void (*) (List_1_t2381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17820_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m17822_gshared (List_1_t2381 * __this, KeyValuePair_2_t1911  ___item, const MethodInfo* method);
#define List_1_Add_m17822(__this, ___item, method) (( void (*) (List_1_t2381 *, KeyValuePair_2_t1911 , const MethodInfo*))List_1_Add_m17822_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17824_gshared (List_1_t2381 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17824(__this, ___newCount, method) (( void (*) (List_1_t2381 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17824_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m17826_gshared (List_1_t2381 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m17826(__this, ___idx, ___count, method) (( void (*) (List_1_t2381 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m17826_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17828_gshared (List_1_t2381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17828(__this, ___collection, method) (( void (*) (List_1_t2381 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17828_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17830_gshared (List_1_t2381 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17830(__this, ___enumerable, method) (( void (*) (List_1_t2381 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17830_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17832_gshared (List_1_t2381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17832(__this, ___collection, method) (( void (*) (List_1_t2381 *, Object_t*, const MethodInfo*))List_1_AddRange_m17832_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2384 * List_1_AsReadOnly_m17834_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17834(__this, method) (( ReadOnlyCollection_1_t2384 * (*) (List_1_t2381 *, const MethodInfo*))List_1_AsReadOnly_m17834_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m17836_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_Clear_m17836(__this, method) (( void (*) (List_1_t2381 *, const MethodInfo*))List_1_Clear_m17836_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m17838_gshared (List_1_t2381 * __this, KeyValuePair_2_t1911  ___item, const MethodInfo* method);
#define List_1_Contains_m17838(__this, ___item, method) (( bool (*) (List_1_t2381 *, KeyValuePair_2_t1911 , const MethodInfo*))List_1_Contains_m17838_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17840_gshared (List_1_t2381 * __this, KeyValuePair_2U5BU5D_t2382* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17840(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2381 *, KeyValuePair_2U5BU5D_t2382*, int32_t, const MethodInfo*))List_1_CopyTo_m17840_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1911  List_1_Find_m17842_gshared (List_1_t2381 * __this, Predicate_1_t2389 * ___match, const MethodInfo* method);
#define List_1_Find_m17842(__this, ___match, method) (( KeyValuePair_2_t1911  (*) (List_1_t2381 *, Predicate_1_t2389 *, const MethodInfo*))List_1_Find_m17842_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17844_gshared (Object_t * __this /* static, unused */, Predicate_1_t2389 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17844(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2389 *, const MethodInfo*))List_1_CheckMatch_m17844_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17846_gshared (List_1_t2381 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2389 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17846(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2381 *, int32_t, int32_t, Predicate_1_t2389 *, const MethodInfo*))List_1_GetIndex_m17846_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2383  List_1_GetEnumerator_m17848_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17848(__this, method) (( Enumerator_t2383  (*) (List_1_t2381 *, const MethodInfo*))List_1_GetEnumerator_m17848_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17850_gshared (List_1_t2381 * __this, KeyValuePair_2_t1911  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17850(__this, ___item, method) (( int32_t (*) (List_1_t2381 *, KeyValuePair_2_t1911 , const MethodInfo*))List_1_IndexOf_m17850_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17852_gshared (List_1_t2381 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17852(__this, ___start, ___delta, method) (( void (*) (List_1_t2381 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17852_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17854_gshared (List_1_t2381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17854(__this, ___index, method) (( void (*) (List_1_t2381 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17854_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17856_gshared (List_1_t2381 * __this, int32_t ___index, KeyValuePair_2_t1911  ___item, const MethodInfo* method);
#define List_1_Insert_m17856(__this, ___index, ___item, method) (( void (*) (List_1_t2381 *, int32_t, KeyValuePair_2_t1911 , const MethodInfo*))List_1_Insert_m17856_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17858_gshared (List_1_t2381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17858(__this, ___collection, method) (( void (*) (List_1_t2381 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17858_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m17860_gshared (List_1_t2381 * __this, KeyValuePair_2_t1911  ___item, const MethodInfo* method);
#define List_1_Remove_m17860(__this, ___item, method) (( bool (*) (List_1_t2381 *, KeyValuePair_2_t1911 , const MethodInfo*))List_1_Remove_m17860_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17862_gshared (List_1_t2381 * __this, Predicate_1_t2389 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17862(__this, ___match, method) (( int32_t (*) (List_1_t2381 *, Predicate_1_t2389 *, const MethodInfo*))List_1_RemoveAll_m17862_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17864_gshared (List_1_t2381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17864(__this, ___index, method) (( void (*) (List_1_t2381 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17864_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m17866_gshared (List_1_t2381 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m17866(__this, ___index, ___count, method) (( void (*) (List_1_t2381 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m17866_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m17868_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_Reverse_m17868(__this, method) (( void (*) (List_1_t2381 *, const MethodInfo*))List_1_Reverse_m17868_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m17870_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_Sort_m17870(__this, method) (( void (*) (List_1_t2381 *, const MethodInfo*))List_1_Sort_m17870_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17872_gshared (List_1_t2381 * __this, Comparison_1_t2392 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17872(__this, ___comparison, method) (( void (*) (List_1_t2381 *, Comparison_1_t2392 *, const MethodInfo*))List_1_Sort_m17872_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2382* List_1_ToArray_m17874_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_ToArray_m17874(__this, method) (( KeyValuePair_2U5BU5D_t2382* (*) (List_1_t2381 *, const MethodInfo*))List_1_ToArray_m17874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m17876_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17876(__this, method) (( void (*) (List_1_t2381 *, const MethodInfo*))List_1_TrimExcess_m17876_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17878_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17878(__this, method) (( int32_t (*) (List_1_t2381 *, const MethodInfo*))List_1_get_Capacity_m17878_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17880_gshared (List_1_t2381 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17880(__this, ___value, method) (( void (*) (List_1_t2381 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17880_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m17882_gshared (List_1_t2381 * __this, const MethodInfo* method);
#define List_1_get_Count_m17882(__this, method) (( int32_t (*) (List_1_t2381 *, const MethodInfo*))List_1_get_Count_m17882_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1911  List_1_get_Item_m17884_gshared (List_1_t2381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17884(__this, ___index, method) (( KeyValuePair_2_t1911  (*) (List_1_t2381 *, int32_t, const MethodInfo*))List_1_get_Item_m17884_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17886_gshared (List_1_t2381 * __this, int32_t ___index, KeyValuePair_2_t1911  ___value, const MethodInfo* method);
#define List_1_set_Item_m17886(__this, ___index, ___value, method) (( void (*) (List_1_t2381 *, int32_t, KeyValuePair_2_t1911 , const MethodInfo*))List_1_set_Item_m17886_gshared)(__this, ___index, ___value, method)
