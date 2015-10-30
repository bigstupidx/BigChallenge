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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1756;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1792;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2040;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m10951_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t* ___list, const MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m10951(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t1756 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m10951_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10952_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10952(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10952_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m10953_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m10953(__this, method) (( void (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m10953_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m10954_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m10954(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t1756 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m10954_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m10955_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m10955(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m10955_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m10956_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m10956(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1756 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m10956_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10957_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10957(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1756 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10957_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m10958_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m10958(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1756 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m10958_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10959_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10959(__this, method) (( bool (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10959_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10960_gshared (ReadOnlyCollection_1_t1756 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10960(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1756 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10960_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m10961_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m10961(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m10961_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m10962_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m10962(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m10962_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m10963_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m10963(__this, method) (( void (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m10963_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m10964_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m10964(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m10964_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m10965_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m10965(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m10965_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m10966_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m10966(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1756 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m10966_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m10967_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m10967(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m10967_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m10968_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m10968(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1756 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m10968_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m10969_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m10969(__this, method) (( bool (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m10969_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m10970_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m10970(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m10970_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m10971_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m10971(__this, method) (( bool (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m10971_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m10972_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m10972(__this, method) (( bool (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m10972_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m10973_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m10973(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1756 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m10973_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m10974_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m10974(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1756 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m10974_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m10975_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m10975(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_Contains_m10975_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m10976_gshared (ReadOnlyCollection_1_t1756 * __this, ObjectU5BU5D_t79* ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m10976(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1756 *, ObjectU5BU5D_t79*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m10976_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m10977_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m10977(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m10977_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m10978_gshared (ReadOnlyCollection_1_t1756 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m10978(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1756 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m10978_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m10979_gshared (ReadOnlyCollection_1_t1756 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m10979(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t1756 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m10979_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m10980_gshared (ReadOnlyCollection_1_t1756 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m10980(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1756 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m10980_gshared)(__this, ___index, method)
