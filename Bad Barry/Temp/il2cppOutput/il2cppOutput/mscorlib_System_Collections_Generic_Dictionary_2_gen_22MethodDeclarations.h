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
struct Dictionary_2_t1_1198;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1024;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t1_1588;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t1_1589;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_450;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t1_1201;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7792_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7792(__this, method) (( void (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2__ctor_m1_7792_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7794_gshared (Dictionary_2_t1_1198 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7794(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1198 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7794_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7796_gshared (Dictionary_2_t1_1198 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7796(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1198 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7796_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7798_gshared (Dictionary_2_t1_1198 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_506  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7798(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1198 *, SerializationInfo_t1_176 *, StreamingContext_t1_506 , const MethodInfo*))Dictionary_2__ctor_m1_7798_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7800_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7800(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7800_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7802_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7802(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1198 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7802_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7804_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7804(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1198 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7804_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7806_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7806(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7806_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7808_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7808(__this, ___key, method) (( void (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7808_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7810_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7810(__this, method) (( bool (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7810_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7812_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7812(__this, method) (( Object_t * (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7812_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7814_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7814(__this, method) (( bool (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7814_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7816_gshared (Dictionary_2_t1_1198 * __this, KeyValuePair_2_t1_1191  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7816(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1198 *, KeyValuePair_2_t1_1191 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7816_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7818_gshared (Dictionary_2_t1_1198 * __this, KeyValuePair_2_t1_1191  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7818(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1198 *, KeyValuePair_2_t1_1191 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7818_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7820_gshared (Dictionary_2_t1_1198 * __this, KeyValuePair_2U5BU5D_t1_1588* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7820(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1198 *, KeyValuePair_2U5BU5D_t1_1588*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7820_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7822_gshared (Dictionary_2_t1_1198 * __this, KeyValuePair_2_t1_1191  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7822(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1198 *, KeyValuePair_2_t1_1191 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7822_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7824_gshared (Dictionary_2_t1_1198 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7824(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1198 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7824_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7826_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7826(__this, method) (( Object_t * (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7826_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7828_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7828(__this, method) (( Object_t* (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7828_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7830_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7830(__this, method) (( Object_t * (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7830_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7832_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7832(__this, method) (( int32_t (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_get_Count_m1_7832_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t5_6  Dictionary_2_get_Item_m1_7834_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7834(__this, ___key, method) (( ArrayMetadata_t5_6  (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7834_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7836_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7836(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1198 *, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_set_Item_m1_7836_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7838_gshared (Dictionary_2_t1_1198 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7838(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1198 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7838_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7840_gshared (Dictionary_2_t1_1198 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7840(__this, ___size, method) (( void (*) (Dictionary_2_t1_1198 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7840_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7842_gshared (Dictionary_2_t1_1198 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7842(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1198 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7842_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1191  Dictionary_2_make_pair_m1_7844_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7844(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1191  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_make_pair_m1_7844_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t5_6  Dictionary_2_pick_value_m1_7846_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7846(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t5_6  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_pick_value_m1_7846_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7848_gshared (Dictionary_2_t1_1198 * __this, KeyValuePair_2U5BU5D_t1_1588* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7848(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1198 *, KeyValuePair_2U5BU5D_t1_1588*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7848_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m1_7850_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7850(__this, method) (( void (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_Resize_m1_7850_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7852_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7852(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1198 *, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_Add_m1_7852_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m1_7854_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7854(__this, method) (( void (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_Clear_m1_7854_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7856_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7856(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7856_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7858_gshared (Dictionary_2_t1_1198 * __this, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7858(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1198 *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_ContainsValue_m1_7858_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7860_gshared (Dictionary_2_t1_1198 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_506  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7860(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1198 *, SerializationInfo_t1_176 *, StreamingContext_t1_506 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7860_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7862_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7862(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7862_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7864_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7864(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7864_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7866_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, ArrayMetadata_t5_6 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7866(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1198 *, Object_t *, ArrayMetadata_t5_6 *, const MethodInfo*))Dictionary_2_TryGetValue_m1_7866_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t1_1201 * Dictionary_2_get_Values_m1_7868_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7868(__this, method) (( ValueCollection_t1_1201 * (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_get_Values_m1_7868_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7870_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7870(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7870_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t5_6  Dictionary_2_ToTValue_m1_7872_gshared (Dictionary_2_t1_1198 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7872(__this, ___value, method) (( ArrayMetadata_t5_6  (*) (Dictionary_2_t1_1198 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7872_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7874_gshared (Dictionary_2_t1_1198 * __this, KeyValuePair_2_t1_1191  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7874(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1198 *, KeyValuePair_2_t1_1191 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7874_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t1_1203  Dictionary_2_GetEnumerator_m1_7876_gshared (Dictionary_2_t1_1198 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7876(__this, method) (( Enumerator_t1_1203  (*) (Dictionary_2_t1_1198 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7876_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_7878_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t5_6  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7878(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t5_6 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7878_gshared)(__this /* static, unused */, ___key, ___value, method)
