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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2355;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1840;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t621;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2602;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2603;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2358;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m17705_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17705(__this, method) (( void (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2__ctor_m17705_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17707_gshared (Dictionary_2_t2355 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17707(__this, ___comparer, method) (( void (*) (Dictionary_2_t2355 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17707_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17709_gshared (Dictionary_2_t2355 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17709(__this, ___capacity, method) (( void (*) (Dictionary_2_t2355 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17709_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17711_gshared (Dictionary_2_t2355 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17711(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2355 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m17711_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17713_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17713(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17713_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17715_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17717_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17717_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17719_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17719(__this, ___key, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17719_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17721_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17721(__this, ___key, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17721_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17723_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17723(__this, method) (( bool (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17723_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17725_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17725(__this, method) (( Object_t * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17727_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17727(__this, method) (( bool (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17729_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17729(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17729_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17731_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17731(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17731_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17733_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2U5BU5D_t2602* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17733(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, KeyValuePair_2U5BU5D_t2602*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17733_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17735_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17735(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17735_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17737_gshared (Dictionary_2_t2355 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17737(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17737_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17739_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17739(__this, method) (( Object_t * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17739_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17741_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17741(__this, method) (( Object_t* (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17741_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17743_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17743(__this, method) (( Object_t * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17743_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17745_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17745(__this, method) (( int32_t (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_get_Count_m17745_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t666  Dictionary_2_get_Item_m17747_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17747(__this, ___key, method) (( ObjectMetadata_t666  (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17747_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17749_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17749(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_set_Item_m17749_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17751_gshared (Dictionary_2_t2355 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17751(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2355 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17751_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17753_gshared (Dictionary_2_t2355 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17753(__this, ___size, method) (( void (*) (Dictionary_2_t2355 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17753_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17755_gshared (Dictionary_2_t2355 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17755(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17755_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2327  Dictionary_2_make_pair_m17757_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17757(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2327  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_make_pair_m17757_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t666  Dictionary_2_pick_value_m17759_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17759(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t666  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_pick_value_m17759_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17761_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2U5BU5D_t2602* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17761(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, KeyValuePair_2U5BU5D_t2602*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17761_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m17763_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17763(__this, method) (( void (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_Resize_m17763_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17765_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17765(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_Add_m17765_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m17767_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17767(__this, method) (( void (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_Clear_m17767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17769_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17769(__this, ___key, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17771_gshared (Dictionary_2_t2355 * __this, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17771(__this, ___value, method) (( bool (*) (Dictionary_2_t2355 *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_ContainsValue_m17771_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17773_gshared (Dictionary_2_t2355 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17773(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2355 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m17773_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17775_gshared (Dictionary_2_t2355 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17775(__this, ___sender, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17775_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17777_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17777(__this, ___key, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17777_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17779_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, ObjectMetadata_t666 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17779(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, ObjectMetadata_t666 *, const MethodInfo*))Dictionary_2_TryGetValue_m17779_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2358 * Dictionary_2_get_Values_m17781_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17781(__this, method) (( ValueCollection_t2358 * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_get_Values_m17781_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17783_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17783(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17783_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t666  Dictionary_2_ToTValue_m17785_gshared (Dictionary_2_t2355 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17785(__this, ___value, method) (( ObjectMetadata_t666  (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17785_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17787_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17787(__this, ___pair, method) (( bool (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17787_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2360  Dictionary_2_GetEnumerator_m17789_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17789(__this, method) (( Enumerator_t2360  (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17789_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m17791_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17791(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17791_gshared)(__this /* static, unused */, ___key, ___value, method)
