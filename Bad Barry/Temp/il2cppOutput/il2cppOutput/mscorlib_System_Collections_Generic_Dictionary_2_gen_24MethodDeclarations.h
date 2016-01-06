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
struct Dictionary_2_t2443;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1859;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2648;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2649;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t717;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2448;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m18668_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18668(__this, method) (( void (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2__ctor_m18668_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18669_gshared (Dictionary_2_t2443 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18669(__this, ___comparer, method) (( void (*) (Dictionary_2_t2443 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18669_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18671_gshared (Dictionary_2_t2443 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18671(__this, ___capacity, method) (( void (*) (Dictionary_2_t2443 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18671_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18673_gshared (Dictionary_2_t2443 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18673(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2443 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2__ctor_m18673_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18675_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18675(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18675_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18677_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18677(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2443 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18677_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18679_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18679(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2443 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18679_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18681_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18681(__this, ___key, method) (( bool (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18681_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18683_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18683(__this, ___key, method) (( void (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18683_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18685_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18685(__this, method) (( bool (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18685_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18687_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18687(__this, method) (( Object_t * (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18689_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18689(__this, method) (( bool (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18691_gshared (Dictionary_2_t2443 * __this, KeyValuePair_2_t2445  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18691(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2443 *, KeyValuePair_2_t2445 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18691_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18693_gshared (Dictionary_2_t2443 * __this, KeyValuePair_2_t2445  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18693(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2443 *, KeyValuePair_2_t2445 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18693_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18695_gshared (Dictionary_2_t2443 * __this, KeyValuePair_2U5BU5D_t2648* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18695(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2443 *, KeyValuePair_2U5BU5D_t2648*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18695_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18697_gshared (Dictionary_2_t2443 * __this, KeyValuePair_2_t2445  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18697(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2443 *, KeyValuePair_2_t2445 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18697_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18699_gshared (Dictionary_2_t2443 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18699(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2443 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18699_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18701_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18701(__this, method) (( Object_t * (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18701_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18703_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18703(__this, method) (( Object_t* (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18703_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18705_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18705(__this, method) (( Object_t * (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18705_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18707_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18707(__this, method) (( int32_t (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_get_Count_m18707_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m18709_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18709(__this, ___key, method) (( bool (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18709_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18711_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18711(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2443 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m18711_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18713_gshared (Dictionary_2_t2443 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18713(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2443 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18713_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18715_gshared (Dictionary_2_t2443 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18715(__this, ___size, method) (( void (*) (Dictionary_2_t2443 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18715_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18717_gshared (Dictionary_2_t2443 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18717(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2443 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18717_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2445  Dictionary_2_make_pair_m18719_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18719(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2445  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m18719_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m18721_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18721(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m18721_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18723_gshared (Dictionary_2_t2443 * __this, KeyValuePair_2U5BU5D_t2648* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18723(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2443 *, KeyValuePair_2U5BU5D_t2648*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18723_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m18725_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18725(__this, method) (( void (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_Resize_m18725_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18727_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18727(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2443 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m18727_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m18729_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18729(__this, method) (( void (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_Clear_m18729_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18731_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18731(__this, ___key, method) (( bool (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18731_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18733_gshared (Dictionary_2_t2443 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18733(__this, ___value, method) (( bool (*) (Dictionary_2_t2443 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m18733_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18735_gshared (Dictionary_2_t2443 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18735(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2443 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2_GetObjectData_m18735_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18737_gshared (Dictionary_2_t2443 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18737(__this, ___sender, method) (( void (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18737_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18739_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18739(__this, ___key, method) (( bool (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18739_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18741_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18741(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2443 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m18741_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2448 * Dictionary_2_get_Values_m18743_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18743(__this, method) (( ValueCollection_t2448 * (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_get_Values_m18743_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18745_gshared (Dictionary_2_t2443 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18745(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18745_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m18747_gshared (Dictionary_2_t2443 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18747(__this, ___value, method) (( bool (*) (Dictionary_2_t2443 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18747_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18749_gshared (Dictionary_2_t2443 * __this, KeyValuePair_2_t2445  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18749(__this, ___pair, method) (( bool (*) (Dictionary_2_t2443 *, KeyValuePair_2_t2445 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18749_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2450  Dictionary_2_GetEnumerator_m18751_gshared (Dictionary_2_t2443 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18751(__this, method) (( Enumerator_t2450  (*) (Dictionary_2_t2443 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18751_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t721  Dictionary_2_U3CCopyToU3Em__0_m18753_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18753(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t721  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18753_gshared)(__this /* static, unused */, ___key, ___value, method)
