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
extern "C" void Dictionary_2__ctor_m17706_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17706(__this, method) (( void (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2__ctor_m17706_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17708_gshared (Dictionary_2_t2355 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17708(__this, ___comparer, method) (( void (*) (Dictionary_2_t2355 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17708_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17710_gshared (Dictionary_2_t2355 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17710(__this, ___capacity, method) (( void (*) (Dictionary_2_t2355 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17710_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17712_gshared (Dictionary_2_t2355 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17712(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2355 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m17712_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17714_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17714(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17714_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17716_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17716(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17716_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17718_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17718(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17718_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17720_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17720(__this, ___key, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17720_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17722_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17722(__this, ___key, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17722_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17724_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17724(__this, method) (( bool (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17724_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17726_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17726(__this, method) (( Object_t * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17728_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17728(__this, method) (( bool (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17728_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17730_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17730(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17730_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17732_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17732(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17732_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17734_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2U5BU5D_t2602* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17734(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, KeyValuePair_2U5BU5D_t2602*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17734_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17736_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17736(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17736_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17738_gshared (Dictionary_2_t2355 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17738(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17738_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17740_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17740(__this, method) (( Object_t * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17740_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17742_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17742(__this, method) (( Object_t* (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17742_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17744_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17744(__this, method) (( Object_t * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17744_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17746_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17746(__this, method) (( int32_t (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_get_Count_m17746_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t666  Dictionary_2_get_Item_m17748_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17748(__this, ___key, method) (( ObjectMetadata_t666  (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17748_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17750_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17750(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_set_Item_m17750_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17752_gshared (Dictionary_2_t2355 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17752(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2355 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17752_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17754_gshared (Dictionary_2_t2355 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17754(__this, ___size, method) (( void (*) (Dictionary_2_t2355 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17754_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17756_gshared (Dictionary_2_t2355 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17756(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17756_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2327  Dictionary_2_make_pair_m17758_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17758(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2327  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_make_pair_m17758_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t666  Dictionary_2_pick_value_m17760_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17760(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t666  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_pick_value_m17760_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17762_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2U5BU5D_t2602* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17762(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2355 *, KeyValuePair_2U5BU5D_t2602*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17762_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m17764_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17764(__this, method) (( void (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_Resize_m17764_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17766_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17766(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_Add_m17766_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m17768_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17768(__this, method) (( void (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_Clear_m17768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17770_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17770(__this, ___key, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17770_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17772_gshared (Dictionary_2_t2355 * __this, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17772(__this, ___value, method) (( bool (*) (Dictionary_2_t2355 *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_ContainsValue_m17772_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17774_gshared (Dictionary_2_t2355 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17774(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2355 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m17774_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17776_gshared (Dictionary_2_t2355 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17776(__this, ___sender, method) (( void (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17776_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17778_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17778(__this, ___key, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17778_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17780_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, ObjectMetadata_t666 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17780(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2355 *, Object_t *, ObjectMetadata_t666 *, const MethodInfo*))Dictionary_2_TryGetValue_m17780_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2358 * Dictionary_2_get_Values_m17782_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17782(__this, method) (( ValueCollection_t2358 * (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_get_Values_m17782_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17784_gshared (Dictionary_2_t2355 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17784(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17784_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t666  Dictionary_2_ToTValue_m17786_gshared (Dictionary_2_t2355 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17786(__this, ___value, method) (( ObjectMetadata_t666  (*) (Dictionary_2_t2355 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17786_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17788_gshared (Dictionary_2_t2355 * __this, KeyValuePair_2_t2327  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17788(__this, ___pair, method) (( bool (*) (Dictionary_2_t2355 *, KeyValuePair_2_t2327 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17788_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2360  Dictionary_2_GetEnumerator_m17790_gshared (Dictionary_2_t2355 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17790(__this, method) (( Enumerator_t2360  (*) (Dictionary_2_t2355 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17790_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m17792_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17792(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17792_gshared)(__this /* static, unused */, ___key, ___value, method)
