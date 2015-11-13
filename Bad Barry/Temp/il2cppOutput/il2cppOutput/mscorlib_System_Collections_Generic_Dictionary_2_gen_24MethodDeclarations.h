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
struct Dictionary_2_t2414;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1840;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t621;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2619;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2620;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2419;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m18471_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18471(__this, method) (( void (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2__ctor_m18471_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18472_gshared (Dictionary_2_t2414 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18472(__this, ___comparer, method) (( void (*) (Dictionary_2_t2414 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18472_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18474_gshared (Dictionary_2_t2414 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18474(__this, ___capacity, method) (( void (*) (Dictionary_2_t2414 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18474_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18476_gshared (Dictionary_2_t2414 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18476(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2414 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m18476_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18478_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18478(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18478_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18480_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18480(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18480_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18482_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18482(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18482_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18484_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18484(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18484_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18486_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18486(__this, ___key, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18486_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18488_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18488(__this, method) (( bool (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18488_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18490_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18490(__this, method) (( Object_t * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18490_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18492_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18492(__this, method) (( bool (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18492_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18494_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18494(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18494_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18496_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18496(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18496_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18498_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2U5BU5D_t2619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18498(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, KeyValuePair_2U5BU5D_t2619*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18498_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18500_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18500(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18500_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18502_gshared (Dictionary_2_t2414 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18502(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18502_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18504_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18504(__this, method) (( Object_t * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18504_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18506_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18506(__this, method) (( Object_t* (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18506_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18508_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18508(__this, method) (( Object_t * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18510_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18510(__this, method) (( int32_t (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_get_Count_m18510_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m18512_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18512(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18512_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18514_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18514(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m18514_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18516_gshared (Dictionary_2_t2414 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18516(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2414 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18516_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18518_gshared (Dictionary_2_t2414 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18518(__this, ___size, method) (( void (*) (Dictionary_2_t2414 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18518_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18520_gshared (Dictionary_2_t2414 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18520(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18520_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2416  Dictionary_2_make_pair_m18522_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18522(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2416  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m18522_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m18524_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18524(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m18524_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18526_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2U5BU5D_t2619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18526(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, KeyValuePair_2U5BU5D_t2619*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18526_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m18528_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18528(__this, method) (( void (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_Resize_m18528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18530_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18530(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m18530_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m18532_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18532(__this, method) (( void (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_Clear_m18532_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18534_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18534(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18534_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18536_gshared (Dictionary_2_t2414 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18536(__this, ___value, method) (( bool (*) (Dictionary_2_t2414 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m18536_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18538_gshared (Dictionary_2_t2414 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18538(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2414 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m18538_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18540_gshared (Dictionary_2_t2414 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18540(__this, ___sender, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18540_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18542_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18542(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18542_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18544_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18544(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m18544_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2419 * Dictionary_2_get_Values_m18546_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18546(__this, method) (( ValueCollection_t2419 * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_get_Values_m18546_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18548_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18548(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18548_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m18550_gshared (Dictionary_2_t2414 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18550(__this, ___value, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18550_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18552_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18552(__this, ___pair, method) (( bool (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18552_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2421  Dictionary_2_GetEnumerator_m18554_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18554(__this, method) (( Enumerator_t2421  (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18554_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m18556_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18556(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18556_gshared)(__this /* static, unused */, ___key, ___value, method)
