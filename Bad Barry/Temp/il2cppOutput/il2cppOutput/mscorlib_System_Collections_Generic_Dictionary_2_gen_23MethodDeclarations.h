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
struct Dictionary_2_t2384;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1859;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2631;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2632;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t717;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2387;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m17902_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17902(__this, method) (( void (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2__ctor_m17902_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17904_gshared (Dictionary_2_t2384 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17904(__this, ___comparer, method) (( void (*) (Dictionary_2_t2384 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17904_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17906_gshared (Dictionary_2_t2384 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17906(__this, ___capacity, method) (( void (*) (Dictionary_2_t2384 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17906_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17908_gshared (Dictionary_2_t2384 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17908(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2384 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2__ctor_m17908_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17910_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17910(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17910_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17912_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17912(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17912_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17914_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17914(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17914_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17916_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17916(__this, ___key, method) (( bool (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17916_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17918_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17918(__this, ___key, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17918_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17920_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17920(__this, method) (( bool (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17920_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17922_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17922(__this, method) (( Object_t * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17924_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17924(__this, method) (( bool (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17926_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2356  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17926(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2356 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17926_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17928_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2356  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17928(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2356 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17928_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17930_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2U5BU5D_t2631* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17930(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, KeyValuePair_2U5BU5D_t2631*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17930_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17932_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2356  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17932(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2356 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17932_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17934_gshared (Dictionary_2_t2384 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17934(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17934_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17936_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17936(__this, method) (( Object_t * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17936_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17938_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17938(__this, method) (( Object_t* (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17938_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17940_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17940(__this, method) (( Object_t * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17940_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17942_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17942(__this, method) (( int32_t (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_get_Count_m17942_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t685  Dictionary_2_get_Item_m17944_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17944(__this, ___key, method) (( ObjectMetadata_t685  (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17944_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17946_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, ObjectMetadata_t685  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17946(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, ObjectMetadata_t685 , const MethodInfo*))Dictionary_2_set_Item_m17946_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17948_gshared (Dictionary_2_t2384 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17948(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2384 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17948_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17950_gshared (Dictionary_2_t2384 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17950(__this, ___size, method) (( void (*) (Dictionary_2_t2384 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17950_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17952_gshared (Dictionary_2_t2384 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17952(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17952_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2356  Dictionary_2_make_pair_m17954_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t685  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17954(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2356  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t685 , const MethodInfo*))Dictionary_2_make_pair_m17954_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t685  Dictionary_2_pick_value_m17956_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t685  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17956(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t685  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t685 , const MethodInfo*))Dictionary_2_pick_value_m17956_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17958_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2U5BU5D_t2631* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17958(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, KeyValuePair_2U5BU5D_t2631*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17958_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m17960_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17960(__this, method) (( void (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_Resize_m17960_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17962_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, ObjectMetadata_t685  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17962(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, ObjectMetadata_t685 , const MethodInfo*))Dictionary_2_Add_m17962_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m17964_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17964(__this, method) (( void (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_Clear_m17964_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17966_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17966(__this, ___key, method) (( bool (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17966_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17968_gshared (Dictionary_2_t2384 * __this, ObjectMetadata_t685  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17968(__this, ___value, method) (( bool (*) (Dictionary_2_t2384 *, ObjectMetadata_t685 , const MethodInfo*))Dictionary_2_ContainsValue_m17968_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17970_gshared (Dictionary_2_t2384 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17970(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2384 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2_GetObjectData_m17970_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17972_gshared (Dictionary_2_t2384 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17972(__this, ___sender, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17972_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17974_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17974(__this, ___key, method) (( bool (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17974_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17976_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, ObjectMetadata_t685 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17976(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2384 *, Object_t *, ObjectMetadata_t685 *, const MethodInfo*))Dictionary_2_TryGetValue_m17976_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2387 * Dictionary_2_get_Values_m17978_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17978(__this, method) (( ValueCollection_t2387 * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_get_Values_m17978_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17980_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17980(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17980_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t685  Dictionary_2_ToTValue_m17982_gshared (Dictionary_2_t2384 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17982(__this, ___value, method) (( ObjectMetadata_t685  (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17982_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17984_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2356  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17984(__this, ___pair, method) (( bool (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2356 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17984_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2389  Dictionary_2_GetEnumerator_m17986_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17986(__this, method) (( Enumerator_t2389  (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17986_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t721  Dictionary_2_U3CCopyToU3Em__0_m17988_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t685  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17988(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t721  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t685 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17988_gshared)(__this /* static, unused */, ___key, ___value, method)
