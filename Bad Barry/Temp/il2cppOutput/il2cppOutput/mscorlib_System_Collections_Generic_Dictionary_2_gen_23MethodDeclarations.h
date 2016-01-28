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
struct Dictionary_2_t2454;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1949;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t681;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2721;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2722;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t757;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2457;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18521_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18521(__this, method) (( void (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2__ctor_m18521_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18523_gshared (Dictionary_2_t2454 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18523(__this, ___comparer, method) (( void (*) (Dictionary_2_t2454 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18523_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18525_gshared (Dictionary_2_t2454 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18525(__this, ___capacity, method) (( void (*) (Dictionary_2_t2454 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18525_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18527_gshared (Dictionary_2_t2454 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18527(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2454 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2__ctor_m18527_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18529_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18529(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18529_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18531_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18531(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18531_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18533_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18533(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18533_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18535_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18535(__this, ___key, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18535_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18537_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18537(__this, ___key, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18537_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18539_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18539(__this, method) (( bool (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18541_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18541(__this, method) (( Object_t * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18541_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18543_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18543(__this, method) (( bool (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18545_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2446  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18545(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2446 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18545_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18547_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2446  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18547(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2446 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18547_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18549_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18549(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18549_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18551_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2446  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18551(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2446 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18551_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18553_gshared (Dictionary_2_t2454 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18553(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18553_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18555_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18555(__this, method) (( Object_t * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18555_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18557_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18557(__this, method) (( Object_t* (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18557_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18559_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18559(__this, method) (( Object_t * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18559_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18561_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18561(__this, method) (( int32_t (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_get_Count_m18561_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t724  Dictionary_2_get_Item_m18563_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18563(__this, ___key, method) (( ArrayMetadata_t724  (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18563_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18565_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, ArrayMetadata_t724  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18565(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, ArrayMetadata_t724 , const MethodInfo*))Dictionary_2_set_Item_m18565_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18567_gshared (Dictionary_2_t2454 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18567(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2454 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18567_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18569_gshared (Dictionary_2_t2454 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18569(__this, ___size, method) (( void (*) (Dictionary_2_t2454 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18569_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18571_gshared (Dictionary_2_t2454 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18571(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18571_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2446  Dictionary_2_make_pair_m18573_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t724  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18573(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2446  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t724 , const MethodInfo*))Dictionary_2_make_pair_m18573_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t724  Dictionary_2_pick_value_m18575_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t724  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18575(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t724  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t724 , const MethodInfo*))Dictionary_2_pick_value_m18575_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18577_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18577(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18577_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18579_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18579(__this, method) (( void (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_Resize_m18579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18581_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, ArrayMetadata_t724  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18581(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, ArrayMetadata_t724 , const MethodInfo*))Dictionary_2_Add_m18581_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18583_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18583(__this, method) (( void (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_Clear_m18583_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18585_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18585(__this, ___key, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18585_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18587_gshared (Dictionary_2_t2454 * __this, ArrayMetadata_t724  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18587(__this, ___value, method) (( bool (*) (Dictionary_2_t2454 *, ArrayMetadata_t724 , const MethodInfo*))Dictionary_2_ContainsValue_m18587_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18589_gshared (Dictionary_2_t2454 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18589(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2454 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2_GetObjectData_m18589_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18591_gshared (Dictionary_2_t2454 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18591(__this, ___sender, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18591_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18593_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18593(__this, ___key, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18593_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18595_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, ArrayMetadata_t724 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18595(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, ArrayMetadata_t724 *, const MethodInfo*))Dictionary_2_TryGetValue_m18595_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2457 * Dictionary_2_get_Values_m18597_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18597(__this, method) (( ValueCollection_t2457 * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_get_Values_m18597_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18599_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18599(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18599_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t724  Dictionary_2_ToTValue_m18601_gshared (Dictionary_2_t2454 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18601(__this, ___value, method) (( ArrayMetadata_t724  (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18601_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18603_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2446  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18603(__this, ___pair, method) (( bool (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2446 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18603_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2459  Dictionary_2_GetEnumerator_m18605_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18605(__this, method) (( Enumerator_t2459  (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18605_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t761  Dictionary_2_U3CCopyToU3Em__0_m18607_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t724  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18607(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t761  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t724 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18607_gshared)(__this /* static, unused */, ___key, ___value, method)
