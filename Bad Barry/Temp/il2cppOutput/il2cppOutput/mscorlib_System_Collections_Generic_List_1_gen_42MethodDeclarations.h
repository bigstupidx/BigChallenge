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
extern "C" void List_1__ctor_m17060_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1__ctor_m17060(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1__ctor_m17060_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17062_gshared (List_1_t2303 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17062(__this, ___capacity, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1__ctor_m17062_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m17064_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17064(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17064_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17066_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17066(__this, method) (( Object_t* (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17066_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17068_gshared (List_1_t2303 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17068(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2303 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17068_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17070_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17070(__this, method) (( Object_t * (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17070_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17072_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17072(__this, ___item, method) (( int32_t (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17072_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17074_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17074(__this, ___item, method) (( bool (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17074_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17076_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17076(__this, ___item, method) (( int32_t (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17076_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17078_gshared (List_1_t2303 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17078(__this, ___index, ___item, method) (( void (*) (List_1_t2303 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17078_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17080_gshared (List_1_t2303 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17080(__this, ___item, method) (( void (*) (List_1_t2303 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17080_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17082_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17082(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17082_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17084_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17084(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17084_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17086_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17086(__this, method) (( Object_t * (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17088_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17088(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17088_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17090_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17090(__this, method) (( bool (*) (List_1_t2303 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17090_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17092_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17092(__this, ___index, method) (( Object_t * (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17092_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17094_gshared (List_1_t2303 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17094(__this, ___index, ___value, method) (( void (*) (List_1_t2303 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17094_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m17096_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Add_m17096(__this, ___item, method) (( void (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Add_m17096_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17098_gshared (List_1_t2303 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17098(__this, ___newCount, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17098_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17100_gshared (List_1_t2303 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17100(__this, ___collection, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17100_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17102_gshared (List_1_t2303 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17102(__this, ___enumerable, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17102_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17104_gshared (List_1_t2303 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17104(__this, ___collection, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_AddRange_m17104_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2306 * List_1_AsReadOnly_m17106_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17106(__this, method) (( ReadOnlyCollection_1_t2306 * (*) (List_1_t2303 *, const MethodInfo*))List_1_AsReadOnly_m17106_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m17108_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_Clear_m17108(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_Clear_m17108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m17110_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Contains_m17110(__this, ___item, method) (( bool (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Contains_m17110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17112_gshared (List_1_t2303 * __this, KeyValuePair_2U5BU5D_t2304* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17112(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2303 *, KeyValuePair_2U5BU5D_t2304*, int32_t, const MethodInfo*))List_1_CopyTo_m17112_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1841  List_1_Find_m17114_gshared (List_1_t2303 * __this, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_Find_m17114(__this, ___match, method) (( KeyValuePair_2_t1841  (*) (List_1_t2303 *, Predicate_1_t2311 *, const MethodInfo*))List_1_Find_m17114_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17116_gshared (Object_t * __this /* static, unused */, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17116(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2311 *, const MethodInfo*))List_1_CheckMatch_m17116_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17118_gshared (List_1_t2303 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17118(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2303 *, int32_t, int32_t, Predicate_1_t2311 *, const MethodInfo*))List_1_GetIndex_m17118_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2305  List_1_GetEnumerator_m17120_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17120(__this, method) (( Enumerator_t2305  (*) (List_1_t2303 *, const MethodInfo*))List_1_GetEnumerator_m17120_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17122_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17122(__this, ___item, method) (( int32_t (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_IndexOf_m17122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17124_gshared (List_1_t2303 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17124(__this, ___start, ___delta, method) (( void (*) (List_1_t2303 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17124_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17126_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17126(__this, ___index, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17126_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17128_gshared (List_1_t2303 * __this, int32_t ___index, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Insert_m17128(__this, ___index, ___item, method) (( void (*) (List_1_t2303 *, int32_t, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Insert_m17128_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17130_gshared (List_1_t2303 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17130(__this, ___collection, method) (( void (*) (List_1_t2303 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17130_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m17132_gshared (List_1_t2303 * __this, KeyValuePair_2_t1841  ___item, const MethodInfo* method);
#define List_1_Remove_m17132(__this, ___item, method) (( bool (*) (List_1_t2303 *, KeyValuePair_2_t1841 , const MethodInfo*))List_1_Remove_m17132_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17134_gshared (List_1_t2303 * __this, Predicate_1_t2311 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17134(__this, ___match, method) (( int32_t (*) (List_1_t2303 *, Predicate_1_t2311 *, const MethodInfo*))List_1_RemoveAll_m17134_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17136_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17136(__this, ___index, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17136_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m17138_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_Reverse_m17138(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_Reverse_m17138_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m17140_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_Sort_m17140(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_Sort_m17140_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17142_gshared (List_1_t2303 * __this, Comparison_1_t2314 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17142(__this, ___comparison, method) (( void (*) (List_1_t2303 *, Comparison_1_t2314 *, const MethodInfo*))List_1_Sort_m17142_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2304* List_1_ToArray_m17144_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_ToArray_m17144(__this, method) (( KeyValuePair_2U5BU5D_t2304* (*) (List_1_t2303 *, const MethodInfo*))List_1_ToArray_m17144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m17146_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17146(__this, method) (( void (*) (List_1_t2303 *, const MethodInfo*))List_1_TrimExcess_m17146_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17148_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17148(__this, method) (( int32_t (*) (List_1_t2303 *, const MethodInfo*))List_1_get_Capacity_m17148_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17150_gshared (List_1_t2303 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17150(__this, ___value, method) (( void (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17150_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m17152_gshared (List_1_t2303 * __this, const MethodInfo* method);
#define List_1_get_Count_m17152(__this, method) (( int32_t (*) (List_1_t2303 *, const MethodInfo*))List_1_get_Count_m17152_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1841  List_1_get_Item_m17154_gshared (List_1_t2303 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17154(__this, ___index, method) (( KeyValuePair_2_t1841  (*) (List_1_t2303 *, int32_t, const MethodInfo*))List_1_get_Item_m17154_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17156_gshared (List_1_t2303 * __this, int32_t ___index, KeyValuePair_2_t1841  ___value, const MethodInfo* method);
#define List_1_set_Item_m17156(__this, ___index, ___value, method) (( void (*) (List_1_t2303 *, int32_t, KeyValuePair_2_t1841 , const MethodInfo*))List_1_set_Item_m17156_gshared)(__this, ___index, ___value, method)
