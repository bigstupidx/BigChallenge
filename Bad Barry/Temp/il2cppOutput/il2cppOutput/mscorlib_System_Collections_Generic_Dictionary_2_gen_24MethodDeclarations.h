﻿#pragma once

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
struct Dictionary_2_t2495;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1967;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t699;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2747;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2748;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t775;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2498;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18881_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18881(__this, method) (( void (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2__ctor_m18881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18883_gshared (Dictionary_2_t2495 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18883(__this, ___comparer, method) (( void (*) (Dictionary_2_t2495 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18883_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18885_gshared (Dictionary_2_t2495 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18885(__this, ___capacity, method) (( void (*) (Dictionary_2_t2495 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18885_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18887_gshared (Dictionary_2_t2495 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18887(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2495 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2__ctor_m18887_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18889_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18889(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18889_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18891_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18891(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2495 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18891_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18893_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18893(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2495 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18893_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18895_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18895(__this, ___key, method) (( bool (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18895_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18897_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18897(__this, ___key, method) (( void (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18897_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18899_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18899(__this, method) (( bool (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18899_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18901_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18901(__this, method) (( Object_t * (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18901_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18903_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18903(__this, method) (( bool (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18903_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18905_gshared (Dictionary_2_t2495 * __this, KeyValuePair_2_t2467  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18905(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2495 *, KeyValuePair_2_t2467 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18905_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18907_gshared (Dictionary_2_t2495 * __this, KeyValuePair_2_t2467  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18907(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2495 *, KeyValuePair_2_t2467 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18907_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18909_gshared (Dictionary_2_t2495 * __this, KeyValuePair_2U5BU5D_t2747* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18909(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2495 *, KeyValuePair_2U5BU5D_t2747*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18909_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18911_gshared (Dictionary_2_t2495 * __this, KeyValuePair_2_t2467  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18911(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2495 *, KeyValuePair_2_t2467 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18911_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18913_gshared (Dictionary_2_t2495 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18913(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2495 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18913_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18915_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18915(__this, method) (( Object_t * (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18915_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18917_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18917(__this, method) (( Object_t* (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18917_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18919_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18919(__this, method) (( Object_t * (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18919_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18921_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18921(__this, method) (( int32_t (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_get_Count_m18921_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t743  Dictionary_2_get_Item_m18923_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18923(__this, ___key, method) (( ObjectMetadata_t743  (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18923_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18925_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, ObjectMetadata_t743  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18925(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2495 *, Object_t *, ObjectMetadata_t743 , const MethodInfo*))Dictionary_2_set_Item_m18925_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18927_gshared (Dictionary_2_t2495 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18927(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2495 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18927_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18929_gshared (Dictionary_2_t2495 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18929(__this, ___size, method) (( void (*) (Dictionary_2_t2495 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18929_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18931_gshared (Dictionary_2_t2495 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18931(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2495 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18931_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2467  Dictionary_2_make_pair_m18933_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t743  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18933(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2467  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t743 , const MethodInfo*))Dictionary_2_make_pair_m18933_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t743  Dictionary_2_pick_value_m18935_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t743  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18935(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t743  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t743 , const MethodInfo*))Dictionary_2_pick_value_m18935_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18937_gshared (Dictionary_2_t2495 * __this, KeyValuePair_2U5BU5D_t2747* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18937(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2495 *, KeyValuePair_2U5BU5D_t2747*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18937_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18939_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18939(__this, method) (( void (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_Resize_m18939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18941_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, ObjectMetadata_t743  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18941(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2495 *, Object_t *, ObjectMetadata_t743 , const MethodInfo*))Dictionary_2_Add_m18941_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18943_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18943(__this, method) (( void (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_Clear_m18943_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18945_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18945(__this, ___key, method) (( bool (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18945_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18947_gshared (Dictionary_2_t2495 * __this, ObjectMetadata_t743  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18947(__this, ___value, method) (( bool (*) (Dictionary_2_t2495 *, ObjectMetadata_t743 , const MethodInfo*))Dictionary_2_ContainsValue_m18947_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18949_gshared (Dictionary_2_t2495 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18949(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2495 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2_GetObjectData_m18949_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18951_gshared (Dictionary_2_t2495 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18951(__this, ___sender, method) (( void (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18951_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18953_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18953(__this, ___key, method) (( bool (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18953_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18955_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, ObjectMetadata_t743 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18955(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2495 *, Object_t *, ObjectMetadata_t743 *, const MethodInfo*))Dictionary_2_TryGetValue_m18955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2498 * Dictionary_2_get_Values_m18957_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18957(__this, method) (( ValueCollection_t2498 * (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_get_Values_m18957_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18959_gshared (Dictionary_2_t2495 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18959(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18959_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t743  Dictionary_2_ToTValue_m18961_gshared (Dictionary_2_t2495 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18961(__this, ___value, method) (( ObjectMetadata_t743  (*) (Dictionary_2_t2495 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18961_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18963_gshared (Dictionary_2_t2495 * __this, KeyValuePair_2_t2467  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18963(__this, ___pair, method) (( bool (*) (Dictionary_2_t2495 *, KeyValuePair_2_t2467 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18963_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2500  Dictionary_2_GetEnumerator_m18965_gshared (Dictionary_2_t2495 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18965(__this, method) (( Enumerator_t2500  (*) (Dictionary_2_t2495 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t779  Dictionary_2_U3CCopyToU3Em__0_m18967_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t743  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18967(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t779  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t743 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18967_gshared)(__this /* static, unused */, ___key, ___value, method)