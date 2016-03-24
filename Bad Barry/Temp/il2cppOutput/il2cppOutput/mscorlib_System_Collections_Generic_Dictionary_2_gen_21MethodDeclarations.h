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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2107;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2106;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t699;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2687;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2688;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t775;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13756_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13756(__this, method) (( void (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2__ctor_m13756_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13758_gshared (Dictionary_2_t2107 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13758(__this, ___comparer, method) (( void (*) (Dictionary_2_t2107 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13758_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13760_gshared (Dictionary_2_t2107 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13760(__this, ___capacity, method) (( void (*) (Dictionary_2_t2107 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13760_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13762_gshared (Dictionary_2_t2107 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13762(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2107 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2__ctor_m13762_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13764_gshared (Dictionary_2_t2107 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13764(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2107 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13764_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13766_gshared (Dictionary_2_t2107 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13766(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2107 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13766_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13768_gshared (Dictionary_2_t2107 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13768(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2107 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13768_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13770_gshared (Dictionary_2_t2107 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13770(__this, ___key, method) (( bool (*) (Dictionary_2_t2107 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13770_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13772_gshared (Dictionary_2_t2107 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13772(__this, ___key, method) (( void (*) (Dictionary_2_t2107 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13772_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13774_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13774(__this, method) (( bool (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13774_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13776_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13776(__this, method) (( Object_t * (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13776_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13778_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13778(__this, method) (( bool (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13780_gshared (Dictionary_2_t2107 * __this, KeyValuePair_2_t2109  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13780(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2107 *, KeyValuePair_2_t2109 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13780_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13782_gshared (Dictionary_2_t2107 * __this, KeyValuePair_2_t2109  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13782(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2107 *, KeyValuePair_2_t2109 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13782_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13784_gshared (Dictionary_2_t2107 * __this, KeyValuePair_2U5BU5D_t2687* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13784(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2107 *, KeyValuePair_2U5BU5D_t2687*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13784_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13786_gshared (Dictionary_2_t2107 * __this, KeyValuePair_2_t2109  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13786(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2107 *, KeyValuePair_2_t2109 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13786_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13788_gshared (Dictionary_2_t2107 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13788(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2107 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13788_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13790_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13790(__this, method) (( Object_t * (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13790_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13792_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13792(__this, method) (( Object_t* (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13792_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13794_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13794(__this, method) (( Object_t * (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13794_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13796_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13796(__this, method) (( int32_t (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_get_Count_m13796_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13798_gshared (Dictionary_2_t2107 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13798(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2107 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13798_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13800_gshared (Dictionary_2_t2107 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13800(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2107 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13800_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13802_gshared (Dictionary_2_t2107 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13802(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2107 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13802_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13804_gshared (Dictionary_2_t2107 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13804(__this, ___size, method) (( void (*) (Dictionary_2_t2107 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13804_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13806_gshared (Dictionary_2_t2107 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13806(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2107 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13806_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2109  Dictionary_2_make_pair_m13808_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13808(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2109  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13808_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13810_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13810(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13810_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13812_gshared (Dictionary_2_t2107 * __this, KeyValuePair_2U5BU5D_t2687* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13812(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2107 *, KeyValuePair_2U5BU5D_t2687*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13812_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13814_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13814(__this, method) (( void (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_Resize_m13814_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13816_gshared (Dictionary_2_t2107 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13816(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2107 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13816_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13818_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13818(__this, method) (( void (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_Clear_m13818_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13820_gshared (Dictionary_2_t2107 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13820(__this, ___key, method) (( bool (*) (Dictionary_2_t2107 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13820_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13822_gshared (Dictionary_2_t2107 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13822(__this, ___value, method) (( bool (*) (Dictionary_2_t2107 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13822_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13824_gshared (Dictionary_2_t2107 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13824(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2107 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2_GetObjectData_m13824_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13826_gshared (Dictionary_2_t2107 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13826(__this, ___sender, method) (( void (*) (Dictionary_2_t2107 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13826_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13828_gshared (Dictionary_2_t2107 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13828(__this, ___key, method) (( bool (*) (Dictionary_2_t2107 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13828_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13830_gshared (Dictionary_2_t2107 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13830(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2107 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13830_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2111 * Dictionary_2_get_Values_m13831_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13831(__this, method) (( ValueCollection_t2111 * (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_get_Values_m13831_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13833_gshared (Dictionary_2_t2107 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13833(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2107 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13833_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13835_gshared (Dictionary_2_t2107 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13835(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2107 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13835_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13837_gshared (Dictionary_2_t2107 * __this, KeyValuePair_2_t2109  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13837(__this, ___pair, method) (( bool (*) (Dictionary_2_t2107 *, KeyValuePair_2_t2109 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13837_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2113  Dictionary_2_GetEnumerator_m13838_gshared (Dictionary_2_t2107 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13838(__this, method) (( Enumerator_t2113  (*) (Dictionary_2_t2107 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13838_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t779  Dictionary_2_U3CCopyToU3Em__0_m13840_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13840(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t779  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13840_gshared)(__this /* static, unused */, ___key, ___value, method)
