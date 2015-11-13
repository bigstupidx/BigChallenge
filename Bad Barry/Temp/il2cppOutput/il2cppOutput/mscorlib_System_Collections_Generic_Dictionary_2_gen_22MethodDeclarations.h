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
struct Dictionary_2_t2333;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1840;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t621;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2595;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2596;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2336;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m17433_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17433(__this, method) (( void (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2__ctor_m17433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17435_gshared (Dictionary_2_t2333 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17435(__this, ___comparer, method) (( void (*) (Dictionary_2_t2333 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17435_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17437_gshared (Dictionary_2_t2333 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17437(__this, ___capacity, method) (( void (*) (Dictionary_2_t2333 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17437_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17439_gshared (Dictionary_2_t2333 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17439(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2333 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m17439_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17441_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17441(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17441_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17443_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17443(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2333 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17443_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17445_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17445(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2333 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17445_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17447_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17447(__this, ___key, method) (( bool (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17447_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17449_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17449(__this, ___key, method) (( void (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17449_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17451_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17451(__this, method) (( bool (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17451_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17453_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17453(__this, method) (( Object_t * (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17453_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17455_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17455(__this, method) (( bool (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17455_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17457_gshared (Dictionary_2_t2333 * __this, KeyValuePair_2_t2325  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17457(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2333 *, KeyValuePair_2_t2325 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17457_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17459_gshared (Dictionary_2_t2333 * __this, KeyValuePair_2_t2325  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17459(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2333 *, KeyValuePair_2_t2325 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17459_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17461_gshared (Dictionary_2_t2333 * __this, KeyValuePair_2U5BU5D_t2595* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17461(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2333 *, KeyValuePair_2U5BU5D_t2595*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17461_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17463_gshared (Dictionary_2_t2333 * __this, KeyValuePair_2_t2325  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17463(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2333 *, KeyValuePair_2_t2325 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17463_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17465_gshared (Dictionary_2_t2333 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17465(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2333 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17465_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17467_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17467(__this, method) (( Object_t * (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17467_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17469_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17469(__this, method) (( Object_t* (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17469_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17471_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17471(__this, method) (( Object_t * (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17473_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17473(__this, method) (( int32_t (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_get_Count_m17473_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t665  Dictionary_2_get_Item_m17475_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17475(__this, ___key, method) (( ArrayMetadata_t665  (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17475_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17477_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, ArrayMetadata_t665  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17477(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2333 *, Object_t *, ArrayMetadata_t665 , const MethodInfo*))Dictionary_2_set_Item_m17477_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17479_gshared (Dictionary_2_t2333 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17479(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2333 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17479_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17481_gshared (Dictionary_2_t2333 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17481(__this, ___size, method) (( void (*) (Dictionary_2_t2333 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17481_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17483_gshared (Dictionary_2_t2333 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17483(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2333 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17483_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2325  Dictionary_2_make_pair_m17485_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t665  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17485(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2325  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t665 , const MethodInfo*))Dictionary_2_make_pair_m17485_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t665  Dictionary_2_pick_value_m17487_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t665  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17487(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t665  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t665 , const MethodInfo*))Dictionary_2_pick_value_m17487_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17489_gshared (Dictionary_2_t2333 * __this, KeyValuePair_2U5BU5D_t2595* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17489(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2333 *, KeyValuePair_2U5BU5D_t2595*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17489_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m17491_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17491(__this, method) (( void (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_Resize_m17491_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17493_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, ArrayMetadata_t665  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17493(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2333 *, Object_t *, ArrayMetadata_t665 , const MethodInfo*))Dictionary_2_Add_m17493_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m17495_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17495(__this, method) (( void (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_Clear_m17495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17497_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17497(__this, ___key, method) (( bool (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17497_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17499_gshared (Dictionary_2_t2333 * __this, ArrayMetadata_t665  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17499(__this, ___value, method) (( bool (*) (Dictionary_2_t2333 *, ArrayMetadata_t665 , const MethodInfo*))Dictionary_2_ContainsValue_m17499_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17501_gshared (Dictionary_2_t2333 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17501(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2333 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m17501_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17503_gshared (Dictionary_2_t2333 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17503(__this, ___sender, method) (( void (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17503_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17505_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17505(__this, ___key, method) (( bool (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17505_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17507_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, ArrayMetadata_t665 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17507(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2333 *, Object_t *, ArrayMetadata_t665 *, const MethodInfo*))Dictionary_2_TryGetValue_m17507_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2336 * Dictionary_2_get_Values_m17509_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17509(__this, method) (( ValueCollection_t2336 * (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_get_Values_m17509_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17511_gshared (Dictionary_2_t2333 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17511(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17511_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t665  Dictionary_2_ToTValue_m17513_gshared (Dictionary_2_t2333 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17513(__this, ___value, method) (( ArrayMetadata_t665  (*) (Dictionary_2_t2333 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17513_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17515_gshared (Dictionary_2_t2333 * __this, KeyValuePair_2_t2325  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17515(__this, ___pair, method) (( bool (*) (Dictionary_2_t2333 *, KeyValuePair_2_t2325 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17515_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2338  Dictionary_2_GetEnumerator_m17517_gshared (Dictionary_2_t2333 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17517(__this, method) (( Enumerator_t2338  (*) (Dictionary_2_t2333 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17517_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m17519_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t665  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17519(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t665 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17519_gshared)(__this /* static, unused */, ___key, ___value, method)
