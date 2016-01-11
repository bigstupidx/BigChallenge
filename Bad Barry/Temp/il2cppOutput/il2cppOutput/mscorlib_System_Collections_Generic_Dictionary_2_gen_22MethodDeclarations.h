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
struct Dictionary_2_t2411;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1910;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2676;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2677;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t730;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2414;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18164_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18164(__this, method) (( void (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2__ctor_m18164_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18166_gshared (Dictionary_2_t2411 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18166(__this, ___comparer, method) (( void (*) (Dictionary_2_t2411 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18166_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18168_gshared (Dictionary_2_t2411 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18168(__this, ___capacity, method) (( void (*) (Dictionary_2_t2411 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18168_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18170_gshared (Dictionary_2_t2411 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18170(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2411 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2__ctor_m18170_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18172_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18172(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18172_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18174_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18174(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2411 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18174_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18176_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18176(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2411 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18176_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18178_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18178(__this, ___key, method) (( bool (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18178_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18180_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18180(__this, ___key, method) (( void (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18180_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18182_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18182(__this, method) (( bool (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18182_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18184_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18184(__this, method) (( Object_t * (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18186_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18186(__this, method) (( bool (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18188_gshared (Dictionary_2_t2411 * __this, KeyValuePair_2_t2403  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18188(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2411 *, KeyValuePair_2_t2403 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18188_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18190_gshared (Dictionary_2_t2411 * __this, KeyValuePair_2_t2403  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18190(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2411 *, KeyValuePair_2_t2403 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18190_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18192_gshared (Dictionary_2_t2411 * __this, KeyValuePair_2U5BU5D_t2676* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18192(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2411 *, KeyValuePair_2U5BU5D_t2676*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18192_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18194_gshared (Dictionary_2_t2411 * __this, KeyValuePair_2_t2403  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18194(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2411 *, KeyValuePair_2_t2403 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18194_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18196_gshared (Dictionary_2_t2411 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18196(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2411 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18196_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18198_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18198(__this, method) (( Object_t * (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18198_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18200_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18200(__this, method) (( Object_t* (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18200_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18202_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18202(__this, method) (( Object_t * (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18202_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18204_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18204(__this, method) (( int32_t (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_get_Count_m18204_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t697  Dictionary_2_get_Item_m18206_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18206(__this, ___key, method) (( ArrayMetadata_t697  (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18206_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18208_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18208(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2411 *, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_set_Item_m18208_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18210_gshared (Dictionary_2_t2411 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18210(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2411 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18210_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18212_gshared (Dictionary_2_t2411 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18212(__this, ___size, method) (( void (*) (Dictionary_2_t2411 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18212_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18214_gshared (Dictionary_2_t2411 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18214(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2411 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18214_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2403  Dictionary_2_make_pair_m18216_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18216(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2403  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_make_pair_m18216_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t697  Dictionary_2_pick_value_m18218_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18218(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t697  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_pick_value_m18218_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18220_gshared (Dictionary_2_t2411 * __this, KeyValuePair_2U5BU5D_t2676* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18220(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2411 *, KeyValuePair_2U5BU5D_t2676*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18220_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18222_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18222(__this, method) (( void (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_Resize_m18222_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18224_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18224(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2411 *, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_Add_m18224_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18226_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18226(__this, method) (( void (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_Clear_m18226_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18228_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18228(__this, ___key, method) (( bool (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18228_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18230_gshared (Dictionary_2_t2411 * __this, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18230(__this, ___value, method) (( bool (*) (Dictionary_2_t2411 *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_ContainsValue_m18230_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18232_gshared (Dictionary_2_t2411 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18232(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2411 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2_GetObjectData_m18232_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18234_gshared (Dictionary_2_t2411 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18234(__this, ___sender, method) (( void (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18234_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18236_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18236(__this, ___key, method) (( bool (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18236_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18238_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, ArrayMetadata_t697 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18238(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2411 *, Object_t *, ArrayMetadata_t697 *, const MethodInfo*))Dictionary_2_TryGetValue_m18238_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2414 * Dictionary_2_get_Values_m18240_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18240(__this, method) (( ValueCollection_t2414 * (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_get_Values_m18240_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18242_gshared (Dictionary_2_t2411 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18242(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18242_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t697  Dictionary_2_ToTValue_m18244_gshared (Dictionary_2_t2411 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18244(__this, ___value, method) (( ArrayMetadata_t697  (*) (Dictionary_2_t2411 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18244_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18246_gshared (Dictionary_2_t2411 * __this, KeyValuePair_2_t2403  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18246(__this, ___pair, method) (( bool (*) (Dictionary_2_t2411 *, KeyValuePair_2_t2403 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18246_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2416  Dictionary_2_GetEnumerator_m18248_gshared (Dictionary_2_t2411 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18248(__this, method) (( Enumerator_t2416  (*) (Dictionary_2_t2411 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18248_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t734  Dictionary_2_U3CCopyToU3Em__0_m18250_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18250(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t734  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18250_gshared)(__this /* static, unused */, ___key, ___value, method)
