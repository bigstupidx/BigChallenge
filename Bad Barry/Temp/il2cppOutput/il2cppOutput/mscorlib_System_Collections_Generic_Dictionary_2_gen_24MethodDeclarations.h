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
struct Dictionary_2_t2492;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1910;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2700;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2701;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t730;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2497;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19203_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19203(__this, method) (( void (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2__ctor_m19203_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19204_gshared (Dictionary_2_t2492 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19204(__this, ___comparer, method) (( void (*) (Dictionary_2_t2492 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19204_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19206_gshared (Dictionary_2_t2492 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19206(__this, ___capacity, method) (( void (*) (Dictionary_2_t2492 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19206_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19208_gshared (Dictionary_2_t2492 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19208(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2492 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2__ctor_m19208_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19210_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19210(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19210_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19212_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19212(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19212_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19214_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19214(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19214_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19216_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19216(__this, ___key, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19216_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19218_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19218(__this, ___key, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19218_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19220_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19220(__this, method) (( bool (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19220_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19222_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19222(__this, method) (( Object_t * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19222_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19224_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19224(__this, method) (( bool (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19226_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2494  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19226(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2494 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19226_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19228_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2494  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19228(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2494 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19228_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19230_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2700* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19230(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2700*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19230_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19232_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2494  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19232(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2494 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19232_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19234_gshared (Dictionary_2_t2492 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19234(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19234_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19236_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19236(__this, method) (( Object_t * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19236_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19238_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19238(__this, method) (( Object_t* (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19238_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19240_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19240(__this, method) (( Object_t * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19240_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19242_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19242(__this, method) (( int32_t (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_get_Count_m19242_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19244_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19244(__this, ___key, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19244_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19246_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19246(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19246_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19248_gshared (Dictionary_2_t2492 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19248(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2492 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19248_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19250_gshared (Dictionary_2_t2492 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19250(__this, ___size, method) (( void (*) (Dictionary_2_t2492 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19250_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19252_gshared (Dictionary_2_t2492 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19252(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19252_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2494  Dictionary_2_make_pair_m19254_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19254(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2494  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19254_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19256_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19256(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19256_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19258_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2U5BU5D_t2700* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19258(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2492 *, KeyValuePair_2U5BU5D_t2700*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19258_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19260_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19260(__this, method) (( void (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_Resize_m19260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19262_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19262(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19262_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19264_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19264(__this, method) (( void (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_Clear_m19264_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19266_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19266(__this, ___key, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19266_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19268_gshared (Dictionary_2_t2492 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19268(__this, ___value, method) (( bool (*) (Dictionary_2_t2492 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19268_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19270_gshared (Dictionary_2_t2492 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19270(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2492 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2_GetObjectData_m19270_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19272_gshared (Dictionary_2_t2492 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19272(__this, ___sender, method) (( void (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19272_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19274_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19274(__this, ___key, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19274_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19276_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19276(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19276_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2497 * Dictionary_2_get_Values_m19278_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19278(__this, method) (( ValueCollection_t2497 * (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_get_Values_m19278_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19280_gshared (Dictionary_2_t2492 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19280(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19280_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19282_gshared (Dictionary_2_t2492 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19282(__this, ___value, method) (( bool (*) (Dictionary_2_t2492 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19282_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19284_gshared (Dictionary_2_t2492 * __this, KeyValuePair_2_t2494  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19284(__this, ___pair, method) (( bool (*) (Dictionary_2_t2492 *, KeyValuePair_2_t2494 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19284_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2499  Dictionary_2_GetEnumerator_m19286_gshared (Dictionary_2_t2492 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19286(__this, method) (( Enumerator_t2499  (*) (Dictionary_2_t2492 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19286_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t734  Dictionary_2_U3CCopyToU3Em__0_m19288_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19288(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t734  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19288_gshared)(__this /* static, unused */, ___key, ___value, method)
