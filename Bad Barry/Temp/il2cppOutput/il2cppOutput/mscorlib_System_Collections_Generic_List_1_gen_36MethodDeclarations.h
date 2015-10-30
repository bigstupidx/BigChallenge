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
struct List_1_t384;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t408;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2040;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2343;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1756;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Predicate`1<System.Object>
struct Predicate_1_t1794;
// System.Comparison`1<System.Object>
struct Comparison_1_t1799;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10846_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1__ctor_m10846(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1__ctor_m10846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10848_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10848(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1__ctor_m10848_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10850_gshared (List_1_t384 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10850(__this, ___capacity, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1__ctor_m10850_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10852_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10852(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10852_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10854_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10854(__this, method) (( Object_t* (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10854_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10856_gshared (List_1_t384 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10856(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t384 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10856_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10858_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10858(__this, method) (( Object_t * (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10858_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10860_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10860(__this, ___item, method) (( int32_t (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10860_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10862_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10862(__this, ___item, method) (( bool (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10862_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10864_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10864(__this, ___item, method) (( int32_t (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10864_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10866_gshared (List_1_t384 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10866(__this, ___index, ___item, method) (( void (*) (List_1_t384 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10866_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10868_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10868(__this, ___item, method) (( void (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10868_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10870_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10870(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10870_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10872_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10872(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10872_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10874_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10874(__this, method) (( Object_t * (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10876_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10876(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10878_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10878(__this, method) (( bool (*) (List_1_t384 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10878_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10880_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10880(__this, ___index, method) (( Object_t * (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10880_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10882_gshared (List_1_t384 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10882(__this, ___index, ___value, method) (( void (*) (List_1_t384 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10882_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10884_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10884(__this, ___item, method) (( void (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_Add_m10884_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10886_gshared (List_1_t384 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10886(__this, ___newCount, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10886_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10888_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10888(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10888_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10890_gshared (List_1_t384 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10890(__this, ___enumerable, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10890_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10892_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10892(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_AddRange_m10892_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1756 * List_1_AsReadOnly_m10894_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10894(__this, method) (( ReadOnlyCollection_1_t1756 * (*) (List_1_t384 *, const MethodInfo*))List_1_AsReadOnly_m10894_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10896_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_Clear_m10896(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_Clear_m10896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10898_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10898(__this, ___item, method) (( bool (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_Contains_m10898_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10900_gshared (List_1_t384 * __this, ObjectU5BU5D_t79* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10900(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t384 *, ObjectU5BU5D_t79*, int32_t, const MethodInfo*))List_1_CopyTo_m10900_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10902_gshared (List_1_t384 * __this, Predicate_1_t1794 * ___match, const MethodInfo* method);
#define List_1_Find_m10902(__this, ___match, method) (( Object_t * (*) (List_1_t384 *, Predicate_1_t1794 *, const MethodInfo*))List_1_Find_m10902_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10904_gshared (Object_t * __this /* static, unused */, Predicate_1_t1794 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10904(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1794 *, const MethodInfo*))List_1_CheckMatch_m10904_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10906_gshared (List_1_t384 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1794 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10906(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t384 *, int32_t, int32_t, Predicate_1_t1794 *, const MethodInfo*))List_1_GetIndex_m10906_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1791  List_1_GetEnumerator_m10908_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10908(__this, method) (( Enumerator_t1791  (*) (List_1_t384 *, const MethodInfo*))List_1_GetEnumerator_m10908_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10910_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10910(__this, ___item, method) (( int32_t (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10910_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10912_gshared (List_1_t384 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10912(__this, ___start, ___delta, method) (( void (*) (List_1_t384 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10912_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10914_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10914(__this, ___index, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10914_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10916_gshared (List_1_t384 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10916(__this, ___index, ___item, method) (( void (*) (List_1_t384 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10916_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10918_gshared (List_1_t384 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10918(__this, ___collection, method) (( void (*) (List_1_t384 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10918_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10920_gshared (List_1_t384 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10920(__this, ___item, method) (( bool (*) (List_1_t384 *, Object_t *, const MethodInfo*))List_1_Remove_m10920_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10922_gshared (List_1_t384 * __this, Predicate_1_t1794 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10922(__this, ___match, method) (( int32_t (*) (List_1_t384 *, Predicate_1_t1794 *, const MethodInfo*))List_1_RemoveAll_m10922_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10924_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10924(__this, ___index, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10924_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10926_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_Reverse_m10926(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_Reverse_m10926_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10928_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_Sort_m10928(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_Sort_m10928_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10930_gshared (List_1_t384 * __this, Comparison_1_t1799 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10930(__this, ___comparison, method) (( void (*) (List_1_t384 *, Comparison_1_t1799 *, const MethodInfo*))List_1_Sort_m10930_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t79* List_1_ToArray_m10931_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_ToArray_m10931(__this, method) (( ObjectU5BU5D_t79* (*) (List_1_t384 *, const MethodInfo*))List_1_ToArray_m10931_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10933_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10933(__this, method) (( void (*) (List_1_t384 *, const MethodInfo*))List_1_TrimExcess_m10933_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10935_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10935(__this, method) (( int32_t (*) (List_1_t384 *, const MethodInfo*))List_1_get_Capacity_m10935_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10937_gshared (List_1_t384 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10937(__this, ___value, method) (( void (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10937_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10939_gshared (List_1_t384 * __this, const MethodInfo* method);
#define List_1_get_Count_m10939(__this, method) (( int32_t (*) (List_1_t384 *, const MethodInfo*))List_1_get_Count_m10939_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10941_gshared (List_1_t384 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10941(__this, ___index, method) (( Object_t * (*) (List_1_t384 *, int32_t, const MethodInfo*))List_1_get_Item_m10941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10943_gshared (List_1_t384 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10943(__this, ___index, ___value, method) (( void (*) (List_1_t384 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10943_gshared)(__this, ___index, ___value, method)
