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
struct List_1_t2392;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2623;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2684;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2685;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t2395;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2393;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2400;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2403;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m17879_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1__ctor_m17879(__this, method) (( void (*) (List_1_t2392 *, const MethodInfo*))List_1__ctor_m17879_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17881_gshared (List_1_t2392 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17881(__this, ___capacity, method) (( void (*) (List_1_t2392 *, int32_t, const MethodInfo*))List_1__ctor_m17881_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m17883_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m17883(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m17883_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17885_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17885(__this, method) (( Object_t* (*) (List_1_t2392 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17885_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17887_gshared (List_1_t2392 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17887(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2392 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17887_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17889_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17889(__this, method) (( Object_t * (*) (List_1_t2392 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17889_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17891_gshared (List_1_t2392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17891(__this, ___item, method) (( int32_t (*) (List_1_t2392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17891_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17893_gshared (List_1_t2392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17893(__this, ___item, method) (( bool (*) (List_1_t2392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17893_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17895_gshared (List_1_t2392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17895(__this, ___item, method) (( int32_t (*) (List_1_t2392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17895_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17897_gshared (List_1_t2392 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17897(__this, ___index, ___item, method) (( void (*) (List_1_t2392 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17897_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17899_gshared (List_1_t2392 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17899(__this, ___item, method) (( void (*) (List_1_t2392 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17899_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17901_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17901(__this, method) (( bool (*) (List_1_t2392 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17901_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17903_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17903(__this, method) (( bool (*) (List_1_t2392 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17903_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17905_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17905(__this, method) (( Object_t * (*) (List_1_t2392 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17905_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17907_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17907(__this, method) (( bool (*) (List_1_t2392 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17907_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17909_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17909(__this, method) (( bool (*) (List_1_t2392 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17909_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17911_gshared (List_1_t2392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17911(__this, ___index, method) (( Object_t * (*) (List_1_t2392 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17911_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17913_gshared (List_1_t2392 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17913(__this, ___index, ___value, method) (( void (*) (List_1_t2392 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17913_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m17915_gshared (List_1_t2392 * __this, KeyValuePair_2_t1922  ___item, const MethodInfo* method);
#define List_1_Add_m17915(__this, ___item, method) (( void (*) (List_1_t2392 *, KeyValuePair_2_t1922 , const MethodInfo*))List_1_Add_m17915_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m17917_gshared (List_1_t2392 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m17917(__this, ___newCount, method) (( void (*) (List_1_t2392 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m17917_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m17919_gshared (List_1_t2392 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m17919(__this, ___idx, ___count, method) (( void (*) (List_1_t2392 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m17919_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m17921_gshared (List_1_t2392 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m17921(__this, ___collection, method) (( void (*) (List_1_t2392 *, Object_t*, const MethodInfo*))List_1_AddCollection_m17921_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m17923_gshared (List_1_t2392 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m17923(__this, ___enumerable, method) (( void (*) (List_1_t2392 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m17923_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m17925_gshared (List_1_t2392 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m17925(__this, ___collection, method) (( void (*) (List_1_t2392 *, Object_t*, const MethodInfo*))List_1_AddRange_m17925_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2395 * List_1_AsReadOnly_m17927_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m17927(__this, method) (( ReadOnlyCollection_1_t2395 * (*) (List_1_t2392 *, const MethodInfo*))List_1_AsReadOnly_m17927_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m17929_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_Clear_m17929(__this, method) (( void (*) (List_1_t2392 *, const MethodInfo*))List_1_Clear_m17929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m17931_gshared (List_1_t2392 * __this, KeyValuePair_2_t1922  ___item, const MethodInfo* method);
#define List_1_Contains_m17931(__this, ___item, method) (( bool (*) (List_1_t2392 *, KeyValuePair_2_t1922 , const MethodInfo*))List_1_Contains_m17931_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17933_gshared (List_1_t2392 * __this, KeyValuePair_2U5BU5D_t2393* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17933(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2392 *, KeyValuePair_2U5BU5D_t2393*, int32_t, const MethodInfo*))List_1_CopyTo_m17933_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1922  List_1_Find_m17935_gshared (List_1_t2392 * __this, Predicate_1_t2400 * ___match, const MethodInfo* method);
#define List_1_Find_m17935(__this, ___match, method) (( KeyValuePair_2_t1922  (*) (List_1_t2392 *, Predicate_1_t2400 *, const MethodInfo*))List_1_Find_m17935_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m17937_gshared (Object_t * __this /* static, unused */, Predicate_1_t2400 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m17937(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2400 *, const MethodInfo*))List_1_CheckMatch_m17937_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m17939_gshared (List_1_t2392 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2400 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m17939(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2392 *, int32_t, int32_t, Predicate_1_t2400 *, const MethodInfo*))List_1_GetIndex_m17939_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2394  List_1_GetEnumerator_m17941_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m17941(__this, method) (( Enumerator_t2394  (*) (List_1_t2392 *, const MethodInfo*))List_1_GetEnumerator_m17941_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17943_gshared (List_1_t2392 * __this, KeyValuePair_2_t1922  ___item, const MethodInfo* method);
#define List_1_IndexOf_m17943(__this, ___item, method) (( int32_t (*) (List_1_t2392 *, KeyValuePair_2_t1922 , const MethodInfo*))List_1_IndexOf_m17943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m17945_gshared (List_1_t2392 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m17945(__this, ___start, ___delta, method) (( void (*) (List_1_t2392 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m17945_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m17947_gshared (List_1_t2392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m17947(__this, ___index, method) (( void (*) (List_1_t2392 *, int32_t, const MethodInfo*))List_1_CheckIndex_m17947_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17949_gshared (List_1_t2392 * __this, int32_t ___index, KeyValuePair_2_t1922  ___item, const MethodInfo* method);
#define List_1_Insert_m17949(__this, ___index, ___item, method) (( void (*) (List_1_t2392 *, int32_t, KeyValuePair_2_t1922 , const MethodInfo*))List_1_Insert_m17949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m17951_gshared (List_1_t2392 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m17951(__this, ___collection, method) (( void (*) (List_1_t2392 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m17951_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m17953_gshared (List_1_t2392 * __this, KeyValuePair_2_t1922  ___item, const MethodInfo* method);
#define List_1_Remove_m17953(__this, ___item, method) (( bool (*) (List_1_t2392 *, KeyValuePair_2_t1922 , const MethodInfo*))List_1_Remove_m17953_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m17955_gshared (List_1_t2392 * __this, Predicate_1_t2400 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m17955(__this, ___match, method) (( int32_t (*) (List_1_t2392 *, Predicate_1_t2400 *, const MethodInfo*))List_1_RemoveAll_m17955_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17957_gshared (List_1_t2392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17957(__this, ___index, method) (( void (*) (List_1_t2392 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17957_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m17959_gshared (List_1_t2392 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m17959(__this, ___index, ___count, method) (( void (*) (List_1_t2392 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m17959_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m17961_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_Reverse_m17961(__this, method) (( void (*) (List_1_t2392 *, const MethodInfo*))List_1_Reverse_m17961_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m17963_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_Sort_m17963(__this, method) (( void (*) (List_1_t2392 *, const MethodInfo*))List_1_Sort_m17963_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m17965_gshared (List_1_t2392 * __this, Comparison_1_t2403 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m17965(__this, ___comparison, method) (( void (*) (List_1_t2392 *, Comparison_1_t2403 *, const MethodInfo*))List_1_Sort_m17965_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2393* List_1_ToArray_m17967_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_ToArray_m17967(__this, method) (( KeyValuePair_2U5BU5D_t2393* (*) (List_1_t2392 *, const MethodInfo*))List_1_ToArray_m17967_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m17969_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m17969(__this, method) (( void (*) (List_1_t2392 *, const MethodInfo*))List_1_TrimExcess_m17969_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m17971_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m17971(__this, method) (( int32_t (*) (List_1_t2392 *, const MethodInfo*))List_1_get_Capacity_m17971_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m17973_gshared (List_1_t2392 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m17973(__this, ___value, method) (( void (*) (List_1_t2392 *, int32_t, const MethodInfo*))List_1_set_Capacity_m17973_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m17975_gshared (List_1_t2392 * __this, const MethodInfo* method);
#define List_1_get_Count_m17975(__this, method) (( int32_t (*) (List_1_t2392 *, const MethodInfo*))List_1_get_Count_m17975_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1922  List_1_get_Item_m17977_gshared (List_1_t2392 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17977(__this, ___index, method) (( KeyValuePair_2_t1922  (*) (List_1_t2392 *, int32_t, const MethodInfo*))List_1_get_Item_m17977_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17979_gshared (List_1_t2392 * __this, int32_t ___index, KeyValuePair_2_t1922  ___value, const MethodInfo* method);
#define List_1_set_Item_m17979(__this, ___index, ___value, method) (( void (*) (List_1_t2392 *, int32_t, KeyValuePair_2_t1922 , const MethodInfo*))List_1_set_Item_m17979_gshared)(__this, ___index, ___value, method)
