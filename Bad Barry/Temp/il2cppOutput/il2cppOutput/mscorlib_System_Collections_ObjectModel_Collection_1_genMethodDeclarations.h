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
struct Collection_1_t1994;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t179;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2262;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1993;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12256_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12256(__this, method) (( void (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1__ctor_m12256_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12257_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12257(__this, method) (( bool (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12257_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12258_gshared (Collection_1_t1994 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12258(__this, ___array, ___index, method) (( void (*) (Collection_1_t1994 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12258_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12259_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12259(__this, method) (( Object_t * (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12259_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12260_gshared (Collection_1_t1994 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12260(__this, ___value, method) (( int32_t (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12260_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12261_gshared (Collection_1_t1994 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12261(__this, ___value, method) (( bool (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12261_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12262_gshared (Collection_1_t1994 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12262(__this, ___value, method) (( int32_t (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12262_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12263_gshared (Collection_1_t1994 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12263(__this, ___index, ___value, method) (( void (*) (Collection_1_t1994 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12263_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12264_gshared (Collection_1_t1994 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12264(__this, ___value, method) (( void (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12264_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m12265_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12265(__this, method) (( bool (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12265_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12266_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12266(__this, method) (( Object_t * (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12266_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m12267_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12267(__this, method) (( bool (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12267_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m12268_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12268(__this, method) (( bool (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12268_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12269_gshared (Collection_1_t1994 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12269(__this, ___index, method) (( Object_t * (*) (Collection_1_t1994 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12269_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12270_gshared (Collection_1_t1994 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12270(__this, ___index, ___value, method) (( void (*) (Collection_1_t1994 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12270_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12271_gshared (Collection_1_t1994 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12271(__this, ___item, method) (( void (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_Add_m12271_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12272_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12272(__this, method) (( void (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_Clear_m12272_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12273_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12273(__this, method) (( void (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_ClearItems_m12273_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12274_gshared (Collection_1_t1994 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12274(__this, ___item, method) (( bool (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12274_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12275_gshared (Collection_1_t1994 * __this, ObjectU5BU5D_t179* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12275(__this, ___array, ___index, method) (( void (*) (Collection_1_t1994 *, ObjectU5BU5D_t179*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12275_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12276_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12276(__this, method) (( Object_t* (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_GetEnumerator_m12276_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12277_gshared (Collection_1_t1994 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12277(__this, ___item, method) (( int32_t (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12277_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12278_gshared (Collection_1_t1994 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12278(__this, ___index, ___item, method) (( void (*) (Collection_1_t1994 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12278_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12279_gshared (Collection_1_t1994 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12279(__this, ___index, ___item, method) (( void (*) (Collection_1_t1994 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12279_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12280_gshared (Collection_1_t1994 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12280(__this, ___item, method) (( bool (*) (Collection_1_t1994 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12280_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12281_gshared (Collection_1_t1994 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12281(__this, ___index, method) (( void (*) (Collection_1_t1994 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12281_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12282_gshared (Collection_1_t1994 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12282(__this, ___index, method) (( void (*) (Collection_1_t1994 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12282_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12283_gshared (Collection_1_t1994 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12283(__this, method) (( int32_t (*) (Collection_1_t1994 *, const MethodInfo*))Collection_1_get_Count_m12283_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12284_gshared (Collection_1_t1994 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12284(__this, ___index, method) (( Object_t * (*) (Collection_1_t1994 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12284_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12285_gshared (Collection_1_t1994 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12285(__this, ___index, ___value, method) (( void (*) (Collection_1_t1994 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12285_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12286_gshared (Collection_1_t1994 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12286(__this, ___index, ___item, method) (( void (*) (Collection_1_t1994 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12286_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12287_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12287(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12287_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12288_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12288(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12288_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12289_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12289(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12289_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m12290_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m12290(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m12290_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m12291_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m12291(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m12291_gshared)(__this /* static, unused */, ___list, method)
