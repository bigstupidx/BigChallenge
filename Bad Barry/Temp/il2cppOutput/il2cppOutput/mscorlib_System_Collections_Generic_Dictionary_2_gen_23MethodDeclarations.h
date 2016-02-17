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
struct Dictionary_2_t2478;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1973;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2745;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t156;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2746;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t780;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2481;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18628_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18628(__this, method) (( void (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2__ctor_m18628_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18630_gshared (Dictionary_2_t2478 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18630(__this, ___comparer, method) (( void (*) (Dictionary_2_t2478 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18630_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18632_gshared (Dictionary_2_t2478 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18632(__this, ___capacity, method) (( void (*) (Dictionary_2_t2478 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18632_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18634_gshared (Dictionary_2_t2478 * __this, SerializationInfo_t704 * ___info, StreamingContext_t705  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18634(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2478 *, SerializationInfo_t704 *, StreamingContext_t705 , const MethodInfo*))Dictionary_2__ctor_m18634_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18636_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18636(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18636_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18638_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18638(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2478 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18638_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18640_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18640(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2478 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18640_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18642_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18642(__this, ___key, method) (( bool (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18642_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18644_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18644(__this, ___key, method) (( void (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18644_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18646_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18646(__this, method) (( bool (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18646_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18648_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18648(__this, method) (( Object_t * (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18648_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18650_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18650(__this, method) (( bool (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18652_gshared (Dictionary_2_t2478 * __this, KeyValuePair_2_t2470  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18652(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2478 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18652_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18654_gshared (Dictionary_2_t2478 * __this, KeyValuePair_2_t2470  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18654(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2478 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18654_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18656_gshared (Dictionary_2_t2478 * __this, KeyValuePair_2U5BU5D_t2745* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18656(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2478 *, KeyValuePair_2U5BU5D_t2745*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18656_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18658_gshared (Dictionary_2_t2478 * __this, KeyValuePair_2_t2470  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18658(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2478 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18658_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18660_gshared (Dictionary_2_t2478 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18660(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2478 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18660_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18662_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18662(__this, method) (( Object_t * (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18662_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18664_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18664(__this, method) (( Object_t* (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18664_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18666_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18666(__this, method) (( Object_t * (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18666_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18668_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18668(__this, method) (( int32_t (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_get_Count_m18668_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t747  Dictionary_2_get_Item_m18670_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18670(__this, ___key, method) (( ArrayMetadata_t747  (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18670_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18672_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18672(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2478 *, Object_t *, ArrayMetadata_t747 , const MethodInfo*))Dictionary_2_set_Item_m18672_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18674_gshared (Dictionary_2_t2478 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18674(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2478 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18674_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18676_gshared (Dictionary_2_t2478 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18676(__this, ___size, method) (( void (*) (Dictionary_2_t2478 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18676_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18678_gshared (Dictionary_2_t2478 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18678(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2478 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18678_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2470  Dictionary_2_make_pair_m18680_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18680(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2470  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t747 , const MethodInfo*))Dictionary_2_make_pair_m18680_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t747  Dictionary_2_pick_value_m18682_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18682(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t747  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t747 , const MethodInfo*))Dictionary_2_pick_value_m18682_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18684_gshared (Dictionary_2_t2478 * __this, KeyValuePair_2U5BU5D_t2745* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18684(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2478 *, KeyValuePair_2U5BU5D_t2745*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18684_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18686_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18686(__this, method) (( void (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_Resize_m18686_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18688_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18688(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2478 *, Object_t *, ArrayMetadata_t747 , const MethodInfo*))Dictionary_2_Add_m18688_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18690_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18690(__this, method) (( void (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_Clear_m18690_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18692_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18692(__this, ___key, method) (( bool (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18692_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18694_gshared (Dictionary_2_t2478 * __this, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18694(__this, ___value, method) (( bool (*) (Dictionary_2_t2478 *, ArrayMetadata_t747 , const MethodInfo*))Dictionary_2_ContainsValue_m18694_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18696_gshared (Dictionary_2_t2478 * __this, SerializationInfo_t704 * ___info, StreamingContext_t705  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18696(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2478 *, SerializationInfo_t704 *, StreamingContext_t705 , const MethodInfo*))Dictionary_2_GetObjectData_m18696_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18698_gshared (Dictionary_2_t2478 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18698(__this, ___sender, method) (( void (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18698_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18700_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18700(__this, ___key, method) (( bool (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18700_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18702_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, ArrayMetadata_t747 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18702(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2478 *, Object_t *, ArrayMetadata_t747 *, const MethodInfo*))Dictionary_2_TryGetValue_m18702_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2481 * Dictionary_2_get_Values_m18704_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18704(__this, method) (( ValueCollection_t2481 * (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_get_Values_m18704_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18706_gshared (Dictionary_2_t2478 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18706(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18706_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t747  Dictionary_2_ToTValue_m18708_gshared (Dictionary_2_t2478 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18708(__this, ___value, method) (( ArrayMetadata_t747  (*) (Dictionary_2_t2478 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18708_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18710_gshared (Dictionary_2_t2478 * __this, KeyValuePair_2_t2470  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18710(__this, ___pair, method) (( bool (*) (Dictionary_2_t2478 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18710_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2483  Dictionary_2_GetEnumerator_m18712_gshared (Dictionary_2_t2478 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18712(__this, method) (( Enumerator_t2483  (*) (Dictionary_2_t2478 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18712_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t784  Dictionary_2_U3CCopyToU3Em__0_m18714_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18714(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t784  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t747 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18714_gshared)(__this /* static, unused */, ___key, ___value, method)
