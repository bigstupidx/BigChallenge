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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2473;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1967;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t699;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2740;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2741;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t775;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2476;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18608_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18608(__this, method) (( void (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2__ctor_m18608_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18610_gshared (Dictionary_2_t2473 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18610(__this, ___comparer, method) (( void (*) (Dictionary_2_t2473 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18610_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18612_gshared (Dictionary_2_t2473 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18612(__this, ___capacity, method) (( void (*) (Dictionary_2_t2473 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18614_gshared (Dictionary_2_t2473 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18614(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2473 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2__ctor_m18614_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18616_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18616(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18616_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18618_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18618(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2473 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18618_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18620_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18620(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2473 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18620_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18622_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18622(__this, ___key, method) (( bool (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18622_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18624_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18624(__this, ___key, method) (( void (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18624_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18626_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18626(__this, method) (( bool (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18626_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18628_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18628(__this, method) (( Object_t * (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18630_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18630(__this, method) (( bool (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18632_gshared (Dictionary_2_t2473 * __this, KeyValuePair_2_t2465  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18632(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2473 *, KeyValuePair_2_t2465 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18632_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18634_gshared (Dictionary_2_t2473 * __this, KeyValuePair_2_t2465  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18634(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2473 *, KeyValuePair_2_t2465 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18634_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18636_gshared (Dictionary_2_t2473 * __this, KeyValuePair_2U5BU5D_t2740* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18636(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2473 *, KeyValuePair_2U5BU5D_t2740*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18636_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18638_gshared (Dictionary_2_t2473 * __this, KeyValuePair_2_t2465  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18638(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2473 *, KeyValuePair_2_t2465 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18638_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18640_gshared (Dictionary_2_t2473 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18640(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2473 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18640_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18642_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18642(__this, method) (( Object_t * (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18642_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18644_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18644(__this, method) (( Object_t* (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18644_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18646_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18646(__this, method) (( Object_t * (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18646_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18648_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18648(__this, method) (( int32_t (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_get_Count_m18648_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t742  Dictionary_2_get_Item_m18650_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18650(__this, ___key, method) (( ArrayMetadata_t742  (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18650_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18652_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, ArrayMetadata_t742  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18652(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2473 *, Object_t *, ArrayMetadata_t742 , const MethodInfo*))Dictionary_2_set_Item_m18652_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18654_gshared (Dictionary_2_t2473 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18654(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2473 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18654_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18656_gshared (Dictionary_2_t2473 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18656(__this, ___size, method) (( void (*) (Dictionary_2_t2473 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18656_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18658_gshared (Dictionary_2_t2473 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18658(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2473 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18658_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2465  Dictionary_2_make_pair_m18660_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t742  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18660(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2465  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t742 , const MethodInfo*))Dictionary_2_make_pair_m18660_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t742  Dictionary_2_pick_value_m18662_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t742  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18662(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t742  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t742 , const MethodInfo*))Dictionary_2_pick_value_m18662_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18664_gshared (Dictionary_2_t2473 * __this, KeyValuePair_2U5BU5D_t2740* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18664(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2473 *, KeyValuePair_2U5BU5D_t2740*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18664_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18666_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18666(__this, method) (( void (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_Resize_m18666_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18668_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, ArrayMetadata_t742  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18668(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2473 *, Object_t *, ArrayMetadata_t742 , const MethodInfo*))Dictionary_2_Add_m18668_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18670_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18670(__this, method) (( void (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_Clear_m18670_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18672_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18672(__this, ___key, method) (( bool (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18672_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18674_gshared (Dictionary_2_t2473 * __this, ArrayMetadata_t742  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18674(__this, ___value, method) (( bool (*) (Dictionary_2_t2473 *, ArrayMetadata_t742 , const MethodInfo*))Dictionary_2_ContainsValue_m18674_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18676_gshared (Dictionary_2_t2473 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18676(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2473 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2_GetObjectData_m18676_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18678_gshared (Dictionary_2_t2473 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18678(__this, ___sender, method) (( void (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18678_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18680_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18680(__this, ___key, method) (( bool (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18680_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18682_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, ArrayMetadata_t742 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18682(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2473 *, Object_t *, ArrayMetadata_t742 *, const MethodInfo*))Dictionary_2_TryGetValue_m18682_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2476 * Dictionary_2_get_Values_m18684_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18684(__this, method) (( ValueCollection_t2476 * (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_get_Values_m18684_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18686_gshared (Dictionary_2_t2473 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18686(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18686_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t742  Dictionary_2_ToTValue_m18688_gshared (Dictionary_2_t2473 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18688(__this, ___value, method) (( ArrayMetadata_t742  (*) (Dictionary_2_t2473 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18688_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18690_gshared (Dictionary_2_t2473 * __this, KeyValuePair_2_t2465  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18690(__this, ___pair, method) (( bool (*) (Dictionary_2_t2473 *, KeyValuePair_2_t2465 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18690_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2478  Dictionary_2_GetEnumerator_m18692_gshared (Dictionary_2_t2473 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18692(__this, method) (( Enumerator_t2478  (*) (Dictionary_2_t2473 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18692_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t779  Dictionary_2_U3CCopyToU3Em__0_m18694_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t742  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18694(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t779  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t742 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18694_gshared)(__this /* static, unused */, ___key, ___value, method)
