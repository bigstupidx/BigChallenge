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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2021;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1859;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2573;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2574;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t717;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2025;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13194_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13194(__this, method) (( void (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2__ctor_m13194_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13195_gshared (Dictionary_2_t2021 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13195(__this, ___comparer, method) (( void (*) (Dictionary_2_t2021 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13195_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13196_gshared (Dictionary_2_t2021 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13196(__this, ___capacity, method) (( void (*) (Dictionary_2_t2021 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13196_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13197_gshared (Dictionary_2_t2021 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13197(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2021 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2__ctor_m13197_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13198_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13198(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13198_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13199_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13199(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2021 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13199_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13200_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13200(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2021 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13200_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13201_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13201(__this, ___key, method) (( bool (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13201_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13202_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13202(__this, ___key, method) (( void (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13202_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13203_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13203(__this, method) (( bool (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13203_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13204_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13204(__this, method) (( Object_t * (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13204_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13205_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13205(__this, method) (( bool (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13205_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13206_gshared (Dictionary_2_t2021 * __this, KeyValuePair_2_t2023  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13206(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2021 *, KeyValuePair_2_t2023 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13206_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13207_gshared (Dictionary_2_t2021 * __this, KeyValuePair_2_t2023  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13207(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2021 *, KeyValuePair_2_t2023 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13207_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13208_gshared (Dictionary_2_t2021 * __this, KeyValuePair_2U5BU5D_t2573* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13208(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2021 *, KeyValuePair_2U5BU5D_t2573*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13208_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13209_gshared (Dictionary_2_t2021 * __this, KeyValuePair_2_t2023  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13209(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2021 *, KeyValuePair_2_t2023 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13209_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13210_gshared (Dictionary_2_t2021 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13210(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2021 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13210_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13211_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13211(__this, method) (( Object_t * (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13211_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13212_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13212(__this, method) (( Object_t* (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13212_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13213_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13213(__this, method) (( Object_t * (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13213_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13214_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13214(__this, method) (( int32_t (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_get_Count_m13214_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13215_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13215(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13215_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13216_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13216(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2021 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13216_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13217_gshared (Dictionary_2_t2021 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13217(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2021 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13217_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13218_gshared (Dictionary_2_t2021 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13218(__this, ___size, method) (( void (*) (Dictionary_2_t2021 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13218_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13219_gshared (Dictionary_2_t2021 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13219(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2021 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13219_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2023  Dictionary_2_make_pair_m13220_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13220(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2023  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13220_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13221_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13221(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13221_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13222_gshared (Dictionary_2_t2021 * __this, KeyValuePair_2U5BU5D_t2573* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13222(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2021 *, KeyValuePair_2U5BU5D_t2573*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13222_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13223_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13223(__this, method) (( void (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_Resize_m13223_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13224_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13224(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2021 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13224_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13225_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13225(__this, method) (( void (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_Clear_m13225_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13226_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13226(__this, ___key, method) (( bool (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13226_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13227_gshared (Dictionary_2_t2021 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13227(__this, ___value, method) (( bool (*) (Dictionary_2_t2021 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13227_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13228_gshared (Dictionary_2_t2021 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13228(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2021 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2_GetObjectData_m13228_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13229_gshared (Dictionary_2_t2021 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13229(__this, ___sender, method) (( void (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13229_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13230_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13230(__this, ___key, method) (( bool (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13230_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13231_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13231(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2021 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13231_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2025 * Dictionary_2_get_Values_m13232_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13232(__this, method) (( ValueCollection_t2025 * (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_get_Values_m13232_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13233_gshared (Dictionary_2_t2021 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13233(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13233_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13234_gshared (Dictionary_2_t2021 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13234(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2021 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13234_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13235_gshared (Dictionary_2_t2021 * __this, KeyValuePair_2_t2023  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13235(__this, ___pair, method) (( bool (*) (Dictionary_2_t2021 *, KeyValuePair_2_t2023 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13235_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2027  Dictionary_2_GetEnumerator_m13236_gshared (Dictionary_2_t2021 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13236(__this, method) (( Enumerator_t2027  (*) (Dictionary_2_t2021 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13236_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t721  Dictionary_2_U3CCopyToU3Em__0_m13237_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13237(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t721  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13237_gshared)(__this /* static, unused */, ___key, ___value, method)
