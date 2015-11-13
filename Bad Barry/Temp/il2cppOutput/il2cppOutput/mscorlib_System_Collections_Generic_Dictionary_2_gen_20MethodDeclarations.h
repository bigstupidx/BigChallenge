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
struct Dictionary_2_t1967;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1966;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t621;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2542;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2543;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1971;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12639_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12639(__this, method) (( void (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2__ctor_m12639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12641_gshared (Dictionary_2_t1967 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12641(__this, ___comparer, method) (( void (*) (Dictionary_2_t1967 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12641_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12643_gshared (Dictionary_2_t1967 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12643(__this, ___capacity, method) (( void (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12643_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12645_gshared (Dictionary_2_t1967 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12645(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1967 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m12645_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12647_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12647(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12649_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12649(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12649_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12651_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12651(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12651_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12653_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12653(__this, ___key, method) (( bool (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12653_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12655_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12655(__this, ___key, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12655_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12657_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12657(__this, method) (( bool (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12657_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12659_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12659(__this, method) (( Object_t * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12659_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12661_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12661(__this, method) (( bool (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12661_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12663_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12663(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12663_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12665_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12665(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12665_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12667_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2U5BU5D_t2542* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12667(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, KeyValuePair_2U5BU5D_t2542*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12667_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12669_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12669(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12669_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12671_gshared (Dictionary_2_t1967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12671(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12671_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12673_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12673(__this, method) (( Object_t * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12673_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12675_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12675(__this, method) (( Object_t* (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12675_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12677_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12677(__this, method) (( Object_t * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12677_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12679_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12679(__this, method) (( int32_t (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_get_Count_m12679_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12681_gshared (Dictionary_2_t1967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12681(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12681_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12683_gshared (Dictionary_2_t1967 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12683(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12683_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12685_gshared (Dictionary_2_t1967 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12685(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1967 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12685_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12687_gshared (Dictionary_2_t1967 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12687(__this, ___size, method) (( void (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12687_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12689_gshared (Dictionary_2_t1967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12689(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12689_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1969  Dictionary_2_make_pair_m12691_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12691(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1969  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12691_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12693_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12693(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12693_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12695_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2U5BU5D_t2542* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12695(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, KeyValuePair_2U5BU5D_t2542*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12695_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12697_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12697(__this, method) (( void (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_Resize_m12697_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12699_gshared (Dictionary_2_t1967 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12699_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12701_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12701(__this, method) (( void (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_Clear_m12701_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12703_gshared (Dictionary_2_t1967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12703(__this, ___key, method) (( bool (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12703_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12705_gshared (Dictionary_2_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12705(__this, ___value, method) (( bool (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12705_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12707_gshared (Dictionary_2_t1967 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12707(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1967 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m12707_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12709_gshared (Dictionary_2_t1967 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12709(__this, ___sender, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12709_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12711_gshared (Dictionary_2_t1967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12711(__this, ___key, method) (( bool (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12711_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12713_gshared (Dictionary_2_t1967 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12713(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1967 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12713_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1971 * Dictionary_2_get_Values_m12714_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12714(__this, method) (( ValueCollection_t1971 * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_get_Values_m12714_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12716_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12716(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12716_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12718_gshared (Dictionary_2_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12718(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12718_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12720_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12720(__this, ___pair, method) (( bool (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12720_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1973  Dictionary_2_GetEnumerator_m12721_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12721(__this, method) (( Enumerator_t1973  (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12721_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m12723_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12723(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12723_gshared)(__this /* static, unused */, ___key, ___value, method)
