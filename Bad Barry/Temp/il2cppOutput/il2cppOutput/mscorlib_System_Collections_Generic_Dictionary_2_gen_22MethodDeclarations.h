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
struct Dictionary_2_t2138;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1973;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t704;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2694;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t156;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2695;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t780;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14142_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14142(__this, method) (( void (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2__ctor_m14142_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14143_gshared (Dictionary_2_t2138 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14143(__this, ___comparer, method) (( void (*) (Dictionary_2_t2138 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14143_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14144_gshared (Dictionary_2_t2138 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14144(__this, ___capacity, method) (( void (*) (Dictionary_2_t2138 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14144_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14145_gshared (Dictionary_2_t2138 * __this, SerializationInfo_t704 * ___info, StreamingContext_t705  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14145(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2138 *, SerializationInfo_t704 *, StreamingContext_t705 , const MethodInfo*))Dictionary_2__ctor_m14145_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14146_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14146(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14146_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14147_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14147(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2138 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14147_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14148_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14148(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2138 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14148_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14149_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14149(__this, ___key, method) (( bool (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14149_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14150_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14150(__this, ___key, method) (( void (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14150_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14151_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14151(__this, method) (( bool (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14151_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14152_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14152(__this, method) (( Object_t * (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14153_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14153(__this, method) (( bool (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14153_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14154_gshared (Dictionary_2_t2138 * __this, KeyValuePair_2_t2140  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14154(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2138 *, KeyValuePair_2_t2140 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14154_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14155_gshared (Dictionary_2_t2138 * __this, KeyValuePair_2_t2140  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14155(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2138 *, KeyValuePair_2_t2140 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14155_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14156_gshared (Dictionary_2_t2138 * __this, KeyValuePair_2U5BU5D_t2694* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14156(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2138 *, KeyValuePair_2U5BU5D_t2694*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14156_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14157_gshared (Dictionary_2_t2138 * __this, KeyValuePair_2_t2140  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14157(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2138 *, KeyValuePair_2_t2140 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14157_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14158_gshared (Dictionary_2_t2138 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14158(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2138 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14158_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14159_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14159(__this, method) (( Object_t * (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14159_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14160_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14160(__this, method) (( Object_t* (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14160_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14161_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14161(__this, method) (( Object_t * (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14161_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14162_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14162(__this, method) (( int32_t (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_get_Count_m14162_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14163_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14163(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14163_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14164_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14164(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2138 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14164_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14165_gshared (Dictionary_2_t2138 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14165(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2138 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14165_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14166_gshared (Dictionary_2_t2138 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14166(__this, ___size, method) (( void (*) (Dictionary_2_t2138 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14166_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14167_gshared (Dictionary_2_t2138 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14167(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2138 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14167_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2140  Dictionary_2_make_pair_m14168_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14168(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2140  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14168_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14169_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14169(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14169_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14170_gshared (Dictionary_2_t2138 * __this, KeyValuePair_2U5BU5D_t2694* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14170(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2138 *, KeyValuePair_2U5BU5D_t2694*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14170_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14171_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14171(__this, method) (( void (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_Resize_m14171_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14172_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14172(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2138 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14172_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14173_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14173(__this, method) (( void (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_Clear_m14173_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14174_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14174(__this, ___key, method) (( bool (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14174_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14175_gshared (Dictionary_2_t2138 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14175(__this, ___value, method) (( bool (*) (Dictionary_2_t2138 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14175_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14176_gshared (Dictionary_2_t2138 * __this, SerializationInfo_t704 * ___info, StreamingContext_t705  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14176(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2138 *, SerializationInfo_t704 *, StreamingContext_t705 , const MethodInfo*))Dictionary_2_GetObjectData_m14176_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14177_gshared (Dictionary_2_t2138 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14177(__this, ___sender, method) (( void (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14177_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14178_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14178(__this, ___key, method) (( bool (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14178_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14179_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14179(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2138 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14179_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2142 * Dictionary_2_get_Values_m14180_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14180(__this, method) (( ValueCollection_t2142 * (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_get_Values_m14180_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14181_gshared (Dictionary_2_t2138 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14181(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14181_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14182_gshared (Dictionary_2_t2138 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14182(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2138 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14182_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14183_gshared (Dictionary_2_t2138 * __this, KeyValuePair_2_t2140  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14183(__this, ___pair, method) (( bool (*) (Dictionary_2_t2138 *, KeyValuePair_2_t2140 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14183_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2144  Dictionary_2_GetEnumerator_m14184_gshared (Dictionary_2_t2138 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14184(__this, method) (( Enumerator_t2144  (*) (Dictionary_2_t2138 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14184_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t784  Dictionary_2_U3CCopyToU3Em__0_m14185_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14185(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t784  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14185_gshared)(__this /* static, unused */, ___key, ___value, method)
