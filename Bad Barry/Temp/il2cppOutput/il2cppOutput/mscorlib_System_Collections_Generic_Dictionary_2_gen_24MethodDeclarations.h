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
struct Dictionary_2_t1_1257;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1256;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1608;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_1609;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_450;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1259;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_8593_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8593(__this, method) (( void (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2__ctor_m1_8593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_8595_gshared (Dictionary_2_t1_1257 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8595(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1257 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_8595_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_8597_gshared (Dictionary_2_t1_1257 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8597(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1257 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_8597_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_8599_gshared (Dictionary_2_t1_1257 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_506  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8599(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1257 *, SerializationInfo_t1_176 *, StreamingContext_t1_506 , const MethodInfo*))Dictionary_2__ctor_m1_8599_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_8601_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_8601(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1257 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_8601_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_8603_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_8603(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1257 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_8603_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_8605_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_8605(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1257 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_8605_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_8607_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_8607(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1257 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_8607_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_8609_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_8609(__this, ___key, method) (( void (*) (Dictionary_2_t1_1257 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_8609_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8611_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8611(__this, method) (( bool (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_8611_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8613_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8613(__this, method) (( Object_t * (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_8613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8615_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8615(__this, method) (( bool (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_8615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8617_gshared (Dictionary_2_t1_1257 * __this, KeyValuePair_2_t1_1252  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8617(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1257 *, KeyValuePair_2_t1_1252 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_8617_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8619_gshared (Dictionary_2_t1_1257 * __this, KeyValuePair_2_t1_1252  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8619(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1257 *, KeyValuePair_2_t1_1252 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_8619_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8621_gshared (Dictionary_2_t1_1257 * __this, KeyValuePair_2U5BU5D_t1_1608* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8621(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1257 *, KeyValuePair_2U5BU5D_t1_1608*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_8621_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8623_gshared (Dictionary_2_t1_1257 * __this, KeyValuePair_2_t1_1252  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8623(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1257 *, KeyValuePair_2_t1_1252 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_8623_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_8625_gshared (Dictionary_2_t1_1257 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_8625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1257 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_8625_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8627_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8627(__this, method) (( Object_t * (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_8627_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8629_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8629(__this, method) (( Object_t* (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_8629_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8631_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8631(__this, method) (( Object_t * (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_8631_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_8633_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_8633(__this, method) (( int32_t (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_get_Count_m1_8633_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_8635_gshared (Dictionary_2_t1_1257 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_8635(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1257 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_8635_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_8637_gshared (Dictionary_2_t1_1257 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_8637(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1257 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_8637_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_8639_gshared (Dictionary_2_t1_1257 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_8639(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1257 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_8639_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_8641_gshared (Dictionary_2_t1_1257 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_8641(__this, ___size, method) (( void (*) (Dictionary_2_t1_1257 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_8641_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_8643_gshared (Dictionary_2_t1_1257 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_8643(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1257 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_8643_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1252  Dictionary_2_make_pair_m1_8645_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_8645(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1252  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_8645_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_8647_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_8647(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_8647_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_8649_gshared (Dictionary_2_t1_1257 * __this, KeyValuePair_2U5BU5D_t1_1608* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_8649(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1257 *, KeyValuePair_2U5BU5D_t1_1608*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_8649_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_8651_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_8651(__this, method) (( void (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_Resize_m1_8651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_8653_gshared (Dictionary_2_t1_1257 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_8653(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1257 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_8653_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_8655_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_8655(__this, method) (( void (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_Clear_m1_8655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_8657_gshared (Dictionary_2_t1_1257 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_8657(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1257 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_8657_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_8659_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_8659(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1257 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_8659_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_8661_gshared (Dictionary_2_t1_1257 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_506  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_8661(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1257 *, SerializationInfo_t1_176 *, StreamingContext_t1_506 , const MethodInfo*))Dictionary_2_GetObjectData_m1_8661_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_8663_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_8663(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1257 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_8663_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_8665_gshared (Dictionary_2_t1_1257 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_8665(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1257 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_8665_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_8667_gshared (Dictionary_2_t1_1257 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_8667(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1257 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_8667_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1259 * Dictionary_2_get_Values_m1_8669_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_8669(__this, method) (( ValueCollection_t1_1259 * (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_get_Values_m1_8669_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_8671_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_8671(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1257 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_8671_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_8673_gshared (Dictionary_2_t1_1257 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_8673(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1257 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_8673_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_8675_gshared (Dictionary_2_t1_1257 * __this, KeyValuePair_2_t1_1252  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_8675(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1257 *, KeyValuePair_2_t1_1252 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_8675_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1261  Dictionary_2_GetEnumerator_m1_8677_gshared (Dictionary_2_t1_1257 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_8677(__this, method) (( Enumerator_t1_1261  (*) (Dictionary_2_t1_1257 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_8677_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_8679_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_8679(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_8679_gshared)(__this /* static, unused */, ___key, ___value, method)
