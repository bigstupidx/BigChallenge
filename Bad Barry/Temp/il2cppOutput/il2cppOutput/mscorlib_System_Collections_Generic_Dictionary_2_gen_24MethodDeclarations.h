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
struct Dictionary_2_t2479;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t684;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2731;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2732;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t760;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18797_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18797(__this, method) (( void (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2__ctor_m18797_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18799_gshared (Dictionary_2_t2479 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18799(__this, ___comparer, method) (( void (*) (Dictionary_2_t2479 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18799_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18801_gshared (Dictionary_2_t2479 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18801(__this, ___capacity, method) (( void (*) (Dictionary_2_t2479 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18801_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18803_gshared (Dictionary_2_t2479 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18803(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2479 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2__ctor_m18803_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18805_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18805(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18805_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18807_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18807(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2479 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18807_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18809_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18809(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2479 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18809_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18811_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18811(__this, ___key, method) (( bool (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18811_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18813_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18813(__this, ___key, method) (( void (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18813_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18815_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18815(__this, method) (( bool (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18815_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18817_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18817(__this, method) (( Object_t * (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18819_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18819(__this, method) (( bool (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18821_gshared (Dictionary_2_t2479 * __this, KeyValuePair_2_t2451  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18821(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2479 *, KeyValuePair_2_t2451 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18821_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18823_gshared (Dictionary_2_t2479 * __this, KeyValuePair_2_t2451  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18823(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2479 *, KeyValuePair_2_t2451 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18823_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18825_gshared (Dictionary_2_t2479 * __this, KeyValuePair_2U5BU5D_t2731* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18825(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2479 *, KeyValuePair_2U5BU5D_t2731*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18825_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18827_gshared (Dictionary_2_t2479 * __this, KeyValuePair_2_t2451  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18827(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2479 *, KeyValuePair_2_t2451 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18827_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18829_gshared (Dictionary_2_t2479 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18829(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2479 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18829_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18831_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18831(__this, method) (( Object_t * (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18831_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18833_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18833(__this, method) (( Object_t* (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18833_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18835_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18835(__this, method) (( Object_t * (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18837_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18837(__this, method) (( int32_t (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_get_Count_m18837_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t728  Dictionary_2_get_Item_m18839_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18839(__this, ___key, method) (( ObjectMetadata_t728  (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18839_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18841_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, ObjectMetadata_t728  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18841(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2479 *, Object_t *, ObjectMetadata_t728 , const MethodInfo*))Dictionary_2_set_Item_m18841_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18843_gshared (Dictionary_2_t2479 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18843(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2479 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18843_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18845_gshared (Dictionary_2_t2479 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18845(__this, ___size, method) (( void (*) (Dictionary_2_t2479 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18845_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18847_gshared (Dictionary_2_t2479 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18847(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2479 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18847_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2451  Dictionary_2_make_pair_m18849_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t728  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18849(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2451  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t728 , const MethodInfo*))Dictionary_2_make_pair_m18849_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t728  Dictionary_2_pick_value_m18851_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t728  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18851(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t728  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t728 , const MethodInfo*))Dictionary_2_pick_value_m18851_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18853_gshared (Dictionary_2_t2479 * __this, KeyValuePair_2U5BU5D_t2731* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18853(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2479 *, KeyValuePair_2U5BU5D_t2731*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18853_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18855_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18855(__this, method) (( void (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_Resize_m18855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18857_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, ObjectMetadata_t728  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18857(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2479 *, Object_t *, ObjectMetadata_t728 , const MethodInfo*))Dictionary_2_Add_m18857_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18859_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18859(__this, method) (( void (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_Clear_m18859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18861_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18861(__this, ___key, method) (( bool (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18863_gshared (Dictionary_2_t2479 * __this, ObjectMetadata_t728  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18863(__this, ___value, method) (( bool (*) (Dictionary_2_t2479 *, ObjectMetadata_t728 , const MethodInfo*))Dictionary_2_ContainsValue_m18863_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18865_gshared (Dictionary_2_t2479 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18865(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2479 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2_GetObjectData_m18865_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18867_gshared (Dictionary_2_t2479 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18867(__this, ___sender, method) (( void (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18867_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18869_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18869(__this, ___key, method) (( bool (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18869_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18871_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, ObjectMetadata_t728 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18871(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2479 *, Object_t *, ObjectMetadata_t728 *, const MethodInfo*))Dictionary_2_TryGetValue_m18871_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2482 * Dictionary_2_get_Values_m18873_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18873(__this, method) (( ValueCollection_t2482 * (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_get_Values_m18873_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18875_gshared (Dictionary_2_t2479 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18875(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18875_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t728  Dictionary_2_ToTValue_m18877_gshared (Dictionary_2_t2479 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18877(__this, ___value, method) (( ObjectMetadata_t728  (*) (Dictionary_2_t2479 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18877_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18879_gshared (Dictionary_2_t2479 * __this, KeyValuePair_2_t2451  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18879(__this, ___pair, method) (( bool (*) (Dictionary_2_t2479 *, KeyValuePair_2_t2451 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18879_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2484  Dictionary_2_GetEnumerator_m18881_gshared (Dictionary_2_t2479 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18881(__this, method) (( Enumerator_t2484  (*) (Dictionary_2_t2479 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t764  Dictionary_2_U3CCopyToU3Em__0_m18883_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t728  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18883(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t764  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t728 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18883_gshared)(__this /* static, unused */, ___key, ___value, method)
