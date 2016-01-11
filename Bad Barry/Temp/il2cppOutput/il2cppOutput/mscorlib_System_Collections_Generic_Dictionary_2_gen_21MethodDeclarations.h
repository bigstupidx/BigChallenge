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
struct Dictionary_2_t2070;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1910;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2625;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2626;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t730;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2074;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13669_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13669(__this, method) (( void (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2__ctor_m13669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13670_gshared (Dictionary_2_t2070 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13670(__this, ___comparer, method) (( void (*) (Dictionary_2_t2070 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13670_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13671_gshared (Dictionary_2_t2070 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13671(__this, ___capacity, method) (( void (*) (Dictionary_2_t2070 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13671_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13672_gshared (Dictionary_2_t2070 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13672(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2070 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2__ctor_m13672_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13673_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13673(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13673_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13674_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13674(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2070 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13674_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13675_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13675(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2070 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13675_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13676_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13676(__this, ___key, method) (( bool (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13676_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13677_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13677(__this, ___key, method) (( void (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13677_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13678_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13678(__this, method) (( bool (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13678_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13679_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13679(__this, method) (( Object_t * (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13679_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13680_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13680(__this, method) (( bool (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13680_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13681_gshared (Dictionary_2_t2070 * __this, KeyValuePair_2_t2072  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13681(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2070 *, KeyValuePair_2_t2072 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13681_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13682_gshared (Dictionary_2_t2070 * __this, KeyValuePair_2_t2072  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13682(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2070 *, KeyValuePair_2_t2072 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13682_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13683_gshared (Dictionary_2_t2070 * __this, KeyValuePair_2U5BU5D_t2625* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13683(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2070 *, KeyValuePair_2U5BU5D_t2625*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13683_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13684_gshared (Dictionary_2_t2070 * __this, KeyValuePair_2_t2072  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13684(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2070 *, KeyValuePair_2_t2072 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13684_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13685_gshared (Dictionary_2_t2070 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13685(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2070 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13685_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13686_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13686(__this, method) (( Object_t * (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13686_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13687_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13687(__this, method) (( Object_t* (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13687_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13688_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13688(__this, method) (( Object_t * (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13688_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13689_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13689(__this, method) (( int32_t (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_get_Count_m13689_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13690_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13690(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13690_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13691_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13691(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2070 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13691_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13692_gshared (Dictionary_2_t2070 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13692(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2070 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13692_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13693_gshared (Dictionary_2_t2070 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13693(__this, ___size, method) (( void (*) (Dictionary_2_t2070 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13693_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13694_gshared (Dictionary_2_t2070 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2070 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13694_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2072  Dictionary_2_make_pair_m13695_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13695(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2072  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13695_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13696_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13696(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13696_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13697_gshared (Dictionary_2_t2070 * __this, KeyValuePair_2U5BU5D_t2625* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13697(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2070 *, KeyValuePair_2U5BU5D_t2625*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13697_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13698_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13698(__this, method) (( void (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_Resize_m13698_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13699_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13699(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2070 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13699_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13700_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13700(__this, method) (( void (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_Clear_m13700_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13701_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13701(__this, ___key, method) (( bool (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13701_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13702_gshared (Dictionary_2_t2070 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13702(__this, ___value, method) (( bool (*) (Dictionary_2_t2070 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13702_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13703_gshared (Dictionary_2_t2070 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13703(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2070 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2_GetObjectData_m13703_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13704_gshared (Dictionary_2_t2070 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13704(__this, ___sender, method) (( void (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13704_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13705_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13705(__this, ___key, method) (( bool (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13705_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13706_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13706(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2070 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13706_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2074 * Dictionary_2_get_Values_m13707_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13707(__this, method) (( ValueCollection_t2074 * (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_get_Values_m13707_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13708_gshared (Dictionary_2_t2070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13708(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13708_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13709_gshared (Dictionary_2_t2070 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13709(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2070 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13709_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13710_gshared (Dictionary_2_t2070 * __this, KeyValuePair_2_t2072  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13710(__this, ___pair, method) (( bool (*) (Dictionary_2_t2070 *, KeyValuePair_2_t2072 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13710_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2076  Dictionary_2_GetEnumerator_m13711_gshared (Dictionary_2_t2070 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13711(__this, method) (( Enumerator_t2076  (*) (Dictionary_2_t2070 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13711_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t734  Dictionary_2_U3CCopyToU3Em__0_m13712_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13712(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t734  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13712_gshared)(__this /* static, unused */, ___key, ___value, method)
