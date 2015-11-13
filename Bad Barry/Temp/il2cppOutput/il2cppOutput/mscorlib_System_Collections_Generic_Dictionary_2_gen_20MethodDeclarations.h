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
extern "C" void Dictionary_2__ctor_m12640_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12640(__this, method) (( void (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2__ctor_m12640_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12642_gshared (Dictionary_2_t1967 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12642(__this, ___comparer, method) (( void (*) (Dictionary_2_t1967 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12642_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12644_gshared (Dictionary_2_t1967 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12644(__this, ___capacity, method) (( void (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12644_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12646_gshared (Dictionary_2_t1967 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12646(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1967 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m12646_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12648_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12648(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12648_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12650_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12650(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12650_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12652_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12652(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12652_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12654_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12654(__this, ___key, method) (( bool (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12654_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12656_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12656(__this, ___key, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12656_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12658_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12658(__this, method) (( bool (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12658_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12660_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12660(__this, method) (( Object_t * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12662_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12662(__this, method) (( bool (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12662_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12664_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12664(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12664_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12666_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12666(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12666_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12668_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2U5BU5D_t2542* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12668(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, KeyValuePair_2U5BU5D_t2542*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12668_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12670_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12670(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12670_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12672_gshared (Dictionary_2_t1967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12672(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12672_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12674_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12674(__this, method) (( Object_t * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12674_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12676_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12676(__this, method) (( Object_t* (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12676_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12678_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12678(__this, method) (( Object_t * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12678_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12680_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12680(__this, method) (( int32_t (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_get_Count_m12680_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12682_gshared (Dictionary_2_t1967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12682(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12682_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12684_gshared (Dictionary_2_t1967 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12684(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12684_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12686_gshared (Dictionary_2_t1967 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12686(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1967 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12686_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12688_gshared (Dictionary_2_t1967 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12688(__this, ___size, method) (( void (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12688_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12690_gshared (Dictionary_2_t1967 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12690(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12690_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1969  Dictionary_2_make_pair_m12692_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12692(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1969  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12692_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12694_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12694(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12694_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12696_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2U5BU5D_t2542* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12696(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1967 *, KeyValuePair_2U5BU5D_t2542*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12696_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12698_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12698(__this, method) (( void (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_Resize_m12698_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12700_gshared (Dictionary_2_t1967 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12700(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1967 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12700_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12702_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12702(__this, method) (( void (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_Clear_m12702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12704_gshared (Dictionary_2_t1967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12704(__this, ___key, method) (( bool (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12704_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12706_gshared (Dictionary_2_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12706(__this, ___value, method) (( bool (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12706_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12708_gshared (Dictionary_2_t1967 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12708(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1967 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m12708_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12710_gshared (Dictionary_2_t1967 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12710(__this, ___sender, method) (( void (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12710_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12712_gshared (Dictionary_2_t1967 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12712(__this, ___key, method) (( bool (*) (Dictionary_2_t1967 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12712_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12714_gshared (Dictionary_2_t1967 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12714(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1967 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12714_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1971 * Dictionary_2_get_Values_m12715_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12715(__this, method) (( ValueCollection_t1971 * (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_get_Values_m12715_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12717_gshared (Dictionary_2_t1967 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12717(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12717_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12719_gshared (Dictionary_2_t1967 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12719(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1967 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12719_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12721_gshared (Dictionary_2_t1967 * __this, KeyValuePair_2_t1969  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12721(__this, ___pair, method) (( bool (*) (Dictionary_2_t1967 *, KeyValuePair_2_t1969 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12721_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1973  Dictionary_2_GetEnumerator_m12722_gshared (Dictionary_2_t1967 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12722(__this, method) (( Enumerator_t1973  (*) (Dictionary_2_t1967 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12722_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m12724_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12724(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12724_gshared)(__this /* static, unused */, ___key, ___value, method)
