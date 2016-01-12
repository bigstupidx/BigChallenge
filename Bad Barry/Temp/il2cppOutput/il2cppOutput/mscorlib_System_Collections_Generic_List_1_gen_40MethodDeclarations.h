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
struct IEnumerator_1_t2211;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2627;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t461;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1911;
// System.Object[]
struct ObjectU5BU5D_t144;
// System.Predicate`1<System.Object>
struct Predicate_1_t1949;
// System.Comparison`1<System.Object>
struct Comparison_1_t1954;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11850_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1__ctor_m11850(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1__ctor_m11850_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11852_gshared (List_1_t437 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11852(__this, ___capacity, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1__ctor_m11852_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11854_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11854(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11854_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11856_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11856(__this, method) (( Object_t* (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11856_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11858_gshared (List_1_t437 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11858(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t437 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11858_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11860_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11860(__this, method) (( Object_t * (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11860_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11862_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11862(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11862_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11864_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11864(__this, ___item, method) (( bool (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11864_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11866_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11866(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11866_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11868_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11868(__this, ___index, ___item, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11870_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11870(__this, ___item, method) (( void (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11870_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11872_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11872(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11874_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11874(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11874_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11876_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11876(__this, method) (( Object_t * (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11878_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11878(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11880_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11880(__this, method) (( bool (*) (List_1_t437 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11880_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11882_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11882(__this, ___index, method) (( Object_t * (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11882_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11884_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11884(__this, ___index, ___value, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11884_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11886_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11886(__this, ___item, method) (( void (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_Add_m11886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11888_gshared (List_1_t437 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11888(__this, ___newCount, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11888_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m11890_gshared (List_1_t437 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m11890(__this, ___idx, ___count, method) (( void (*) (List_1_t437 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m11890_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11892_gshared (List_1_t437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11892(__this, ___collection, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11892_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11894_gshared (List_1_t437 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11894(__this, ___enumerable, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11894_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11896_gshared (List_1_t437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11896(__this, ___collection, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_AddRange_m11896_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1911 * List_1_AsReadOnly_m11898_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11898(__this, method) (( ReadOnlyCollection_1_t1911 * (*) (List_1_t437 *, const MethodInfo*))List_1_AsReadOnly_m11898_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11900_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_Clear_m11900(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_Clear_m11900_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11902_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11902(__this, ___item, method) (( bool (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_Contains_m11902_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11904_gshared (List_1_t437 * __this, ObjectU5BU5D_t144* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11904(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t437 *, ObjectU5BU5D_t144*, int32_t, const MethodInfo*))List_1_CopyTo_m11904_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11906_gshared (List_1_t437 * __this, Predicate_1_t1949 * ___match, const MethodInfo* method);
#define List_1_Find_m11906(__this, ___match, method) (( Object_t * (*) (List_1_t437 *, Predicate_1_t1949 *, const MethodInfo*))List_1_Find_m11906_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11908_gshared (Object_t * __this /* static, unused */, Predicate_1_t1949 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11908(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1949 *, const MethodInfo*))List_1_CheckMatch_m11908_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11910_gshared (List_1_t437 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1949 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11910(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t437 *, int32_t, int32_t, Predicate_1_t1949 *, const MethodInfo*))List_1_GetIndex_m11910_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1946  List_1_GetEnumerator_m11912_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11912(__this, method) (( Enumerator_t1946  (*) (List_1_t437 *, const MethodInfo*))List_1_GetEnumerator_m11912_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11914_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11914(__this, ___item, method) (( int32_t (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11914_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11916_gshared (List_1_t437 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11916(__this, ___start, ___delta, method) (( void (*) (List_1_t437 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11916_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11918_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11918(__this, ___index, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11918_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11920_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11920(__this, ___index, ___item, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11920_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11922_gshared (List_1_t437 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11922(__this, ___collection, method) (( void (*) (List_1_t437 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11922_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11924_gshared (List_1_t437 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11924(__this, ___item, method) (( bool (*) (List_1_t437 *, Object_t *, const MethodInfo*))List_1_Remove_m11924_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11926_gshared (List_1_t437 * __this, Predicate_1_t1949 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11926(__this, ___match, method) (( int32_t (*) (List_1_t437 *, Predicate_1_t1949 *, const MethodInfo*))List_1_RemoveAll_m11926_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11928_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11928(__this, ___index, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11928_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m11930_gshared (List_1_t437 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m11930(__this, ___index, ___count, method) (( void (*) (List_1_t437 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m11930_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11932_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_Reverse_m11932(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_Reverse_m11932_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11934_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_Sort_m11934(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_Sort_m11934_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11936_gshared (List_1_t437 * __this, Comparison_1_t1954 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11936(__this, ___comparison, method) (( void (*) (List_1_t437 *, Comparison_1_t1954 *, const MethodInfo*))List_1_Sort_m11936_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t144* List_1_ToArray_m11937_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_ToArray_m11937(__this, method) (( ObjectU5BU5D_t144* (*) (List_1_t437 *, const MethodInfo*))List_1_ToArray_m11937_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11939_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11939(__this, method) (( void (*) (List_1_t437 *, const MethodInfo*))List_1_TrimExcess_m11939_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11941_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11941(__this, method) (( int32_t (*) (List_1_t437 *, const MethodInfo*))List_1_get_Capacity_m11941_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11943_gshared (List_1_t437 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11943(__this, ___value, method) (( void (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11943_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11945_gshared (List_1_t437 * __this, const MethodInfo* method);
#define List_1_get_Count_m11945(__this, method) (( int32_t (*) (List_1_t437 *, const MethodInfo*))List_1_get_Count_m11945_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11947_gshared (List_1_t437 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11947(__this, ___index, method) (( Object_t * (*) (List_1_t437 *, int32_t, const MethodInfo*))List_1_get_Item_m11947_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11949_gshared (List_1_t437 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11949(__this, ___index, ___value, method) (( void (*) (List_1_t437 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11949_gshared)(__this, ___index, ___value, method)
