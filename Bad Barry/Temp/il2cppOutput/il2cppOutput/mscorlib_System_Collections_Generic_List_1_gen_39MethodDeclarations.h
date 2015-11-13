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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t402;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2122;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2535;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t427;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1831;
// System.Object[]
struct ObjectU5BU5D_t102;
// System.Predicate`1<System.Object>
struct Predicate_1_t1869;
// System.Comparison`1<System.Object>
struct Comparison_1_t1874;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11239_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1__ctor_m11239(__this, method) (( void (*) (List_1_t402 *, const MethodInfo*))List_1__ctor_m11239_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11241_gshared (List_1_t402 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11241(__this, ___capacity, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1__ctor_m11241_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11243_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11243(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11243_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11245_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11245(__this, method) (( Object_t* (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11245_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11247_gshared (List_1_t402 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11247(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t402 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11247_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11249_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11249(__this, method) (( Object_t * (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11249_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11251_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11251(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11251_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11253_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11253(__this, ___item, method) (( bool (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11253_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11255_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11255(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11255_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11257_gshared (List_1_t402 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11257(__this, ___index, ___item, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11257_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11259_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11259(__this, ___item, method) (( void (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11259_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11261_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11261(__this, method) (( bool (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11261_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11263_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11263(__this, method) (( bool (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11263_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11265_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11265(__this, method) (( Object_t * (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11267_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11267(__this, method) (( bool (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11267_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11269_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11269(__this, method) (( bool (*) (List_1_t402 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11269_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11271_gshared (List_1_t402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11271(__this, ___index, method) (( Object_t * (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11271_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11273_gshared (List_1_t402 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11273(__this, ___index, ___value, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11273_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11275_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11275(__this, ___item, method) (( void (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_Add_m11275_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11277_gshared (List_1_t402 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11277(__this, ___newCount, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11277_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11279_gshared (List_1_t402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11279(__this, ___collection, method) (( void (*) (List_1_t402 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11279_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11281_gshared (List_1_t402 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11281(__this, ___enumerable, method) (( void (*) (List_1_t402 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11281_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11283_gshared (List_1_t402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11283(__this, ___collection, method) (( void (*) (List_1_t402 *, Object_t*, const MethodInfo*))List_1_AddRange_m11283_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1831 * List_1_AsReadOnly_m11285_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11285(__this, method) (( ReadOnlyCollection_1_t1831 * (*) (List_1_t402 *, const MethodInfo*))List_1_AsReadOnly_m11285_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11287_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_Clear_m11287(__this, method) (( void (*) (List_1_t402 *, const MethodInfo*))List_1_Clear_m11287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11289_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11289(__this, ___item, method) (( bool (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_Contains_m11289_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11291_gshared (List_1_t402 * __this, ObjectU5BU5D_t102* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11291(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t402 *, ObjectU5BU5D_t102*, int32_t, const MethodInfo*))List_1_CopyTo_m11291_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11293_gshared (List_1_t402 * __this, Predicate_1_t1869 * ___match, const MethodInfo* method);
#define List_1_Find_m11293(__this, ___match, method) (( Object_t * (*) (List_1_t402 *, Predicate_1_t1869 *, const MethodInfo*))List_1_Find_m11293_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11295_gshared (Object_t * __this /* static, unused */, Predicate_1_t1869 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11295(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1869 *, const MethodInfo*))List_1_CheckMatch_m11295_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11297_gshared (List_1_t402 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1869 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11297(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t402 *, int32_t, int32_t, Predicate_1_t1869 *, const MethodInfo*))List_1_GetIndex_m11297_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1866  List_1_GetEnumerator_m11299_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11299(__this, method) (( Enumerator_t1866  (*) (List_1_t402 *, const MethodInfo*))List_1_GetEnumerator_m11299_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11301_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11301(__this, ___item, method) (( int32_t (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11301_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11303_gshared (List_1_t402 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11303(__this, ___start, ___delta, method) (( void (*) (List_1_t402 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11303_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11305_gshared (List_1_t402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11305(__this, ___index, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11305_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11307_gshared (List_1_t402 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11307(__this, ___index, ___item, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11307_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11309_gshared (List_1_t402 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11309(__this, ___collection, method) (( void (*) (List_1_t402 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11309_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11311_gshared (List_1_t402 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11311(__this, ___item, method) (( bool (*) (List_1_t402 *, Object_t *, const MethodInfo*))List_1_Remove_m11311_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11313_gshared (List_1_t402 * __this, Predicate_1_t1869 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11313(__this, ___match, method) (( int32_t (*) (List_1_t402 *, Predicate_1_t1869 *, const MethodInfo*))List_1_RemoveAll_m11313_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11315_gshared (List_1_t402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11315(__this, ___index, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11315_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11317_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_Reverse_m11317(__this, method) (( void (*) (List_1_t402 *, const MethodInfo*))List_1_Reverse_m11317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11319_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_Sort_m11319(__this, method) (( void (*) (List_1_t402 *, const MethodInfo*))List_1_Sort_m11319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11321_gshared (List_1_t402 * __this, Comparison_1_t1874 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11321(__this, ___comparison, method) (( void (*) (List_1_t402 *, Comparison_1_t1874 *, const MethodInfo*))List_1_Sort_m11321_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t102* List_1_ToArray_m11322_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_ToArray_m11322(__this, method) (( ObjectU5BU5D_t102* (*) (List_1_t402 *, const MethodInfo*))List_1_ToArray_m11322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11324_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11324(__this, method) (( void (*) (List_1_t402 *, const MethodInfo*))List_1_TrimExcess_m11324_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11326_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11326(__this, method) (( int32_t (*) (List_1_t402 *, const MethodInfo*))List_1_get_Capacity_m11326_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11328_gshared (List_1_t402 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11328(__this, ___value, method) (( void (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11328_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11330_gshared (List_1_t402 * __this, const MethodInfo* method);
#define List_1_get_Count_m11330(__this, method) (( int32_t (*) (List_1_t402 *, const MethodInfo*))List_1_get_Count_m11330_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11332_gshared (List_1_t402 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11332(__this, ___index, method) (( Object_t * (*) (List_1_t402 *, int32_t, const MethodInfo*))List_1_get_Item_m11332_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11334_gshared (List_1_t402 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11334(__this, ___index, ___value, method) (( void (*) (List_1_t402 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11334_gshared)(__this, ___index, ___value, method)
