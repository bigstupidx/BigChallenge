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
extern "C" void Dictionary_2__ctor_m18472_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18472(__this, method) (( void (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2__ctor_m18472_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18473_gshared (Dictionary_2_t2414 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18473(__this, ___comparer, method) (( void (*) (Dictionary_2_t2414 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18473_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18475_gshared (Dictionary_2_t2414 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18475(__this, ___capacity, method) (( void (*) (Dictionary_2_t2414 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18477_gshared (Dictionary_2_t2414 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18477(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2414 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m18477_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18479_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18479(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18479_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18481_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18481(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18481_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18483_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18483(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18483_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18485_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18485(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18485_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18487_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18487(__this, ___key, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18487_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18489_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18489(__this, method) (( bool (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18489_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18491_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18491(__this, method) (( Object_t * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18493_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18493(__this, method) (( bool (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18493_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18495_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18495(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18495_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18497_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18497(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18497_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18499_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2U5BU5D_t2619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18499(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, KeyValuePair_2U5BU5D_t2619*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18499_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18501_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18501(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18501_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18503_gshared (Dictionary_2_t2414 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18503(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18503_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18505_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18505(__this, method) (( Object_t * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18505_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18507_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18507(__this, method) (( Object_t* (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18507_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18509_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18509(__this, method) (( Object_t * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18509_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18511_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18511(__this, method) (( int32_t (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_get_Count_m18511_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m18513_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18513(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18513_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18515_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18515(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m18515_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18517_gshared (Dictionary_2_t2414 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18517(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2414 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18517_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18519_gshared (Dictionary_2_t2414 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18519(__this, ___size, method) (( void (*) (Dictionary_2_t2414 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18519_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18521_gshared (Dictionary_2_t2414 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18521(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18521_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2416  Dictionary_2_make_pair_m18523_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18523(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2416  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m18523_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m18525_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18525(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m18525_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18527_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2U5BU5D_t2619* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18527(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2414 *, KeyValuePair_2U5BU5D_t2619*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18527_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m18529_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18529(__this, method) (( void (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_Resize_m18529_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18531_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18531(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m18531_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m18533_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18533(__this, method) (( void (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_Clear_m18533_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18535_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18535(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18535_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18537_gshared (Dictionary_2_t2414 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18537(__this, ___value, method) (( bool (*) (Dictionary_2_t2414 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m18537_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18539_gshared (Dictionary_2_t2414 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18539(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2414 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m18539_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18541_gshared (Dictionary_2_t2414 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18541(__this, ___sender, method) (( void (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18541_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18543_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18543(__this, ___key, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18543_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18545_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18545(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m18545_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2419 * Dictionary_2_get_Values_m18547_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18547(__this, method) (( ValueCollection_t2419 * (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_get_Values_m18547_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18549_gshared (Dictionary_2_t2414 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18549(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18549_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m18551_gshared (Dictionary_2_t2414 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18551(__this, ___value, method) (( bool (*) (Dictionary_2_t2414 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18551_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18553_gshared (Dictionary_2_t2414 * __this, KeyValuePair_2_t2416  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18553(__this, ___pair, method) (( bool (*) (Dictionary_2_t2414 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18553_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2421  Dictionary_2_GetEnumerator_m18555_gshared (Dictionary_2_t2414 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18555(__this, method) (( Enumerator_t2421  (*) (Dictionary_2_t2414 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18555_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m18557_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18557(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18557_gshared)(__this /* static, unused */, ___key, ___value, method)
