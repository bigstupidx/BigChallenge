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
struct Dictionary_2_t2088;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2087;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t681;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2668;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2669;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t757;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2092;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13669_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13669(__this, method) (( void (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2__ctor_m13669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13671_gshared (Dictionary_2_t2088 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13671(__this, ___comparer, method) (( void (*) (Dictionary_2_t2088 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13671_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13673_gshared (Dictionary_2_t2088 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13673(__this, ___capacity, method) (( void (*) (Dictionary_2_t2088 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13673_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13675_gshared (Dictionary_2_t2088 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13675(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2088 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2__ctor_m13675_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13677_gshared (Dictionary_2_t2088 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13677(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2088 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13677_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13679_gshared (Dictionary_2_t2088 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13679(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2088 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13679_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13681_gshared (Dictionary_2_t2088 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13681(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2088 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13681_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13683_gshared (Dictionary_2_t2088 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13683(__this, ___key, method) (( bool (*) (Dictionary_2_t2088 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13683_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13685_gshared (Dictionary_2_t2088 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13685(__this, ___key, method) (( void (*) (Dictionary_2_t2088 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13685_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13687_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13687(__this, method) (( bool (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13689_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13689(__this, method) (( Object_t * (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13689_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13691_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13691(__this, method) (( bool (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13691_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13693_gshared (Dictionary_2_t2088 * __this, KeyValuePair_2_t2090  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13693(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2088 *, KeyValuePair_2_t2090 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13693_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13695_gshared (Dictionary_2_t2088 * __this, KeyValuePair_2_t2090  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13695(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2088 *, KeyValuePair_2_t2090 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13695_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13697_gshared (Dictionary_2_t2088 * __this, KeyValuePair_2U5BU5D_t2668* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13697(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2088 *, KeyValuePair_2U5BU5D_t2668*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13697_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13699_gshared (Dictionary_2_t2088 * __this, KeyValuePair_2_t2090  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13699(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2088 *, KeyValuePair_2_t2090 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13699_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13701_gshared (Dictionary_2_t2088 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13701(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2088 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13701_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13703_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13703(__this, method) (( Object_t * (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13703_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13705_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13705(__this, method) (( Object_t* (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13705_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13707_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13707(__this, method) (( Object_t * (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13707_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13709_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13709(__this, method) (( int32_t (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_get_Count_m13709_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13711_gshared (Dictionary_2_t2088 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13711(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2088 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13711_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13713_gshared (Dictionary_2_t2088 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13713(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2088 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13713_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13715_gshared (Dictionary_2_t2088 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13715(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2088 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13715_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13717_gshared (Dictionary_2_t2088 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13717(__this, ___size, method) (( void (*) (Dictionary_2_t2088 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13717_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13719_gshared (Dictionary_2_t2088 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13719(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2088 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13719_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2090  Dictionary_2_make_pair_m13721_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13721(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2090  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13721_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13723_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13723(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13723_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13725_gshared (Dictionary_2_t2088 * __this, KeyValuePair_2U5BU5D_t2668* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13725(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2088 *, KeyValuePair_2U5BU5D_t2668*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13725_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13727_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13727(__this, method) (( void (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_Resize_m13727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13729_gshared (Dictionary_2_t2088 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13729(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2088 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13729_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13731_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13731(__this, method) (( void (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_Clear_m13731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13733_gshared (Dictionary_2_t2088 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13733(__this, ___key, method) (( bool (*) (Dictionary_2_t2088 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13733_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13735_gshared (Dictionary_2_t2088 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13735(__this, ___value, method) (( bool (*) (Dictionary_2_t2088 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13735_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13737_gshared (Dictionary_2_t2088 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13737(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2088 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2_GetObjectData_m13737_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13739_gshared (Dictionary_2_t2088 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13739(__this, ___sender, method) (( void (*) (Dictionary_2_t2088 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13739_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13741_gshared (Dictionary_2_t2088 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13741(__this, ___key, method) (( bool (*) (Dictionary_2_t2088 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13741_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13743_gshared (Dictionary_2_t2088 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13743(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2088 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13743_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2092 * Dictionary_2_get_Values_m13744_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13744(__this, method) (( ValueCollection_t2092 * (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_get_Values_m13744_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13746_gshared (Dictionary_2_t2088 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13746(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2088 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13746_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13748_gshared (Dictionary_2_t2088 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13748(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2088 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13748_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13750_gshared (Dictionary_2_t2088 * __this, KeyValuePair_2_t2090  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13750(__this, ___pair, method) (( bool (*) (Dictionary_2_t2088 *, KeyValuePair_2_t2090 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13750_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2094  Dictionary_2_GetEnumerator_m13751_gshared (Dictionary_2_t2088 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13751(__this, method) (( Enumerator_t2094  (*) (Dictionary_2_t2088 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13751_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t761  Dictionary_2_U3CCopyToU3Em__0_m13753_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13753(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t761  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13753_gshared)(__this /* static, unused */, ___key, ___value, method)
