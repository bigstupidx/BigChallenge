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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t403;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2696;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t156;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2719;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2720;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2297;
// System.Int32[]
struct Int32U5BU5D_t68;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2300;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2304;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m16459_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1__ctor_m16459(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1__ctor_m16459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16460_gshared (List_1_t403 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16460(__this, ___capacity, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1__ctor_m16460_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m16461_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16461(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16461_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16462_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16462(__this, method) (( Object_t* (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16462_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16463_gshared (List_1_t403 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16463(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t403 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16463_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16464_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16464(__this, method) (( Object_t * (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16464_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16465_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16465(__this, ___item, method) (( int32_t (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16465_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16466_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16466(__this, ___item, method) (( bool (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16466_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16467_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16467(__this, ___item, method) (( int32_t (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16468_gshared (List_1_t403 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16468(__this, ___index, ___item, method) (( void (*) (List_1_t403 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16468_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16469_gshared (List_1_t403 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16469(__this, ___item, method) (( void (*) (List_1_t403 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16469_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16470_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16470(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16470_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16471_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16471(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16471_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16472_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16472(__this, method) (( Object_t * (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16472_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16473_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16473(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16474_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16474(__this, method) (( bool (*) (List_1_t403 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16474_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16475_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16475(__this, ___index, method) (( Object_t * (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16475_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16476_gshared (List_1_t403 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16476(__this, ___index, ___value, method) (( void (*) (List_1_t403 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16476_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m16477_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m16477(__this, ___item, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_Add_m16477_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16478_gshared (List_1_t403 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16478(__this, ___newCount, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16478_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m16479_gshared (List_1_t403 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m16479(__this, ___idx, ___count, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m16479_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16480_gshared (List_1_t403 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16480(__this, ___collection, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16481_gshared (List_1_t403 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16481(__this, ___enumerable, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16481_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2878_gshared (List_1_t403 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2878(__this, ___collection, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_AddRange_m2878_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2297 * List_1_AsReadOnly_m16482_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16482(__this, method) (( ReadOnlyCollection_1_t2297 * (*) (List_1_t403 *, const MethodInfo*))List_1_AsReadOnly_m16482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m16483_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_Clear_m16483(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_Clear_m16483_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m16484_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m16484(__this, ___item, method) (( bool (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_Contains_m16484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16485_gshared (List_1_t403 * __this, Int32U5BU5D_t68* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16485(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t403 *, Int32U5BU5D_t68*, int32_t, const MethodInfo*))List_1_CopyTo_m16485_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m16486_gshared (List_1_t403 * __this, Predicate_1_t2300 * ___match, const MethodInfo* method);
#define List_1_Find_m16486(__this, ___match, method) (( int32_t (*) (List_1_t403 *, Predicate_1_t2300 *, const MethodInfo*))List_1_Find_m16486_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16487_gshared (Object_t * __this /* static, unused */, Predicate_1_t2300 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16487(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2300 *, const MethodInfo*))List_1_CheckMatch_m16487_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16488_gshared (List_1_t403 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2300 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16488(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t403 *, int32_t, int32_t, Predicate_1_t2300 *, const MethodInfo*))List_1_GetIndex_m16488_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2296  List_1_GetEnumerator_m16489_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16489(__this, method) (( Enumerator_t2296  (*) (List_1_t403 *, const MethodInfo*))List_1_GetEnumerator_m16489_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16490_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m16490(__this, ___item, method) (( int32_t (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_IndexOf_m16490_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16491_gshared (List_1_t403 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16491(__this, ___start, ___delta, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16491_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16492_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16492(__this, ___index, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16493_gshared (List_1_t403 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m16493(__this, ___index, ___item, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m16493_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16494_gshared (List_1_t403 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16494(__this, ___collection, method) (( void (*) (List_1_t403 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16494_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m16495_gshared (List_1_t403 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m16495(__this, ___item, method) (( bool (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_Remove_m16495_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16496_gshared (List_1_t403 * __this, Predicate_1_t2300 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16496(__this, ___match, method) (( int32_t (*) (List_1_t403 *, Predicate_1_t2300 *, const MethodInfo*))List_1_RemoveAll_m16496_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16497_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16497(__this, ___index, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m16498_gshared (List_1_t403 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m16498(__this, ___index, ___count, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m16498_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m16499_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_Reverse_m16499(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_Reverse_m16499_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m16500_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_Sort_m16500(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_Sort_m16500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16501_gshared (List_1_t403 * __this, Comparison_1_t2304 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16501(__this, ___comparison, method) (( void (*) (List_1_t403 *, Comparison_1_t2304 *, const MethodInfo*))List_1_Sort_m16501_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t68* List_1_ToArray_m16502_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_ToArray_m16502(__this, method) (( Int32U5BU5D_t68* (*) (List_1_t403 *, const MethodInfo*))List_1_ToArray_m16502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m16503_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16503(__this, method) (( void (*) (List_1_t403 *, const MethodInfo*))List_1_TrimExcess_m16503_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16504_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16504(__this, method) (( int32_t (*) (List_1_t403 *, const MethodInfo*))List_1_get_Capacity_m16504_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16505_gshared (List_1_t403 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16505(__this, ___value, method) (( void (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16505_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m16506_gshared (List_1_t403 * __this, const MethodInfo* method);
#define List_1_get_Count_m16506(__this, method) (( int32_t (*) (List_1_t403 *, const MethodInfo*))List_1_get_Count_m16506_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m16507_gshared (List_1_t403 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16507(__this, ___index, method) (( int32_t (*) (List_1_t403 *, int32_t, const MethodInfo*))List_1_get_Item_m16507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16508_gshared (List_1_t403 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m16508(__this, ___index, ___value, method) (( void (*) (List_1_t403 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m16508_gshared)(__this, ___index, ___value, method)
