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
struct Dictionary_2_t2362;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1859;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2624;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2625;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t717;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2365;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m17629_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17629(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2__ctor_m17629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17631_gshared (Dictionary_2_t2362 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17631(__this, ___comparer, method) (( void (*) (Dictionary_2_t2362 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17631_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17633_gshared (Dictionary_2_t2362 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17633(__this, ___capacity, method) (( void (*) (Dictionary_2_t2362 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17633_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17635_gshared (Dictionary_2_t2362 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17635(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2362 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2__ctor_m17635_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17637_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17637(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17637_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17639_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17639(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17639_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17641_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17641(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17641_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17643_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17643(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17643_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17645_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17645(__this, ___key, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17645_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17647_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17647(__this, method) (( bool (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17647_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17649_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17649(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17649_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17651_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17651(__this, method) (( bool (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17653_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2354  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17653(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17653_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17655_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2354  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17655(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17655_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17657_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2U5BU5D_t2624* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17657(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2U5BU5D_t2624*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17657_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17659_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2354  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17659(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17659_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17661_gshared (Dictionary_2_t2362 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17661(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17661_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17663_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17663(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17663_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17665_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17665(__this, method) (( Object_t* (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17665_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17667_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17667(__this, method) (( Object_t * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17667_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17669_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17669(__this, method) (( int32_t (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Count_m17669_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t684  Dictionary_2_get_Item_m17671_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17671(__this, ___key, method) (( ArrayMetadata_t684  (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17671_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17673_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, ArrayMetadata_t684  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17673(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, ArrayMetadata_t684 , const MethodInfo*))Dictionary_2_set_Item_m17673_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17675_gshared (Dictionary_2_t2362 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17675(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2362 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17675_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17677_gshared (Dictionary_2_t2362 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17677(__this, ___size, method) (( void (*) (Dictionary_2_t2362 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17677_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17679_gshared (Dictionary_2_t2362 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17679(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17679_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2354  Dictionary_2_make_pair_m17681_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t684  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17681(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2354  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t684 , const MethodInfo*))Dictionary_2_make_pair_m17681_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t684  Dictionary_2_pick_value_m17683_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t684  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17683(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t684  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t684 , const MethodInfo*))Dictionary_2_pick_value_m17683_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17685_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2U5BU5D_t2624* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17685(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2362 *, KeyValuePair_2U5BU5D_t2624*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17685_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m17687_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17687(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_Resize_m17687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17689_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, ArrayMetadata_t684  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17689(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, ArrayMetadata_t684 , const MethodInfo*))Dictionary_2_Add_m17689_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m17691_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17691(__this, method) (( void (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_Clear_m17691_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17693_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17693(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17693_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17695_gshared (Dictionary_2_t2362 * __this, ArrayMetadata_t684  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17695(__this, ___value, method) (( bool (*) (Dictionary_2_t2362 *, ArrayMetadata_t684 , const MethodInfo*))Dictionary_2_ContainsValue_m17695_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17697_gshared (Dictionary_2_t2362 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17697(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2362 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2_GetObjectData_m17697_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17699_gshared (Dictionary_2_t2362 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17699(__this, ___sender, method) (( void (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17699_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17701_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17701(__this, ___key, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17701_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17703_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, ArrayMetadata_t684 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17703(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2362 *, Object_t *, ArrayMetadata_t684 *, const MethodInfo*))Dictionary_2_TryGetValue_m17703_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2365 * Dictionary_2_get_Values_m17705_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17705(__this, method) (( ValueCollection_t2365 * (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_get_Values_m17705_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17707_gshared (Dictionary_2_t2362 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17707(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17707_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t684  Dictionary_2_ToTValue_m17709_gshared (Dictionary_2_t2362 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17709(__this, ___value, method) (( ArrayMetadata_t684  (*) (Dictionary_2_t2362 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17709_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17711_gshared (Dictionary_2_t2362 * __this, KeyValuePair_2_t2354  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17711(__this, ___pair, method) (( bool (*) (Dictionary_2_t2362 *, KeyValuePair_2_t2354 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17711_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2367  Dictionary_2_GetEnumerator_m17713_gshared (Dictionary_2_t2362 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17713(__this, method) (( Enumerator_t2367  (*) (Dictionary_2_t2362 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17713_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t721  Dictionary_2_U3CCopyToU3Em__0_m17715_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t684  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17715(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t721  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t684 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17715_gshared)(__this /* static, unused */, ___key, ___value, method)
