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
struct Dictionary_2_t2220;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1765;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t603;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2397;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2398;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t815;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2225;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16533_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16533(__this, method) (( void (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2__ctor_m16533_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16534_gshared (Dictionary_2_t2220 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16534(__this, ___comparer, method) (( void (*) (Dictionary_2_t2220 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16534_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16536_gshared (Dictionary_2_t2220 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16536(__this, ___capacity, method) (( void (*) (Dictionary_2_t2220 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16536_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16538_gshared (Dictionary_2_t2220 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16538(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2220 *, SerializationInfo_t603 *, StreamingContext_t604 , const MethodInfo*))Dictionary_2__ctor_m16538_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16540_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16540(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16540_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16542_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16542(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2220 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16542_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16544_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16544(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2220 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16544_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16546_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16546(__this, ___key, method) (( bool (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16546_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16548_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16548(__this, ___key, method) (( void (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16548_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16550_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16550(__this, method) (( bool (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16550_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16552_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16552(__this, method) (( Object_t * (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16554_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16554(__this, method) (( bool (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16556_gshared (Dictionary_2_t2220 * __this, KeyValuePair_2_t2222  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16556(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2220 *, KeyValuePair_2_t2222 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16556_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16558_gshared (Dictionary_2_t2220 * __this, KeyValuePair_2_t2222  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16558(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2220 *, KeyValuePair_2_t2222 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16558_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16560_gshared (Dictionary_2_t2220 * __this, KeyValuePair_2U5BU5D_t2397* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16560(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2220 *, KeyValuePair_2U5BU5D_t2397*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16560_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16562_gshared (Dictionary_2_t2220 * __this, KeyValuePair_2_t2222  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16562(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2220 *, KeyValuePair_2_t2222 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16562_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16564_gshared (Dictionary_2_t2220 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16564(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2220 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16564_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16566_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16566(__this, method) (( Object_t * (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16566_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16568_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16568(__this, method) (( Object_t* (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16568_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16570_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16570(__this, method) (( Object_t * (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16570_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16572_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16572(__this, method) (( int32_t (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_get_Count_m16572_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16574_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16574(__this, ___key, method) (( bool (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16574_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16576_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16576(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2220 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16576_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16578_gshared (Dictionary_2_t2220 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16578(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2220 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16578_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16580_gshared (Dictionary_2_t2220 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16580(__this, ___size, method) (( void (*) (Dictionary_2_t2220 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16580_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16582_gshared (Dictionary_2_t2220 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16582(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2220 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16582_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2222  Dictionary_2_make_pair_m16584_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16584(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2222  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16584_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16586_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16586(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16586_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16588_gshared (Dictionary_2_t2220 * __this, KeyValuePair_2U5BU5D_t2397* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16588(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2220 *, KeyValuePair_2U5BU5D_t2397*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16588_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16590_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16590(__this, method) (( void (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_Resize_m16590_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16592_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16592(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2220 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16592_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16594_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16594(__this, method) (( void (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_Clear_m16594_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16596_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16596(__this, ___key, method) (( bool (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16596_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16598_gshared (Dictionary_2_t2220 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16598(__this, ___value, method) (( bool (*) (Dictionary_2_t2220 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16598_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16600_gshared (Dictionary_2_t2220 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16600(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2220 *, SerializationInfo_t603 *, StreamingContext_t604 , const MethodInfo*))Dictionary_2_GetObjectData_m16600_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16602_gshared (Dictionary_2_t2220 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16602(__this, ___sender, method) (( void (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16602_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16604_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16604(__this, ___key, method) (( bool (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16604_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16606_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16606(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2220 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16606_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2225 * Dictionary_2_get_Values_m16608_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16608(__this, method) (( ValueCollection_t2225 * (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_get_Values_m16608_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16610_gshared (Dictionary_2_t2220 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16610(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16610_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16612_gshared (Dictionary_2_t2220 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16612(__this, ___value, method) (( bool (*) (Dictionary_2_t2220 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16612_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16614_gshared (Dictionary_2_t2220 * __this, KeyValuePair_2_t2222  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16614(__this, ___pair, method) (( bool (*) (Dictionary_2_t2220 *, KeyValuePair_2_t2222 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16614_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2227  Dictionary_2_GetEnumerator_m16616_gshared (Dictionary_2_t2220 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16616(__this, method) (( Enumerator_t2227  (*) (Dictionary_2_t2220 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16616_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1005  Dictionary_2_U3CCopyToU3Em__0_m16618_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16618(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1005  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16618_gshared)(__this /* static, unused */, ___key, ___value, method)
