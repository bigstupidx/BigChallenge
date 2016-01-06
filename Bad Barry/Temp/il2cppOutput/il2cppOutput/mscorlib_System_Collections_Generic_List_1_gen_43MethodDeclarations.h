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
struct List_1_t2332;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2560;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2621;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2622;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t2335;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2333;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2340;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2343;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m17257_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1__ctor_m17257(__this, method) (( void (*) (List_1_t2332 *, const MethodInfo*))List_1__ctor_m17257_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17259_gshared (List_1_t2332 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17259(__this, ___capacity, method) (( void (*) (List_1_t2332 *, int32_t, const MethodInfo*))List_1__ctor_m17259_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m17261_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17261(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17261_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17263_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17263(__this, method) (( Object_t* (*) (List_1_t2332 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17265_gshared (List_1_t2332 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17265(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2332 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17265_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17267_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17267(__this, method) (( Object_t * (*) (List_1_t2332 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17267_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17269_gshared (List_1_t2332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17269(__this, ___item, method) (( int32_t (*) (List_1_t2332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17269_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17271_gshared (List_1_t2332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17271(__this, ___item, method) (( bool (*) (List_1_t2332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17271_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17273_gshared (List_1_t2332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17273(__this, ___item, method) (( int32_t (*) (List_1_t2332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17275_gshared (List_1_t2332 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17275(__this, ___index, ___item, method) (( void (*) (List_1_t2332 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17275_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17277_gshared (List_1_t2332 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17277(__this, ___item, method) (( void (*) (List_1_t2332 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17277_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17279_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17279(__this, method) (( bool (*) (List_1_t2332 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17279_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17281_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17281(__this, method) (( bool (*) (List_1_t2332 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17281_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17283_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17283(__this, method) (( Object_t * (*) (List_1_t2332 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17283_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17285_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17285(__this, method) (( bool (*) (List_1_t2332 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17285_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17287_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17287(__this, method) (( bool (*) (List_1_t2332 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17287_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17289_gshared (List_1_t2332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17289(__this, ___index, method) (( Object_t * (*) (List_1_t2332 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17289_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17291_gshared (List_1_t2332 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17291(__this, ___index, ___value, method) (( void (*) (List_1_t2332 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17291_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m17293_gshared (List_1_t2332 * __this, KeyValuePair_2_t1860  ___item, const MethodInfo* method);
#define List_1_Add_m17293(__this, ___item, method) (( void (*) (List_1_t2332 *, KeyValuePair_2_t1860 , const MethodInfo*))List_1_Add_m17293_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17295_gshared (List_1_t2332 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17295(__this, ___newCount, method) (( void (*) (List_1_t2332 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17297_gshared (List_1_t2332 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17297(__this, ___collection, method) (( void (*) (List_1_t2332 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17299_gshared (List_1_t2332 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17299(__this, ___enumerable, method) (( void (*) (List_1_t2332 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17299_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17301_gshared (List_1_t2332 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17301(__this, ___collection, method) (( void (*) (List_1_t2332 *, Object_t*, const MethodInfo*))List_1_AddRange_m17301_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2335 * List_1_AsReadOnly_m17303_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17303(__this, method) (( ReadOnlyCollection_1_t2335 * (*) (List_1_t2332 *, const MethodInfo*))List_1_AsReadOnly_m17303_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m17305_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_Clear_m17305(__this, method) (( void (*) (List_1_t2332 *, const MethodInfo*))List_1_Clear_m17305_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m17307_gshared (List_1_t2332 * __this, KeyValuePair_2_t1860  ___item, const MethodInfo* method);
#define List_1_Contains_m17307(__this, ___item, method) (( bool (*) (List_1_t2332 *, KeyValuePair_2_t1860 , const MethodInfo*))List_1_Contains_m17307_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17309_gshared (List_1_t2332 * __this, KeyValuePair_2U5BU5D_t2333* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17309(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2332 *, KeyValuePair_2U5BU5D_t2333*, int32_t, const MethodInfo*))List_1_CopyTo_m17309_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1860  List_1_Find_m17311_gshared (List_1_t2332 * __this, Predicate_1_t2340 * ___match, const MethodInfo* method);
#define List_1_Find_m17311(__this, ___match, method) (( KeyValuePair_2_t1860  (*) (List_1_t2332 *, Predicate_1_t2340 *, const MethodInfo*))List_1_Find_m17311_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17313_gshared (Object_t * __this /* static, unused */, Predicate_1_t2340 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17313(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2340 *, const MethodInfo*))List_1_CheckMatch_m17313_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17315_gshared (List_1_t2332 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2340 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17315(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2332 *, int32_t, int32_t, Predicate_1_t2340 *, const MethodInfo*))List_1_GetIndex_m17315_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2334  List_1_GetEnumerator_m17317_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17317(__this, method) (( Enumerator_t2334  (*) (List_1_t2332 *, const MethodInfo*))List_1_GetEnumerator_m17317_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17319_gshared (List_1_t2332 * __this, KeyValuePair_2_t1860  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17319(__this, ___item, method) (( int32_t (*) (List_1_t2332 *, KeyValuePair_2_t1860 , const MethodInfo*))List_1_IndexOf_m17319_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17321_gshared (List_1_t2332 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17321(__this, ___start, ___delta, method) (( void (*) (List_1_t2332 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17321_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17323_gshared (List_1_t2332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17323(__this, ___index, method) (( void (*) (List_1_t2332 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17323_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17325_gshared (List_1_t2332 * __this, int32_t ___index, KeyValuePair_2_t1860  ___item, const MethodInfo* method);
#define List_1_Insert_m17325(__this, ___index, ___item, method) (( void (*) (List_1_t2332 *, int32_t, KeyValuePair_2_t1860 , const MethodInfo*))List_1_Insert_m17325_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17327_gshared (List_1_t2332 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17327(__this, ___collection, method) (( void (*) (List_1_t2332 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17327_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m17329_gshared (List_1_t2332 * __this, KeyValuePair_2_t1860  ___item, const MethodInfo* method);
#define List_1_Remove_m17329(__this, ___item, method) (( bool (*) (List_1_t2332 *, KeyValuePair_2_t1860 , const MethodInfo*))List_1_Remove_m17329_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17331_gshared (List_1_t2332 * __this, Predicate_1_t2340 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17331(__this, ___match, method) (( int32_t (*) (List_1_t2332 *, Predicate_1_t2340 *, const MethodInfo*))List_1_RemoveAll_m17331_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17333_gshared (List_1_t2332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17333(__this, ___index, method) (( void (*) (List_1_t2332 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17333_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m17335_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_Reverse_m17335(__this, method) (( void (*) (List_1_t2332 *, const MethodInfo*))List_1_Reverse_m17335_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m17337_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_Sort_m17337(__this, method) (( void (*) (List_1_t2332 *, const MethodInfo*))List_1_Sort_m17337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17339_gshared (List_1_t2332 * __this, Comparison_1_t2343 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17339(__this, ___comparison, method) (( void (*) (List_1_t2332 *, Comparison_1_t2343 *, const MethodInfo*))List_1_Sort_m17339_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2333* List_1_ToArray_m17341_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_ToArray_m17341(__this, method) (( KeyValuePair_2U5BU5D_t2333* (*) (List_1_t2332 *, const MethodInfo*))List_1_ToArray_m17341_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m17343_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17343(__this, method) (( void (*) (List_1_t2332 *, const MethodInfo*))List_1_TrimExcess_m17343_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17345_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17345(__this, method) (( int32_t (*) (List_1_t2332 *, const MethodInfo*))List_1_get_Capacity_m17345_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17347_gshared (List_1_t2332 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17347(__this, ___value, method) (( void (*) (List_1_t2332 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17347_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m17349_gshared (List_1_t2332 * __this, const MethodInfo* method);
#define List_1_get_Count_m17349(__this, method) (( int32_t (*) (List_1_t2332 *, const MethodInfo*))List_1_get_Count_m17349_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1860  List_1_get_Item_m17351_gshared (List_1_t2332 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17351(__this, ___index, method) (( KeyValuePair_2_t1860  (*) (List_1_t2332 *, int32_t, const MethodInfo*))List_1_get_Item_m17351_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17353_gshared (List_1_t2332 * __this, int32_t ___index, KeyValuePair_2_t1860  ___value, const MethodInfo* method);
#define List_1_set_Item_m17353(__this, ___index, ___value, method) (( void (*) (List_1_t2332 *, int32_t, KeyValuePair_2_t1860 , const MethodInfo*))List_1_set_Item_m17353_gshared)(__this, ___index, ___value, method)
