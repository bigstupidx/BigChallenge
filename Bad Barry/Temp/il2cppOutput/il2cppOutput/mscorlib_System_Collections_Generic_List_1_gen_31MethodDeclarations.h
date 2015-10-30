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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t518;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2394;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2395;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t379;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2168;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t600;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2172;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2175;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15967_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1__ctor_m15967(__this, method) (( void (*) (List_1_t518 *, const MethodInfo*))List_1__ctor_m15967_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15968_gshared (List_1_t518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15968(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, const MethodInfo*))List_1__ctor_m15968_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3241_gshared (List_1_t518 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3241(__this, ___capacity, method) (( void (*) (List_1_t518 *, int32_t, const MethodInfo*))List_1__ctor_m3241_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15969_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15969(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15969_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15970_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15970(__this, method) (( Object_t* (*) (List_1_t518 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15970_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15971_gshared (List_1_t518 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15971(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t518 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15971_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15972_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15972(__this, method) (( Object_t * (*) (List_1_t518 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15972_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15973_gshared (List_1_t518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15973(__this, ___item, method) (( int32_t (*) (List_1_t518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15973_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15974_gshared (List_1_t518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15974(__this, ___item, method) (( bool (*) (List_1_t518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15974_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15975_gshared (List_1_t518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15975(__this, ___item, method) (( int32_t (*) (List_1_t518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15975_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15976_gshared (List_1_t518 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15976(__this, ___index, ___item, method) (( void (*) (List_1_t518 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15976_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15977_gshared (List_1_t518 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15977(__this, ___item, method) (( void (*) (List_1_t518 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15977_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15978_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15978(__this, method) (( bool (*) (List_1_t518 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15979_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15979(__this, method) (( bool (*) (List_1_t518 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15979_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15980_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15980(__this, method) (( Object_t * (*) (List_1_t518 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15981_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15981(__this, method) (( bool (*) (List_1_t518 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15981_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15982_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15982(__this, method) (( bool (*) (List_1_t518 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15982_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15983_gshared (List_1_t518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15983(__this, ___index, method) (( Object_t * (*) (List_1_t518 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15983_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15984_gshared (List_1_t518 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15984(__this, ___index, ___value, method) (( void (*) (List_1_t518 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15984_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15985_gshared (List_1_t518 * __this, UILineInfo_t375  ___item, const MethodInfo* method);
#define List_1_Add_m15985(__this, ___item, method) (( void (*) (List_1_t518 *, UILineInfo_t375 , const MethodInfo*))List_1_Add_m15985_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15986_gshared (List_1_t518 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15986(__this, ___newCount, method) (( void (*) (List_1_t518 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15986_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15987_gshared (List_1_t518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15987(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15987_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15988_gshared (List_1_t518 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15988(__this, ___enumerable, method) (( void (*) (List_1_t518 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15988_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15989_gshared (List_1_t518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15989(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, const MethodInfo*))List_1_AddRange_m15989_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2168 * List_1_AsReadOnly_m15990_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15990(__this, method) (( ReadOnlyCollection_1_t2168 * (*) (List_1_t518 *, const MethodInfo*))List_1_AsReadOnly_m15990_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15991_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_Clear_m15991(__this, method) (( void (*) (List_1_t518 *, const MethodInfo*))List_1_Clear_m15991_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15992_gshared (List_1_t518 * __this, UILineInfo_t375  ___item, const MethodInfo* method);
#define List_1_Contains_m15992(__this, ___item, method) (( bool (*) (List_1_t518 *, UILineInfo_t375 , const MethodInfo*))List_1_Contains_m15992_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15993_gshared (List_1_t518 * __this, UILineInfoU5BU5D_t600* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15993(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t518 *, UILineInfoU5BU5D_t600*, int32_t, const MethodInfo*))List_1_CopyTo_m15993_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t375  List_1_Find_m15994_gshared (List_1_t518 * __this, Predicate_1_t2172 * ___match, const MethodInfo* method);
#define List_1_Find_m15994(__this, ___match, method) (( UILineInfo_t375  (*) (List_1_t518 *, Predicate_1_t2172 *, const MethodInfo*))List_1_Find_m15994_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15995_gshared (Object_t * __this /* static, unused */, Predicate_1_t2172 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15995(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2172 *, const MethodInfo*))List_1_CheckMatch_m15995_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15996_gshared (List_1_t518 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2172 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15996(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t518 *, int32_t, int32_t, Predicate_1_t2172 *, const MethodInfo*))List_1_GetIndex_m15996_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2167  List_1_GetEnumerator_m15997_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15997(__this, method) (( Enumerator_t2167  (*) (List_1_t518 *, const MethodInfo*))List_1_GetEnumerator_m15997_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15998_gshared (List_1_t518 * __this, UILineInfo_t375  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15998(__this, ___item, method) (( int32_t (*) (List_1_t518 *, UILineInfo_t375 , const MethodInfo*))List_1_IndexOf_m15998_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15999_gshared (List_1_t518 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15999(__this, ___start, ___delta, method) (( void (*) (List_1_t518 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15999_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16000_gshared (List_1_t518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16000(__this, ___index, method) (( void (*) (List_1_t518 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16000_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16001_gshared (List_1_t518 * __this, int32_t ___index, UILineInfo_t375  ___item, const MethodInfo* method);
#define List_1_Insert_m16001(__this, ___index, ___item, method) (( void (*) (List_1_t518 *, int32_t, UILineInfo_t375 , const MethodInfo*))List_1_Insert_m16001_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16002_gshared (List_1_t518 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16002(__this, ___collection, method) (( void (*) (List_1_t518 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16002_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m16003_gshared (List_1_t518 * __this, UILineInfo_t375  ___item, const MethodInfo* method);
#define List_1_Remove_m16003(__this, ___item, method) (( bool (*) (List_1_t518 *, UILineInfo_t375 , const MethodInfo*))List_1_Remove_m16003_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16004_gshared (List_1_t518 * __this, Predicate_1_t2172 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16004(__this, ___match, method) (( int32_t (*) (List_1_t518 *, Predicate_1_t2172 *, const MethodInfo*))List_1_RemoveAll_m16004_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16005_gshared (List_1_t518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16005(__this, ___index, method) (( void (*) (List_1_t518 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16005_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m16006_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_Reverse_m16006(__this, method) (( void (*) (List_1_t518 *, const MethodInfo*))List_1_Reverse_m16006_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m16007_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_Sort_m16007(__this, method) (( void (*) (List_1_t518 *, const MethodInfo*))List_1_Sort_m16007_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16008_gshared (List_1_t518 * __this, Comparison_1_t2175 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16008(__this, ___comparison, method) (( void (*) (List_1_t518 *, Comparison_1_t2175 *, const MethodInfo*))List_1_Sort_m16008_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t600* List_1_ToArray_m16009_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_ToArray_m16009(__this, method) (( UILineInfoU5BU5D_t600* (*) (List_1_t518 *, const MethodInfo*))List_1_ToArray_m16009_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m16010_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16010(__this, method) (( void (*) (List_1_t518 *, const MethodInfo*))List_1_TrimExcess_m16010_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16011_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16011(__this, method) (( int32_t (*) (List_1_t518 *, const MethodInfo*))List_1_get_Capacity_m16011_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16012_gshared (List_1_t518 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16012(__this, ___value, method) (( void (*) (List_1_t518 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16012_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m16013_gshared (List_1_t518 * __this, const MethodInfo* method);
#define List_1_get_Count_m16013(__this, method) (( int32_t (*) (List_1_t518 *, const MethodInfo*))List_1_get_Count_m16013_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t375  List_1_get_Item_m16014_gshared (List_1_t518 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16014(__this, ___index, method) (( UILineInfo_t375  (*) (List_1_t518 *, int32_t, const MethodInfo*))List_1_get_Item_m16014_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16015_gshared (List_1_t518 * __this, int32_t ___index, UILineInfo_t375  ___value, const MethodInfo* method);
#define List_1_set_Item_m16015(__this, ___index, ___value, method) (( void (*) (List_1_t518 *, int32_t, UILineInfo_t375 , const MethodInfo*))List_1_set_Item_m16015_gshared)(__this, ___index, ___value, method)
