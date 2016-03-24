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
struct List_1_t2443;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2674;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2737;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2738;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t2446;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2444;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2451;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2454;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m18230_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1__ctor_m18230(__this, method) (( void (*) (List_1_t2443 *, const MethodInfo*))List_1__ctor_m18230_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18232_gshared (List_1_t2443 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18232(__this, ___capacity, method) (( void (*) (List_1_t2443 *, int32_t, const MethodInfo*))List_1__ctor_m18232_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m18234_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18234(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18234_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18236_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18236(__this, method) (( Object_t* (*) (List_1_t2443 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18238_gshared (List_1_t2443 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18238(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2443 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18238_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18240_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18240(__this, method) (( Object_t * (*) (List_1_t2443 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18240_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18242_gshared (List_1_t2443 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18242(__this, ___item, method) (( int32_t (*) (List_1_t2443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18242_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18244_gshared (List_1_t2443 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18244(__this, ___item, method) (( bool (*) (List_1_t2443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18244_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18246_gshared (List_1_t2443 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18246(__this, ___item, method) (( int32_t (*) (List_1_t2443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18246_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18248_gshared (List_1_t2443 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18248(__this, ___index, ___item, method) (( void (*) (List_1_t2443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18248_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18250_gshared (List_1_t2443 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18250(__this, ___item, method) (( void (*) (List_1_t2443 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18250_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18252_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18252(__this, method) (( bool (*) (List_1_t2443 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18252_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18254_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18254(__this, method) (( bool (*) (List_1_t2443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18254_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18256_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18256(__this, method) (( Object_t * (*) (List_1_t2443 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18258_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18258(__this, method) (( bool (*) (List_1_t2443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18258_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18260_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18260(__this, method) (( bool (*) (List_1_t2443 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18260_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18262_gshared (List_1_t2443 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18262(__this, ___index, method) (( Object_t * (*) (List_1_t2443 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18262_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18264_gshared (List_1_t2443 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18264(__this, ___index, ___value, method) (( void (*) (List_1_t2443 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18264_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m18266_gshared (List_1_t2443 * __this, KeyValuePair_2_t1968  ___item, const MethodInfo* method);
#define List_1_Add_m18266(__this, ___item, method) (( void (*) (List_1_t2443 *, KeyValuePair_2_t1968 , const MethodInfo*))List_1_Add_m18266_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18268_gshared (List_1_t2443 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18268(__this, ___newCount, method) (( void (*) (List_1_t2443 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18268_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m18270_gshared (List_1_t2443 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m18270(__this, ___idx, ___count, method) (( void (*) (List_1_t2443 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m18270_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18272_gshared (List_1_t2443 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18272(__this, ___collection, method) (( void (*) (List_1_t2443 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18272_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18274_gshared (List_1_t2443 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18274(__this, ___enumerable, method) (( void (*) (List_1_t2443 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18274_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18276_gshared (List_1_t2443 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18276(__this, ___collection, method) (( void (*) (List_1_t2443 *, Object_t*, const MethodInfo*))List_1_AddRange_m18276_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2446 * List_1_AsReadOnly_m18278_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18278(__this, method) (( ReadOnlyCollection_1_t2446 * (*) (List_1_t2443 *, const MethodInfo*))List_1_AsReadOnly_m18278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m18280_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_Clear_m18280(__this, method) (( void (*) (List_1_t2443 *, const MethodInfo*))List_1_Clear_m18280_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m18282_gshared (List_1_t2443 * __this, KeyValuePair_2_t1968  ___item, const MethodInfo* method);
#define List_1_Contains_m18282(__this, ___item, method) (( bool (*) (List_1_t2443 *, KeyValuePair_2_t1968 , const MethodInfo*))List_1_Contains_m18282_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18284_gshared (List_1_t2443 * __this, KeyValuePair_2U5BU5D_t2444* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18284(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2443 *, KeyValuePair_2U5BU5D_t2444*, int32_t, const MethodInfo*))List_1_CopyTo_m18284_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1968  List_1_Find_m18286_gshared (List_1_t2443 * __this, Predicate_1_t2451 * ___match, const MethodInfo* method);
#define List_1_Find_m18286(__this, ___match, method) (( KeyValuePair_2_t1968  (*) (List_1_t2443 *, Predicate_1_t2451 *, const MethodInfo*))List_1_Find_m18286_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18288_gshared (Object_t * __this /* static, unused */, Predicate_1_t2451 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18288(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2451 *, const MethodInfo*))List_1_CheckMatch_m18288_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18290_gshared (List_1_t2443 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2451 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18290(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2443 *, int32_t, int32_t, Predicate_1_t2451 *, const MethodInfo*))List_1_GetIndex_m18290_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2445  List_1_GetEnumerator_m18292_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18292(__this, method) (( Enumerator_t2445  (*) (List_1_t2443 *, const MethodInfo*))List_1_GetEnumerator_m18292_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18294_gshared (List_1_t2443 * __this, KeyValuePair_2_t1968  ___item, const MethodInfo* method);
#define List_1_IndexOf_m18294(__this, ___item, method) (( int32_t (*) (List_1_t2443 *, KeyValuePair_2_t1968 , const MethodInfo*))List_1_IndexOf_m18294_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18296_gshared (List_1_t2443 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18296(__this, ___start, ___delta, method) (( void (*) (List_1_t2443 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18296_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18298_gshared (List_1_t2443 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18298(__this, ___index, method) (( void (*) (List_1_t2443 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18298_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18300_gshared (List_1_t2443 * __this, int32_t ___index, KeyValuePair_2_t1968  ___item, const MethodInfo* method);
#define List_1_Insert_m18300(__this, ___index, ___item, method) (( void (*) (List_1_t2443 *, int32_t, KeyValuePair_2_t1968 , const MethodInfo*))List_1_Insert_m18300_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18302_gshared (List_1_t2443 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18302(__this, ___collection, method) (( void (*) (List_1_t2443 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18302_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m18304_gshared (List_1_t2443 * __this, KeyValuePair_2_t1968  ___item, const MethodInfo* method);
#define List_1_Remove_m18304(__this, ___item, method) (( bool (*) (List_1_t2443 *, KeyValuePair_2_t1968 , const MethodInfo*))List_1_Remove_m18304_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18306_gshared (List_1_t2443 * __this, Predicate_1_t2451 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18306(__this, ___match, method) (( int32_t (*) (List_1_t2443 *, Predicate_1_t2451 *, const MethodInfo*))List_1_RemoveAll_m18306_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18308_gshared (List_1_t2443 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18308(__this, ___index, method) (( void (*) (List_1_t2443 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18308_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m18310_gshared (List_1_t2443 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m18310(__this, ___index, ___count, method) (( void (*) (List_1_t2443 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m18310_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m18312_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_Reverse_m18312(__this, method) (( void (*) (List_1_t2443 *, const MethodInfo*))List_1_Reverse_m18312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m18314_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_Sort_m18314(__this, method) (( void (*) (List_1_t2443 *, const MethodInfo*))List_1_Sort_m18314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18316_gshared (List_1_t2443 * __this, Comparison_1_t2454 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18316(__this, ___comparison, method) (( void (*) (List_1_t2443 *, Comparison_1_t2454 *, const MethodInfo*))List_1_Sort_m18316_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2444* List_1_ToArray_m18318_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_ToArray_m18318(__this, method) (( KeyValuePair_2U5BU5D_t2444* (*) (List_1_t2443 *, const MethodInfo*))List_1_ToArray_m18318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m18320_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18320(__this, method) (( void (*) (List_1_t2443 *, const MethodInfo*))List_1_TrimExcess_m18320_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18322_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18322(__this, method) (( int32_t (*) (List_1_t2443 *, const MethodInfo*))List_1_get_Capacity_m18322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18324_gshared (List_1_t2443 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18324(__this, ___value, method) (( void (*) (List_1_t2443 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18324_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m18326_gshared (List_1_t2443 * __this, const MethodInfo* method);
#define List_1_get_Count_m18326(__this, method) (( int32_t (*) (List_1_t2443 *, const MethodInfo*))List_1_get_Count_m18326_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1968  List_1_get_Item_m18328_gshared (List_1_t2443 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18328(__this, ___index, method) (( KeyValuePair_2_t1968  (*) (List_1_t2443 *, int32_t, const MethodInfo*))List_1_get_Item_m18328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18330_gshared (List_1_t2443 * __this, int32_t ___index, KeyValuePair_2_t1968  ___value, const MethodInfo* method);
#define List_1_set_Item_m18330(__this, ___index, ___value, method) (( void (*) (List_1_t2443 *, int32_t, KeyValuePair_2_t1968 , const MethodInfo*))List_1_set_Item_m18330_gshared)(__this, ___index, ___value, method)
