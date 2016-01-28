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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1976;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t162;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2243;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1975;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12171_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12171(__this, method) (( void (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1__ctor_m12171_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12172_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12172(__this, method) (( bool (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12172_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12173_gshared (Collection_1_t1976 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12173(__this, ___array, ___index, method) (( void (*) (Collection_1_t1976 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12173_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12174_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12174(__this, method) (( Object_t * (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12174_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12175_gshared (Collection_1_t1976 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12175(__this, ___value, method) (( int32_t (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12175_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12176_gshared (Collection_1_t1976 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12176(__this, ___value, method) (( bool (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12176_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12177_gshared (Collection_1_t1976 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12177(__this, ___value, method) (( int32_t (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12177_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12178_gshared (Collection_1_t1976 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12178(__this, ___index, ___value, method) (( void (*) (Collection_1_t1976 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12178_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12179_gshared (Collection_1_t1976 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12179(__this, ___value, method) (( void (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12179_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m12180_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12180(__this, method) (( bool (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12180_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12181_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12181(__this, method) (( Object_t * (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12181_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m12182_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12182(__this, method) (( bool (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12182_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m12183_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12183(__this, method) (( bool (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12183_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12184_gshared (Collection_1_t1976 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12184(__this, ___index, method) (( Object_t * (*) (Collection_1_t1976 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12184_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12185_gshared (Collection_1_t1976 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12185(__this, ___index, ___value, method) (( void (*) (Collection_1_t1976 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12185_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12186_gshared (Collection_1_t1976 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12186(__this, ___item, method) (( void (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_Add_m12186_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12187_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12187(__this, method) (( void (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_Clear_m12187_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12188_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12188(__this, method) (( void (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_ClearItems_m12188_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12189_gshared (Collection_1_t1976 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12189(__this, ___item, method) (( bool (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12189_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12190_gshared (Collection_1_t1976 * __this, ObjectU5BU5D_t162* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12190(__this, ___array, ___index, method) (( void (*) (Collection_1_t1976 *, ObjectU5BU5D_t162*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12190_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12191_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12191(__this, method) (( Object_t* (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_GetEnumerator_m12191_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12192_gshared (Collection_1_t1976 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12192(__this, ___item, method) (( int32_t (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12192_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12193_gshared (Collection_1_t1976 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12193(__this, ___index, ___item, method) (( void (*) (Collection_1_t1976 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12193_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12194_gshared (Collection_1_t1976 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12194(__this, ___index, ___item, method) (( void (*) (Collection_1_t1976 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12194_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12195_gshared (Collection_1_t1976 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12195(__this, ___item, method) (( bool (*) (Collection_1_t1976 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12195_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12196_gshared (Collection_1_t1976 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12196(__this, ___index, method) (( void (*) (Collection_1_t1976 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12196_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12197_gshared (Collection_1_t1976 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12197(__this, ___index, method) (( void (*) (Collection_1_t1976 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12197_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12198_gshared (Collection_1_t1976 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12198(__this, method) (( int32_t (*) (Collection_1_t1976 *, const MethodInfo*))Collection_1_get_Count_m12198_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12199_gshared (Collection_1_t1976 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12199(__this, ___index, method) (( Object_t * (*) (Collection_1_t1976 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12199_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12200_gshared (Collection_1_t1976 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12200(__this, ___index, ___value, method) (( void (*) (Collection_1_t1976 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12200_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12201_gshared (Collection_1_t1976 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12201(__this, ___index, ___item, method) (( void (*) (Collection_1_t1976 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12201_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12202_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12202(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12202_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12203_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12203(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12203_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12204_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12204(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12204_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m12205_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m12205(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m12205_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m12206_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m12206(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m12206_gshared)(__this /* static, unused */, ___list, method)
