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
struct Dictionary_2_t2535;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1949;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t681;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2745;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2746;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t757;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2540;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19560_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19560(__this, method) (( void (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2__ctor_m19560_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19561_gshared (Dictionary_2_t2535 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19561(__this, ___comparer, method) (( void (*) (Dictionary_2_t2535 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19563_gshared (Dictionary_2_t2535 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19563(__this, ___capacity, method) (( void (*) (Dictionary_2_t2535 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19563_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19565_gshared (Dictionary_2_t2535 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19565(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2535 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2__ctor_m19565_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19567_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19567(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19567_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19569_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19569(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2535 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19569_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19571_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19571(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2535 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19571_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19573_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19573(__this, ___key, method) (( bool (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19573_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19575_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19575(__this, ___key, method) (( void (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19575_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19577_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19577(__this, method) (( bool (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19577_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19579_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19579(__this, method) (( Object_t * (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19579_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19581_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19581(__this, method) (( bool (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19581_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19583_gshared (Dictionary_2_t2535 * __this, KeyValuePair_2_t2537  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19583(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2535 *, KeyValuePair_2_t2537 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19583_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19585_gshared (Dictionary_2_t2535 * __this, KeyValuePair_2_t2537  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19585(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2535 *, KeyValuePair_2_t2537 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19585_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19587_gshared (Dictionary_2_t2535 * __this, KeyValuePair_2U5BU5D_t2745* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19587(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2535 *, KeyValuePair_2U5BU5D_t2745*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19587_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19589_gshared (Dictionary_2_t2535 * __this, KeyValuePair_2_t2537  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19589(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2535 *, KeyValuePair_2_t2537 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19589_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19591_gshared (Dictionary_2_t2535 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19591(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2535 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19591_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19593_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19593(__this, method) (( Object_t * (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19593_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19595_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19595(__this, method) (( Object_t* (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19595_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19597_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19597(__this, method) (( Object_t * (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19597_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19599_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19599(__this, method) (( int32_t (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_get_Count_m19599_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19601_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19601(__this, ___key, method) (( bool (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19601_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19603_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19603(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2535 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19603_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19605_gshared (Dictionary_2_t2535 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19605(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2535 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19605_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19607_gshared (Dictionary_2_t2535 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19607(__this, ___size, method) (( void (*) (Dictionary_2_t2535 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19607_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19609_gshared (Dictionary_2_t2535 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19609(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2535 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19609_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2537  Dictionary_2_make_pair_m19611_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19611(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2537  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19611_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19613_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19613(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19613_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19615_gshared (Dictionary_2_t2535 * __this, KeyValuePair_2U5BU5D_t2745* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19615(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2535 *, KeyValuePair_2U5BU5D_t2745*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19615_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19617_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19617(__this, method) (( void (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_Resize_m19617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19619_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19619(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2535 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19619_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19621_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19621(__this, method) (( void (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_Clear_m19621_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19623_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19623(__this, ___key, method) (( bool (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19623_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19625_gshared (Dictionary_2_t2535 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19625(__this, ___value, method) (( bool (*) (Dictionary_2_t2535 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19625_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19627_gshared (Dictionary_2_t2535 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19627(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2535 *, SerializationInfo_t681 *, StreamingContext_t682 , const MethodInfo*))Dictionary_2_GetObjectData_m19627_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19629_gshared (Dictionary_2_t2535 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19629(__this, ___sender, method) (( void (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19629_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19631_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19631(__this, ___key, method) (( bool (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19631_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19633_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19633(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2535 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19633_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2540 * Dictionary_2_get_Values_m19635_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19635(__this, method) (( ValueCollection_t2540 * (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_get_Values_m19635_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19637_gshared (Dictionary_2_t2535 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19637(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19637_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19639_gshared (Dictionary_2_t2535 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19639(__this, ___value, method) (( bool (*) (Dictionary_2_t2535 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19639_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19641_gshared (Dictionary_2_t2535 * __this, KeyValuePair_2_t2537  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19641(__this, ___pair, method) (( bool (*) (Dictionary_2_t2535 *, KeyValuePair_2_t2537 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19641_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2542  Dictionary_2_GetEnumerator_m19643_gshared (Dictionary_2_t2535 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19643(__this, method) (( Enumerator_t2542  (*) (Dictionary_2_t2535 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19643_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t761  Dictionary_2_U3CCopyToU3Em__0_m19645_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19645(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t761  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19645_gshared)(__this /* static, unused */, ___key, ___value, method)
