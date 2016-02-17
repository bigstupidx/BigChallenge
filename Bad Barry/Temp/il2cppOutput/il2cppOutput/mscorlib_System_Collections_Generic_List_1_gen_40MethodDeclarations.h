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
struct List_1_t485;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2267;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t156;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2683;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t509;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1961;
// System.Object[]
struct ObjectU5BU5D_t184;
// System.Predicate`1<System.Object>
struct Predicate_1_t2001;
// System.Comparison`1<System.Object>
struct Comparison_1_t2006;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m12145_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1__ctor_m12145(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1__ctor_m12145_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12147_gshared (List_1_t485 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12147(__this, ___capacity, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1__ctor_m12147_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m12149_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12149(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12149_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12151_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12151(__this, method) (( Object_t* (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12151_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12153_gshared (List_1_t485 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12153(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12153_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12155_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12155(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12155_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12157_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12157(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12157_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12159_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12159(__this, ___item, method) (( bool (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12159_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12161_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12161(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12161_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12163_gshared (List_1_t485 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12163(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12163_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12165_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12165(__this, ___item, method) (( void (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12165_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12167_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12167(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12167_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12169_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12169(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12169_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12171_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12171(__this, method) (( Object_t * (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12171_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12173_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12173(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12173_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12175_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12175(__this, method) (( bool (*) (List_1_t485 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12175_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12177_gshared (List_1_t485 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12177(__this, ___index, method) (( Object_t * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12177_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12179_gshared (List_1_t485 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12179(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12179_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m12181_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m12181(__this, ___item, method) (( void (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_Add_m12181_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12183_gshared (List_1_t485 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12183(__this, ___newCount, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12183_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m12185_gshared (List_1_t485 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m12185(__this, ___idx, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m12185_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12187_gshared (List_1_t485 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12187(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12187_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12189_gshared (List_1_t485 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12189(__this, ___enumerable, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12189_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12191_gshared (List_1_t485 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12191(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_AddRange_m12191_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1961 * List_1_AsReadOnly_m12193_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12193(__this, method) (( ReadOnlyCollection_1_t1961 * (*) (List_1_t485 *, const MethodInfo*))List_1_AsReadOnly_m12193_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m12195_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_Clear_m12195(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Clear_m12195_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m12197_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m12197(__this, ___item, method) (( bool (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_Contains_m12197_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12199_gshared (List_1_t485 * __this, ObjectU5BU5D_t184* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12199(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t485 *, ObjectU5BU5D_t184*, int32_t, const MethodInfo*))List_1_CopyTo_m12199_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m12201_gshared (List_1_t485 * __this, Predicate_1_t2001 * ___match, const MethodInfo* method);
#define List_1_Find_m12201(__this, ___match, method) (( Object_t * (*) (List_1_t485 *, Predicate_1_t2001 *, const MethodInfo*))List_1_Find_m12201_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12203_gshared (Object_t * __this /* static, unused */, Predicate_1_t2001 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12203(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2001 *, const MethodInfo*))List_1_CheckMatch_m12203_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12205_gshared (List_1_t485 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2001 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12205(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t485 *, int32_t, int32_t, Predicate_1_t2001 *, const MethodInfo*))List_1_GetIndex_m12205_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1998  List_1_GetEnumerator_m12207_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12207(__this, method) (( Enumerator_t1998  (*) (List_1_t485 *, const MethodInfo*))List_1_GetEnumerator_m12207_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12209_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m12209(__this, ___item, method) (( int32_t (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_IndexOf_m12209_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12211_gshared (List_1_t485 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12211(__this, ___start, ___delta, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12211_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12213_gshared (List_1_t485 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12213(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12213_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12215_gshared (List_1_t485 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m12215(__this, ___index, ___item, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m12215_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12217_gshared (List_1_t485 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12217(__this, ___collection, method) (( void (*) (List_1_t485 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m12219_gshared (List_1_t485 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m12219(__this, ___item, method) (( bool (*) (List_1_t485 *, Object_t *, const MethodInfo*))List_1_Remove_m12219_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12221_gshared (List_1_t485 * __this, Predicate_1_t2001 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12221(__this, ___match, method) (( int32_t (*) (List_1_t485 *, Predicate_1_t2001 *, const MethodInfo*))List_1_RemoveAll_m12221_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12223_gshared (List_1_t485 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12223(__this, ___index, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12223_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m12225_gshared (List_1_t485 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m12225(__this, ___index, ___count, method) (( void (*) (List_1_t485 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m12225_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m12227_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_Reverse_m12227(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Reverse_m12227_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m12229_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_Sort_m12229(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_Sort_m12229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12231_gshared (List_1_t485 * __this, Comparison_1_t2006 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12231(__this, ___comparison, method) (( void (*) (List_1_t485 *, Comparison_1_t2006 *, const MethodInfo*))List_1_Sort_m12231_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t184* List_1_ToArray_m12232_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_ToArray_m12232(__this, method) (( ObjectU5BU5D_t184* (*) (List_1_t485 *, const MethodInfo*))List_1_ToArray_m12232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m12234_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12234(__this, method) (( void (*) (List_1_t485 *, const MethodInfo*))List_1_TrimExcess_m12234_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12236_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12236(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Capacity_m12236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12238_gshared (List_1_t485 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12238(__this, ___value, method) (( void (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12238_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m12240_gshared (List_1_t485 * __this, const MethodInfo* method);
#define List_1_get_Count_m12240(__this, method) (( int32_t (*) (List_1_t485 *, const MethodInfo*))List_1_get_Count_m12240_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m12242_gshared (List_1_t485 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12242(__this, ___index, method) (( Object_t * (*) (List_1_t485 *, int32_t, const MethodInfo*))List_1_get_Item_m12242_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12244_gshared (List_1_t485 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m12244(__this, ___index, ___value, method) (( void (*) (List_1_t485 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m12244_gshared)(__this, ___index, ___value, method)
