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
struct Dictionary_2_t2476;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1949;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t681;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2728;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2729;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t757;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2479;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18794_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18794(__this, method) (( void (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2__ctor_m18794_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18796_gshared (Dictionary_2_t2476 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18796(__this, ___comparer, method) (( void (*) (Dictionary_2_t2476 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18796_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18798_gshared (Dictionary_2_t2476 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18798(__this, ___capacity, method) (( void (*) (Dictionary_2_t2476 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18798_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18800_gshared (Dictionary_2_t2476 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18800(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2476 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2__ctor_m18800_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18802_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18802(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18802_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18804_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18804(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2476 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18804_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18806_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18806(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2476 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18806_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18808_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18808(__this, ___key, method) (( bool (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18810_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18810(__this, ___key, method) (( void (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18812_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18812(__this, method) (( bool (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18814_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18814(__this, method) (( Object_t * (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18816_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18816(__this, method) (( bool (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18818_gshared (Dictionary_2_t2476 * __this, KeyValuePair_2_t2448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18818(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2476 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18818_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18820_gshared (Dictionary_2_t2476 * __this, KeyValuePair_2_t2448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18820(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2476 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18820_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18822_gshared (Dictionary_2_t2476 * __this, KeyValuePair_2U5BU5D_t2728* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18822(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2476 *, KeyValuePair_2U5BU5D_t2728*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18822_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18824_gshared (Dictionary_2_t2476 * __this, KeyValuePair_2_t2448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18824(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2476 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18824_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18826_gshared (Dictionary_2_t2476 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2476 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18826_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18828_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18828(__this, method) (( Object_t * (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18828_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18830_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18830(__this, method) (( Object_t* (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18830_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18832_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18832(__this, method) (( Object_t * (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18834_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18834(__this, method) (( int32_t (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_get_Count_m18834_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t725  Dictionary_2_get_Item_m18836_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18836(__this, ___key, method) (( ObjectMetadata_t725  (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18838_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, ObjectMetadata_t725  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18838(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2476 *, Object_t *, ObjectMetadata_t725 , const MethodInfo*))Dictionary_2_set_Item_m18838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18840_gshared (Dictionary_2_t2476 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18840(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2476 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18840_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18842_gshared (Dictionary_2_t2476 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18842(__this, ___size, method) (( void (*) (Dictionary_2_t2476 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18842_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18844_gshared (Dictionary_2_t2476 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18844(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2476 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18844_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2448  Dictionary_2_make_pair_m18846_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t725  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18846(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2448  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t725 , const MethodInfo*))Dictionary_2_make_pair_m18846_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t725  Dictionary_2_pick_value_m18848_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t725  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18848(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t725  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t725 , const MethodInfo*))Dictionary_2_pick_value_m18848_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18850_gshared (Dictionary_2_t2476 * __this, KeyValuePair_2U5BU5D_t2728* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18850(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2476 *, KeyValuePair_2U5BU5D_t2728*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18850_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18852_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18852(__this, method) (( void (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_Resize_m18852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18854_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, ObjectMetadata_t725  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18854(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2476 *, Object_t *, ObjectMetadata_t725 , const MethodInfo*))Dictionary_2_Add_m18854_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18856_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18856(__this, method) (( void (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_Clear_m18856_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18858_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18858(__this, ___key, method) (( bool (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18858_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18860_gshared (Dictionary_2_t2476 * __this, ObjectMetadata_t725  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18860(__this, ___value, method) (( bool (*) (Dictionary_2_t2476 *, ObjectMetadata_t725 , const MethodInfo*))Dictionary_2_ContainsValue_m18860_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18862_gshared (Dictionary_2_t2476 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18862(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2476 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2_GetObjectData_m18862_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18864_gshared (Dictionary_2_t2476 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18864(__this, ___sender, method) (( void (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18864_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18866_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18866(__this, ___key, method) (( bool (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18866_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18868_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, ObjectMetadata_t725 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18868(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2476 *, Object_t *, ObjectMetadata_t725 *, const MethodInfo*))Dictionary_2_TryGetValue_m18868_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2479 * Dictionary_2_get_Values_m18870_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18870(__this, method) (( ValueCollection_t2479 * (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_get_Values_m18870_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18872_gshared (Dictionary_2_t2476 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18872(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18872_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t725  Dictionary_2_ToTValue_m18874_gshared (Dictionary_2_t2476 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18874(__this, ___value, method) (( ObjectMetadata_t725  (*) (Dictionary_2_t2476 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18874_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18876_gshared (Dictionary_2_t2476 * __this, KeyValuePair_2_t2448  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18876(__this, ___pair, method) (( bool (*) (Dictionary_2_t2476 *, KeyValuePair_2_t2448 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18876_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2481  Dictionary_2_GetEnumerator_m18878_gshared (Dictionary_2_t2476 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18878(__this, method) (( Enumerator_t2481  (*) (Dictionary_2_t2476 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18878_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t761  Dictionary_2_U3CCopyToU3Em__0_m18880_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t725  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18880(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t761  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t725 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18880_gshared)(__this /* static, unused */, ___key, ___value, method)
