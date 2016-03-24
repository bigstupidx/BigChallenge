﻿#pragma once

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
struct List_1_t482;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2262;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2678;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t506;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1956;
// System.Object[]
struct ObjectU5BU5D_t179;
// System.Predicate`1<System.Object>
struct Predicate_1_t1995;
// System.Comparison`1<System.Object>
struct Comparison_1_t2000;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m12119_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1__ctor_m12119(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1__ctor_m12119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12121_gshared (List_1_t482 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12121(__this, ___capacity, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1__ctor_m12121_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m12123_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12123(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12123_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12125_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12125(__this, method) (( Object_t* (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12125_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12127_gshared (List_1_t482 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12127(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t482 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12127_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12129_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12129(__this, method) (( Object_t * (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12129_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12131_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12131(__this, ___item, method) (( int32_t (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12131_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12133_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12133(__this, ___item, method) (( bool (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12133_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12135_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12135(__this, ___item, method) (( int32_t (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12135_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12137_gshared (List_1_t482 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12137(__this, ___index, ___item, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12137_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12139_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12139(__this, ___item, method) (( void (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12139_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12141_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12141(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12141_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12143_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12143(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12143_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12145_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12145(__this, method) (( Object_t * (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12145_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12147_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12147(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12147_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12149_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12149(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12149_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12151_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12151(__this, ___index, method) (( Object_t * (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12151_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12153_gshared (List_1_t482 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12153(__this, ___index, ___value, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12153_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m12155_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m12155(__this, ___item, method) (( void (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_Add_m12155_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12157_gshared (List_1_t482 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12157(__this, ___newCount, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12157_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m12159_gshared (List_1_t482 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m12159(__this, ___idx, ___count, method) (( void (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m12159_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12161_gshared (List_1_t482 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12161(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12161_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12163_gshared (List_1_t482 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12163(__this, ___enumerable, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12163_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12165_gshared (List_1_t482 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12165(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddRange_m12165_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1956 * List_1_AsReadOnly_m12167_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12167(__this, method) (( ReadOnlyCollection_1_t1956 * (*) (List_1_t482 *, const MethodInfo*))List_1_AsReadOnly_m12167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m12169_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_Clear_m12169(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Clear_m12169_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m12171_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m12171(__this, ___item, method) (( bool (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_Contains_m12171_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12173_gshared (List_1_t482 * __this, ObjectU5BU5D_t179* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12173(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t482 *, ObjectU5BU5D_t179*, int32_t, const MethodInfo*))List_1_CopyTo_m12173_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m12175_gshared (List_1_t482 * __this, Predicate_1_t1995 * ___match, const MethodInfo* method);
#define List_1_Find_m12175(__this, ___match, method) (( Object_t * (*) (List_1_t482 *, Predicate_1_t1995 *, const MethodInfo*))List_1_Find_m12175_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12177_gshared (Object_t * __this /* static, unused */, Predicate_1_t1995 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12177(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1995 *, const MethodInfo*))List_1_CheckMatch_m12177_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12179_gshared (List_1_t482 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1995 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12179(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t482 *, int32_t, int32_t, Predicate_1_t1995 *, const MethodInfo*))List_1_GetIndex_m12179_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1992  List_1_GetEnumerator_m12181_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12181(__this, method) (( Enumerator_t1992  (*) (List_1_t482 *, const MethodInfo*))List_1_GetEnumerator_m12181_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12183_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m12183(__this, ___item, method) (( int32_t (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_IndexOf_m12183_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12185_gshared (List_1_t482 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12185(__this, ___start, ___delta, method) (( void (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12185_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12187_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12187(__this, ___index, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12187_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12189_gshared (List_1_t482 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m12189(__this, ___index, ___item, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m12189_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12191_gshared (List_1_t482 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12191(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12191_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m12193_gshared (List_1_t482 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m12193(__this, ___item, method) (( bool (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_Remove_m12193_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12195_gshared (List_1_t482 * __this, Predicate_1_t1995 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12195(__this, ___match, method) (( int32_t (*) (List_1_t482 *, Predicate_1_t1995 *, const MethodInfo*))List_1_RemoveAll_m12195_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12197_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12197(__this, ___index, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12197_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m12199_gshared (List_1_t482 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m12199(__this, ___index, ___count, method) (( void (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m12199_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m12201_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_Reverse_m12201(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Reverse_m12201_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m12203_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_Sort_m12203(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Sort_m12203_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12205_gshared (List_1_t482 * __this, Comparison_1_t2000 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12205(__this, ___comparison, method) (( void (*) (List_1_t482 *, Comparison_1_t2000 *, const MethodInfo*))List_1_Sort_m12205_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t179* List_1_ToArray_m12206_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_ToArray_m12206(__this, method) (( ObjectU5BU5D_t179* (*) (List_1_t482 *, const MethodInfo*))List_1_ToArray_m12206_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m12208_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12208(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_TrimExcess_m12208_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12210_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12210(__this, method) (( int32_t (*) (List_1_t482 *, const MethodInfo*))List_1_get_Capacity_m12210_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12212_gshared (List_1_t482 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12212(__this, ___value, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12212_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m12214_gshared (List_1_t482 * __this, const MethodInfo* method);
#define List_1_get_Count_m12214(__this, method) (( int32_t (*) (List_1_t482 *, const MethodInfo*))List_1_get_Count_m12214_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m12216_gshared (List_1_t482 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12216(__this, ___index, method) (( Object_t * (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_get_Item_m12216_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12218_gshared (List_1_t482 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m12218(__this, ___index, ___value, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m12218_gshared)(__this, ___index, ___value, method)