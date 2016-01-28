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
struct List_1_t2424;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2655;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2718;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2719;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t2427;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2425;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2432;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2435;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m18143_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1__ctor_m18143(__this, method) (( void (*) (List_1_t2424 *, const MethodInfo*))List_1__ctor_m18143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18145_gshared (List_1_t2424 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18145(__this, ___capacity, method) (( void (*) (List_1_t2424 *, int32_t, const MethodInfo*))List_1__ctor_m18145_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m18147_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18147(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18147_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18149_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18149(__this, method) (( Object_t* (*) (List_1_t2424 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18151_gshared (List_1_t2424 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18151(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2424 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18153_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18153(__this, method) (( Object_t * (*) (List_1_t2424 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18155_gshared (List_1_t2424 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18155(__this, ___item, method) (( int32_t (*) (List_1_t2424 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18155_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18157_gshared (List_1_t2424 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18157(__this, ___item, method) (( bool (*) (List_1_t2424 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18157_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18159_gshared (List_1_t2424 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18159(__this, ___item, method) (( int32_t (*) (List_1_t2424 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18161_gshared (List_1_t2424 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18161(__this, ___index, ___item, method) (( void (*) (List_1_t2424 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18161_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18163_gshared (List_1_t2424 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18163(__this, ___item, method) (( void (*) (List_1_t2424 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18163_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18165_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18165(__this, method) (( bool (*) (List_1_t2424 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18167_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18167(__this, method) (( bool (*) (List_1_t2424 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18167_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18169_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18169(__this, method) (( Object_t * (*) (List_1_t2424 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18171_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18171(__this, method) (( bool (*) (List_1_t2424 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18173_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18173(__this, method) (( bool (*) (List_1_t2424 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18173_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18175_gshared (List_1_t2424 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18175(__this, ___index, method) (( Object_t * (*) (List_1_t2424 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18175_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18177_gshared (List_1_t2424 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18177(__this, ___index, ___value, method) (( void (*) (List_1_t2424 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18177_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m18179_gshared (List_1_t2424 * __this, KeyValuePair_2_t1950  ___item, const MethodInfo* method);
#define List_1_Add_m18179(__this, ___item, method) (( void (*) (List_1_t2424 *, KeyValuePair_2_t1950 , const MethodInfo*))List_1_Add_m18179_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18181_gshared (List_1_t2424 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18181(__this, ___newCount, method) (( void (*) (List_1_t2424 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18181_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m18183_gshared (List_1_t2424 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m18183(__this, ___idx, ___count, method) (( void (*) (List_1_t2424 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m18183_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18185_gshared (List_1_t2424 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18185(__this, ___collection, method) (( void (*) (List_1_t2424 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18185_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18187_gshared (List_1_t2424 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18187(__this, ___enumerable, method) (( void (*) (List_1_t2424 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18187_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18189_gshared (List_1_t2424 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18189(__this, ___collection, method) (( void (*) (List_1_t2424 *, Object_t*, const MethodInfo*))List_1_AddRange_m18189_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2427 * List_1_AsReadOnly_m18191_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18191(__this, method) (( ReadOnlyCollection_1_t2427 * (*) (List_1_t2424 *, const MethodInfo*))List_1_AsReadOnly_m18191_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m18193_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_Clear_m18193(__this, method) (( void (*) (List_1_t2424 *, const MethodInfo*))List_1_Clear_m18193_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m18195_gshared (List_1_t2424 * __this, KeyValuePair_2_t1950  ___item, const MethodInfo* method);
#define List_1_Contains_m18195(__this, ___item, method) (( bool (*) (List_1_t2424 *, KeyValuePair_2_t1950 , const MethodInfo*))List_1_Contains_m18195_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18197_gshared (List_1_t2424 * __this, KeyValuePair_2U5BU5D_t2425* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18197(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2424 *, KeyValuePair_2U5BU5D_t2425*, int32_t, const MethodInfo*))List_1_CopyTo_m18197_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1950  List_1_Find_m18199_gshared (List_1_t2424 * __this, Predicate_1_t2432 * ___match, const MethodInfo* method);
#define List_1_Find_m18199(__this, ___match, method) (( KeyValuePair_2_t1950  (*) (List_1_t2424 *, Predicate_1_t2432 *, const MethodInfo*))List_1_Find_m18199_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18201_gshared (Object_t * __this /* static, unused */, Predicate_1_t2432 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18201(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2432 *, const MethodInfo*))List_1_CheckMatch_m18201_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18203_gshared (List_1_t2424 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2432 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18203(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2424 *, int32_t, int32_t, Predicate_1_t2432 *, const MethodInfo*))List_1_GetIndex_m18203_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2426  List_1_GetEnumerator_m18205_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18205(__this, method) (( Enumerator_t2426  (*) (List_1_t2424 *, const MethodInfo*))List_1_GetEnumerator_m18205_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18207_gshared (List_1_t2424 * __this, KeyValuePair_2_t1950  ___item, const MethodInfo* method);
#define List_1_IndexOf_m18207(__this, ___item, method) (( int32_t (*) (List_1_t2424 *, KeyValuePair_2_t1950 , const MethodInfo*))List_1_IndexOf_m18207_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18209_gshared (List_1_t2424 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18209(__this, ___start, ___delta, method) (( void (*) (List_1_t2424 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18209_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18211_gshared (List_1_t2424 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18211(__this, ___index, method) (( void (*) (List_1_t2424 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18211_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18213_gshared (List_1_t2424 * __this, int32_t ___index, KeyValuePair_2_t1950  ___item, const MethodInfo* method);
#define List_1_Insert_m18213(__this, ___index, ___item, method) (( void (*) (List_1_t2424 *, int32_t, KeyValuePair_2_t1950 , const MethodInfo*))List_1_Insert_m18213_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18215_gshared (List_1_t2424 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18215(__this, ___collection, method) (( void (*) (List_1_t2424 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18215_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m18217_gshared (List_1_t2424 * __this, KeyValuePair_2_t1950  ___item, const MethodInfo* method);
#define List_1_Remove_m18217(__this, ___item, method) (( bool (*) (List_1_t2424 *, KeyValuePair_2_t1950 , const MethodInfo*))List_1_Remove_m18217_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18219_gshared (List_1_t2424 * __this, Predicate_1_t2432 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18219(__this, ___match, method) (( int32_t (*) (List_1_t2424 *, Predicate_1_t2432 *, const MethodInfo*))List_1_RemoveAll_m18219_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18221_gshared (List_1_t2424 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18221(__this, ___index, method) (( void (*) (List_1_t2424 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18221_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m18223_gshared (List_1_t2424 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m18223(__this, ___index, ___count, method) (( void (*) (List_1_t2424 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m18223_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m18225_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_Reverse_m18225(__this, method) (( void (*) (List_1_t2424 *, const MethodInfo*))List_1_Reverse_m18225_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m18227_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_Sort_m18227(__this, method) (( void (*) (List_1_t2424 *, const MethodInfo*))List_1_Sort_m18227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18229_gshared (List_1_t2424 * __this, Comparison_1_t2435 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18229(__this, ___comparison, method) (( void (*) (List_1_t2424 *, Comparison_1_t2435 *, const MethodInfo*))List_1_Sort_m18229_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2425* List_1_ToArray_m18231_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_ToArray_m18231(__this, method) (( KeyValuePair_2U5BU5D_t2425* (*) (List_1_t2424 *, const MethodInfo*))List_1_ToArray_m18231_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m18233_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18233(__this, method) (( void (*) (List_1_t2424 *, const MethodInfo*))List_1_TrimExcess_m18233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18235_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18235(__this, method) (( int32_t (*) (List_1_t2424 *, const MethodInfo*))List_1_get_Capacity_m18235_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18237_gshared (List_1_t2424 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18237(__this, ___value, method) (( void (*) (List_1_t2424 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18237_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m18239_gshared (List_1_t2424 * __this, const MethodInfo* method);
#define List_1_get_Count_m18239(__this, method) (( int32_t (*) (List_1_t2424 *, const MethodInfo*))List_1_get_Count_m18239_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1950  List_1_get_Item_m18241_gshared (List_1_t2424 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18241(__this, ___index, method) (( KeyValuePair_2_t1950  (*) (List_1_t2424 *, int32_t, const MethodInfo*))List_1_get_Item_m18241_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18243_gshared (List_1_t2424 * __this, int32_t ___index, KeyValuePair_2_t1950  ___value, const MethodInfo* method);
#define List_1_set_Item_m18243(__this, ___index, ___value, method) (( void (*) (List_1_t2424 *, int32_t, KeyValuePair_2_t1950 , const MethodInfo*))List_1_set_Item_m18243_gshared)(__this, ___index, ___value, method)
