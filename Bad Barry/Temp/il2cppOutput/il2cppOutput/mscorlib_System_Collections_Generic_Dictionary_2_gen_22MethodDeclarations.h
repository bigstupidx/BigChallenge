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
struct Dictionary_2_t2422;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1921;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2687;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2688;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t730;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2425;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18257_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18257(__this, method) (( void (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2__ctor_m18257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18259_gshared (Dictionary_2_t2422 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18259(__this, ___comparer, method) (( void (*) (Dictionary_2_t2422 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18259_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18261_gshared (Dictionary_2_t2422 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18261(__this, ___capacity, method) (( void (*) (Dictionary_2_t2422 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18261_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18263_gshared (Dictionary_2_t2422 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18263(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2422 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2__ctor_m18263_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18265_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18265(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18265_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18267_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18267(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2422 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18267_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18269_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18269(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2422 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18269_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18271_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18271(__this, ___key, method) (( bool (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18271_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18273_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18273(__this, ___key, method) (( void (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18273_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18275_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18275(__this, method) (( bool (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18275_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18277_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18277(__this, method) (( Object_t * (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18277_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18279_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18279(__this, method) (( bool (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18279_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18281_gshared (Dictionary_2_t2422 * __this, KeyValuePair_2_t2414  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18281(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2422 *, KeyValuePair_2_t2414 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18281_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18283_gshared (Dictionary_2_t2422 * __this, KeyValuePair_2_t2414  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18283(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2422 *, KeyValuePair_2_t2414 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18283_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18285_gshared (Dictionary_2_t2422 * __this, KeyValuePair_2U5BU5D_t2687* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18285(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2422 *, KeyValuePair_2U5BU5D_t2687*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18285_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18287_gshared (Dictionary_2_t2422 * __this, KeyValuePair_2_t2414  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18287(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2422 *, KeyValuePair_2_t2414 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18287_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18289_gshared (Dictionary_2_t2422 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18289(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2422 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18289_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18291_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18291(__this, method) (( Object_t * (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18291_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18293_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18293(__this, method) (( Object_t* (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18293_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18295_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18295(__this, method) (( Object_t * (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18295_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18297_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18297(__this, method) (( int32_t (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_get_Count_m18297_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t697  Dictionary_2_get_Item_m18299_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18299(__this, ___key, method) (( ArrayMetadata_t697  (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18299_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18301_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18301(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2422 *, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_set_Item_m18301_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18303_gshared (Dictionary_2_t2422 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18303(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2422 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18303_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18305_gshared (Dictionary_2_t2422 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18305(__this, ___size, method) (( void (*) (Dictionary_2_t2422 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18305_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18307_gshared (Dictionary_2_t2422 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18307(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2422 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18307_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2414  Dictionary_2_make_pair_m18309_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18309(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2414  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_make_pair_m18309_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t697  Dictionary_2_pick_value_m18311_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18311(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t697  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_pick_value_m18311_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18313_gshared (Dictionary_2_t2422 * __this, KeyValuePair_2U5BU5D_t2687* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18313(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2422 *, KeyValuePair_2U5BU5D_t2687*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18313_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18315_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18315(__this, method) (( void (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_Resize_m18315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18317_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18317(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2422 *, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_Add_m18317_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18319_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18319(__this, method) (( void (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_Clear_m18319_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18321_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18321(__this, ___key, method) (( bool (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18321_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18323_gshared (Dictionary_2_t2422 * __this, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18323(__this, ___value, method) (( bool (*) (Dictionary_2_t2422 *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_ContainsValue_m18323_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18325_gshared (Dictionary_2_t2422 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18325(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2422 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2_GetObjectData_m18325_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18327_gshared (Dictionary_2_t2422 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18327(__this, ___sender, method) (( void (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18327_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18329_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18329(__this, ___key, method) (( bool (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18329_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18331_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, ArrayMetadata_t697 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18331(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2422 *, Object_t *, ArrayMetadata_t697 *, const MethodInfo*))Dictionary_2_TryGetValue_m18331_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2425 * Dictionary_2_get_Values_m18333_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18333(__this, method) (( ValueCollection_t2425 * (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_get_Values_m18333_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18335_gshared (Dictionary_2_t2422 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18335(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18335_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t697  Dictionary_2_ToTValue_m18337_gshared (Dictionary_2_t2422 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18337(__this, ___value, method) (( ArrayMetadata_t697  (*) (Dictionary_2_t2422 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18337_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18339_gshared (Dictionary_2_t2422 * __this, KeyValuePair_2_t2414  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18339(__this, ___pair, method) (( bool (*) (Dictionary_2_t2422 *, KeyValuePair_2_t2414 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18339_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2427  Dictionary_2_GetEnumerator_m18341_gshared (Dictionary_2_t2422 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18341(__this, method) (( Enumerator_t2427  (*) (Dictionary_2_t2422 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18341_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t734  Dictionary_2_U3CCopyToU3Em__0_m18343_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18343(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t734  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18343_gshared)(__this /* static, unused */, ___key, ___value, method)
