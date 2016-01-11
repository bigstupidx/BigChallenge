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
struct List_1_t437;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2200;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2616;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t461;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1898;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Predicate`1<System.Object>
struct Predicate_1_t1938;
// System.Comparison`1<System.Object>
struct Comparison_1_t1943;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11757_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1__ctor_m11757(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1__ctor_m11757_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11759_gshared (List_1_t437 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11759(__this, ___capacity, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1__ctor_m11759_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11761_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11761(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11761_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11763_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11763(__this, method) (( Object_t* (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11763_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11765_gshared (List_1_t437 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11765(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t437 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11765_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11767_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11767(__this, method) (( Object_t * (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11767_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11769_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11769(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11769_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11771_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11771(__this, ___item, method) (( bool (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11771_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11773_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11773(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11773_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11775_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11775(__this, ___index, ___item, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11775_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11777_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11777(__this, ___item, method) (( void (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11777_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11779_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11779(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11781_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11781(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11781_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11783_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11783(__this, method) (( Object_t * (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11785_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11785(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11787_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11787(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11787_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11789_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11789(__this, ___index, method) (( Object_t * (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11789_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11791_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11791(__this, ___index, ___value, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11791_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11793_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11793(__this, ___item, method) (( void (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_Add_m11793_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11795_gshared (List_1_t437 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11795(__this, ___newCount, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11795_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m11797_gshared (List_1_t437 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m11797(__this, ___idx, ___count, method) (( void (*) (List_1_t437 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m11797_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11799_gshared (List_1_t437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11799(__this, ___collection, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11799_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11801_gshared (List_1_t437 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11801(__this, ___enumerable, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11801_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11803_gshared (List_1_t437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11803(__this, ___collection, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_AddRange_m11803_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1898 * List_1_AsReadOnly_m11805_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11805(__this, method) (( ReadOnlyCollection_1_t1898 * (*) (List_1_t437 *, const MethodInfo*))List_1_AsReadOnly_m11805_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11807_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_Clear_m11807(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_Clear_m11807_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11809_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11809(__this, ___item, method) (( bool (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_Contains_m11809_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11811_gshared (List_1_t437 * __this, ObjectU5BU5D_t142* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11811(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t437 *, ObjectU5BU5D_t142*, int32_t, const MethodInfo*))List_1_CopyTo_m11811_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11813_gshared (List_1_t437 * __this, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_Find_m11813(__this, ___match, method) (( Object_t * (*) (List_1_t437 *, Predicate_1_t1938 *, const MethodInfo*))List_1_Find_m11813_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11815_gshared (Object_t * __this /* static, unused */, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11815(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1938 *, const MethodInfo*))List_1_CheckMatch_m11815_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11817_gshared (List_1_t437 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11817(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t437 *, int32_t, int32_t, Predicate_1_t1938 *, const MethodInfo*))List_1_GetIndex_m11817_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1935  List_1_GetEnumerator_m11819_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11819(__this, method) (( Enumerator_t1935  (*) (List_1_t437 *, const MethodInfo*))List_1_GetEnumerator_m11819_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11821_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11821(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11821_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11823_gshared (List_1_t437 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11823(__this, ___start, ___delta, method) (( void (*) (List_1_t437 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11823_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11825_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11825(__this, ___index, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11825_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11827_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11827(__this, ___index, ___item, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11829_gshared (List_1_t437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11829(__this, ___collection, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11829_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11831_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11831(__this, ___item, method) (( bool (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_Remove_m11831_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11833_gshared (List_1_t437 * __this, Predicate_1_t1938 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11833(__this, ___match, method) (( int32_t (*) (List_1_t437 *, Predicate_1_t1938 *, const MethodInfo*))List_1_RemoveAll_m11833_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11835_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11835(__this, ___index, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11835_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m11837_gshared (List_1_t437 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m11837(__this, ___index, ___count, method) (( void (*) (List_1_t437 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m11837_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11839_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_Reverse_m11839(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_Reverse_m11839_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11841_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_Sort_m11841(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_Sort_m11841_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11843_gshared (List_1_t437 * __this, Comparison_1_t1943 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11843(__this, ___comparison, method) (( void (*) (List_1_t437 *, Comparison_1_t1943 *, const MethodInfo*))List_1_Sort_m11843_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t142* List_1_ToArray_m11844_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_ToArray_m11844(__this, method) (( ObjectU5BU5D_t142* (*) (List_1_t437 *, const MethodInfo*))List_1_ToArray_m11844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11846_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11846(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_TrimExcess_m11846_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11848_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11848(__this, method) (( int32_t (*) (List_1_t437 *, const MethodInfo*))List_1_get_Capacity_m11848_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11850_gshared (List_1_t437 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11850(__this, ___value, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11850_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11852_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_get_Count_m11852(__this, method) (( int32_t (*) (List_1_t437 *, const MethodInfo*))List_1_get_Count_m11852_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11854_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11854(__this, ___index, method) (( Object_t * (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_get_Item_m11854_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11856_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11856(__this, ___index, ___value, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11856_gshared)(__this, ___index, ___value, method)
