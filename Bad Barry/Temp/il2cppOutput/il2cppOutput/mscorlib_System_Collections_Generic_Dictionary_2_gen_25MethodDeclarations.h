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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2559;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1973;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2769;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t156;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2770;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t780;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2564;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19667_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19667(__this, method) (( void (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2__ctor_m19667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19668_gshared (Dictionary_2_t2559 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19668(__this, ___comparer, method) (( void (*) (Dictionary_2_t2559 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19668_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19670_gshared (Dictionary_2_t2559 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19670(__this, ___capacity, method) (( void (*) (Dictionary_2_t2559 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19670_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19672_gshared (Dictionary_2_t2559 * __this, SerializationInfo_t704 * ___info, StreamingContext_t705  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19672(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2559 *, SerializationInfo_t704 *, StreamingContext_t705 , const MethodInfo*))Dictionary_2__ctor_m19672_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19674_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19674(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19674_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19676_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19676(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2559 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19676_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19678_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19678(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2559 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19678_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19680_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19680(__this, ___key, method) (( bool (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19680_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19682_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19682(__this, ___key, method) (( void (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19682_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19684_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19684(__this, method) (( bool (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19686_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19686(__this, method) (( Object_t * (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19688_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19688(__this, method) (( bool (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19688_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19690_gshared (Dictionary_2_t2559 * __this, KeyValuePair_2_t2561  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19690(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2559 *, KeyValuePair_2_t2561 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19690_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19692_gshared (Dictionary_2_t2559 * __this, KeyValuePair_2_t2561  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19692(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2559 *, KeyValuePair_2_t2561 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19692_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19694_gshared (Dictionary_2_t2559 * __this, KeyValuePair_2U5BU5D_t2769* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2559 *, KeyValuePair_2U5BU5D_t2769*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19694_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19696_gshared (Dictionary_2_t2559 * __this, KeyValuePair_2_t2561  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19696(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2559 *, KeyValuePair_2_t2561 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19696_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19698_gshared (Dictionary_2_t2559 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19698(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2559 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19698_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19700_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19700(__this, method) (( Object_t * (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19700_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19702_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19702(__this, method) (( Object_t* (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19702_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19704_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19704(__this, method) (( Object_t * (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19704_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19706_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19706(__this, method) (( int32_t (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_get_Count_m19706_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19708_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19708(__this, ___key, method) (( bool (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19708_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19710_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19710(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2559 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19710_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19712_gshared (Dictionary_2_t2559 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19712(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2559 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19712_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19714_gshared (Dictionary_2_t2559 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19714(__this, ___size, method) (( void (*) (Dictionary_2_t2559 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19714_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19716_gshared (Dictionary_2_t2559 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2559 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19716_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2561  Dictionary_2_make_pair_m19718_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19718(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2561  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19718_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19720_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19720(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19720_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19722_gshared (Dictionary_2_t2559 * __this, KeyValuePair_2U5BU5D_t2769* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19722(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2559 *, KeyValuePair_2U5BU5D_t2769*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19722_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19724_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19724(__this, method) (( void (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_Resize_m19724_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19726_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19726(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2559 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19726_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19728_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19728(__this, method) (( void (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_Clear_m19728_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19730_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19730(__this, ___key, method) (( bool (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19730_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19732_gshared (Dictionary_2_t2559 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19732(__this, ___value, method) (( bool (*) (Dictionary_2_t2559 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19732_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19734_gshared (Dictionary_2_t2559 * __this, SerializationInfo_t704 * ___info, StreamingContext_t705  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19734(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2559 *, SerializationInfo_t704 *, StreamingContext_t705 , const MethodInfo*))Dictionary_2_GetObjectData_m19734_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19736_gshared (Dictionary_2_t2559 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19736(__this, ___sender, method) (( void (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19736_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19738_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19738(__this, ___key, method) (( bool (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19738_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19740_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19740(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2559 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19740_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2564 * Dictionary_2_get_Values_m19742_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19742(__this, method) (( ValueCollection_t2564 * (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_get_Values_m19742_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19744_gshared (Dictionary_2_t2559 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19744(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19744_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19746_gshared (Dictionary_2_t2559 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19746(__this, ___value, method) (( bool (*) (Dictionary_2_t2559 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19746_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19748_gshared (Dictionary_2_t2559 * __this, KeyValuePair_2_t2561  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19748(__this, ___pair, method) (( bool (*) (Dictionary_2_t2559 *, KeyValuePair_2_t2561 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19748_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2566  Dictionary_2_GetEnumerator_m19750_gshared (Dictionary_2_t2559 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19750(__this, method) (( Enumerator_t2566  (*) (Dictionary_2_t2559 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19750_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t784  Dictionary_2_U3CCopyToU3Em__0_m19752_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19752(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t784  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19752_gshared)(__this /* static, unused */, ___key, ___value, method)
