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
struct List_1_t1_1169;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_1574;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t1_1585;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1_1586;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t1_1172;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1170;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t1_1177;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1_1180;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m1_7420_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1__ctor_m1_7420(__this, method) (( void (*) (List_1_t1_1169 *, const MethodInfo*))List_1__ctor_m1_7420_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_7422_gshared (List_1_t1_1169 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_7422(__this, ___capacity, method) (( void (*) (List_1_t1_1169 *, int32_t, const MethodInfo*))List_1__ctor_m1_7422_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m1_7424_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_7424(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_7424_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_7426_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_7426(__this, method) (( Object_t* (*) (List_1_t1_1169 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_7426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_7428_gshared (List_1_t1_1169 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_7428(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1169 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_7428_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_7430_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_7430(__this, method) (( Object_t * (*) (List_1_t1_1169 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_7430_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_7432_gshared (List_1_t1_1169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_7432(__this, ___item, method) (( int32_t (*) (List_1_t1_1169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_7432_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_7434_gshared (List_1_t1_1169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_7434(__this, ___item, method) (( bool (*) (List_1_t1_1169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_7434_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_7436_gshared (List_1_t1_1169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_7436(__this, ___item, method) (( int32_t (*) (List_1_t1_1169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_7436_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_7438_gshared (List_1_t1_1169 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_7438(__this, ___index, ___item, method) (( void (*) (List_1_t1_1169 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_7438_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_7440_gshared (List_1_t1_1169 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_7440(__this, ___item, method) (( void (*) (List_1_t1_1169 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_7440_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_7442_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_7442(__this, method) (( bool (*) (List_1_t1_1169 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_7442_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_7444_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_7444(__this, method) (( bool (*) (List_1_t1_1169 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_7444_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_7446_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_7446(__this, method) (( Object_t * (*) (List_1_t1_1169 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_7446_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_7448_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_7448(__this, method) (( bool (*) (List_1_t1_1169 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_7448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_7450_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_7450(__this, method) (( bool (*) (List_1_t1_1169 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_7450_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_7452_gshared (List_1_t1_1169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_7452(__this, ___index, method) (( Object_t * (*) (List_1_t1_1169 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_7452_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_7454_gshared (List_1_t1_1169 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_7454(__this, ___index, ___value, method) (( void (*) (List_1_t1_1169 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_7454_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m1_7456_gshared (List_1_t1_1169 * __this, KeyValuePair_2_t1_1050  ___item, const MethodInfo* method);
#define List_1_Add_m1_7456(__this, ___item, method) (( void (*) (List_1_t1_1169 *, KeyValuePair_2_t1_1050 , const MethodInfo*))List_1_Add_m1_7456_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_7458_gshared (List_1_t1_1169 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_7458(__this, ___newCount, method) (( void (*) (List_1_t1_1169 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_7458_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_7460_gshared (List_1_t1_1169 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_7460(__this, ___collection, method) (( void (*) (List_1_t1_1169 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_7460_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_7462_gshared (List_1_t1_1169 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_7462(__this, ___enumerable, method) (( void (*) (List_1_t1_1169 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_7462_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_7464_gshared (List_1_t1_1169 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_7464(__this, ___collection, method) (( void (*) (List_1_t1_1169 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_7464_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1172 * List_1_AsReadOnly_m1_7466_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_7466(__this, method) (( ReadOnlyCollection_1_t1_1172 * (*) (List_1_t1_1169 *, const MethodInfo*))List_1_AsReadOnly_m1_7466_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m1_7468_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_Clear_m1_7468(__this, method) (( void (*) (List_1_t1_1169 *, const MethodInfo*))List_1_Clear_m1_7468_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m1_7470_gshared (List_1_t1_1169 * __this, KeyValuePair_2_t1_1050  ___item, const MethodInfo* method);
#define List_1_Contains_m1_7470(__this, ___item, method) (( bool (*) (List_1_t1_1169 *, KeyValuePair_2_t1_1050 , const MethodInfo*))List_1_Contains_m1_7470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_7472_gshared (List_1_t1_1169 * __this, KeyValuePair_2U5BU5D_t1_1170* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_7472(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1169 *, KeyValuePair_2U5BU5D_t1_1170*, int32_t, const MethodInfo*))List_1_CopyTo_m1_7472_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1_1050  List_1_Find_m1_7474_gshared (List_1_t1_1169 * __this, Predicate_1_t1_1177 * ___match, const MethodInfo* method);
#define List_1_Find_m1_7474(__this, ___match, method) (( KeyValuePair_2_t1_1050  (*) (List_1_t1_1169 *, Predicate_1_t1_1177 *, const MethodInfo*))List_1_Find_m1_7474_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_7476_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1177 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_7476(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1177 *, const MethodInfo*))List_1_CheckMatch_m1_7476_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_7478_gshared (List_1_t1_1169 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1177 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_7478(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_1169 *, int32_t, int32_t, Predicate_1_t1_1177 *, const MethodInfo*))List_1_GetIndex_m1_7478_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1_1171  List_1_GetEnumerator_m1_7480_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_7480(__this, method) (( Enumerator_t1_1171  (*) (List_1_t1_1169 *, const MethodInfo*))List_1_GetEnumerator_m1_7480_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_7482_gshared (List_1_t1_1169 * __this, KeyValuePair_2_t1_1050  ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_7482(__this, ___item, method) (( int32_t (*) (List_1_t1_1169 *, KeyValuePair_2_t1_1050 , const MethodInfo*))List_1_IndexOf_m1_7482_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_7484_gshared (List_1_t1_1169 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_7484(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1169 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_7484_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_7486_gshared (List_1_t1_1169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_7486(__this, ___index, method) (( void (*) (List_1_t1_1169 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_7486_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_7488_gshared (List_1_t1_1169 * __this, int32_t ___index, KeyValuePair_2_t1_1050  ___item, const MethodInfo* method);
#define List_1_Insert_m1_7488(__this, ___index, ___item, method) (( void (*) (List_1_t1_1169 *, int32_t, KeyValuePair_2_t1_1050 , const MethodInfo*))List_1_Insert_m1_7488_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_7490_gshared (List_1_t1_1169 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_7490(__this, ___collection, method) (( void (*) (List_1_t1_1169 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_7490_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m1_7492_gshared (List_1_t1_1169 * __this, KeyValuePair_2_t1_1050  ___item, const MethodInfo* method);
#define List_1_Remove_m1_7492(__this, ___item, method) (( bool (*) (List_1_t1_1169 *, KeyValuePair_2_t1_1050 , const MethodInfo*))List_1_Remove_m1_7492_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_7494_gshared (List_1_t1_1169 * __this, Predicate_1_t1_1177 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_7494(__this, ___match, method) (( int32_t (*) (List_1_t1_1169 *, Predicate_1_t1_1177 *, const MethodInfo*))List_1_RemoveAll_m1_7494_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_7496_gshared (List_1_t1_1169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_7496(__this, ___index, method) (( void (*) (List_1_t1_1169 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_7496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m1_7498_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_7498(__this, method) (( void (*) (List_1_t1_1169 *, const MethodInfo*))List_1_Reverse_m1_7498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m1_7500_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_Sort_m1_7500(__this, method) (( void (*) (List_1_t1_1169 *, const MethodInfo*))List_1_Sort_m1_7500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_7502_gshared (List_1_t1_1169 * __this, Comparison_1_t1_1180 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_7502(__this, ___comparison, method) (( void (*) (List_1_t1_1169 *, Comparison_1_t1_1180 *, const MethodInfo*))List_1_Sort_m1_7502_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t1_1170* List_1_ToArray_m1_7504_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_7504(__this, method) (( KeyValuePair_2U5BU5D_t1_1170* (*) (List_1_t1_1169 *, const MethodInfo*))List_1_ToArray_m1_7504_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_7506_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_7506(__this, method) (( void (*) (List_1_t1_1169 *, const MethodInfo*))List_1_TrimExcess_m1_7506_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_7508_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_7508(__this, method) (( int32_t (*) (List_1_t1_1169 *, const MethodInfo*))List_1_get_Capacity_m1_7508_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_7510_gshared (List_1_t1_1169 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_7510(__this, ___value, method) (( void (*) (List_1_t1_1169 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_7510_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m1_7512_gshared (List_1_t1_1169 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_7512(__this, method) (( int32_t (*) (List_1_t1_1169 *, const MethodInfo*))List_1_get_Count_m1_7512_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1_1050  List_1_get_Item_m1_7514_gshared (List_1_t1_1169 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_7514(__this, ___index, method) (( KeyValuePair_2_t1_1050  (*) (List_1_t1_1169 *, int32_t, const MethodInfo*))List_1_get_Item_m1_7514_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_7516_gshared (List_1_t1_1169 * __this, int32_t ___index, KeyValuePair_2_t1_1050  ___value, const MethodInfo* method);
#define List_1_set_Item_m1_7516(__this, ___index, ___value, method) (( void (*) (List_1_t1_1169 *, int32_t, KeyValuePair_2_t1_1050 , const MethodInfo*))List_1_set_Item_m1_7516_gshared)(__this, ___index, ___value, method)
