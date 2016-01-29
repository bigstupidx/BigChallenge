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
struct Dictionary_2_t2091;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2090;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t684;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2671;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2672;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t760;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2095;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13672_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13672(__this, method) (( void (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2__ctor_m13672_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13674_gshared (Dictionary_2_t2091 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13674(__this, ___comparer, method) (( void (*) (Dictionary_2_t2091 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13674_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13676_gshared (Dictionary_2_t2091 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13676(__this, ___capacity, method) (( void (*) (Dictionary_2_t2091 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13676_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13678_gshared (Dictionary_2_t2091 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13678(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2091 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2__ctor_m13678_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13680_gshared (Dictionary_2_t2091 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13680(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2091 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13680_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13682_gshared (Dictionary_2_t2091 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13682(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2091 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13682_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13684_gshared (Dictionary_2_t2091 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13684(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2091 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13684_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13686_gshared (Dictionary_2_t2091 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13686(__this, ___key, method) (( bool (*) (Dictionary_2_t2091 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13686_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13688_gshared (Dictionary_2_t2091 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13688(__this, ___key, method) (( void (*) (Dictionary_2_t2091 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13688_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13690_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13690(__this, method) (( bool (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13690_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13692_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13692(__this, method) (( Object_t * (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13692_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13694_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13694(__this, method) (( bool (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13694_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13696_gshared (Dictionary_2_t2091 * __this, KeyValuePair_2_t2093  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13696(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2091 *, KeyValuePair_2_t2093 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13696_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13698_gshared (Dictionary_2_t2091 * __this, KeyValuePair_2_t2093  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13698(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2091 *, KeyValuePair_2_t2093 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13698_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13700_gshared (Dictionary_2_t2091 * __this, KeyValuePair_2U5BU5D_t2671* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13700(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2091 *, KeyValuePair_2U5BU5D_t2671*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13700_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13702_gshared (Dictionary_2_t2091 * __this, KeyValuePair_2_t2093  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13702(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2091 *, KeyValuePair_2_t2093 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13702_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13704_gshared (Dictionary_2_t2091 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13704(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2091 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13704_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13706_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13706(__this, method) (( Object_t * (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13706_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13708_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13708(__this, method) (( Object_t* (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13708_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13710_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13710(__this, method) (( Object_t * (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13710_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13712_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13712(__this, method) (( int32_t (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_get_Count_m13712_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13714_gshared (Dictionary_2_t2091 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13714(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2091 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13714_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13716_gshared (Dictionary_2_t2091 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13716(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2091 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13716_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13718_gshared (Dictionary_2_t2091 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13718(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2091 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13718_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13720_gshared (Dictionary_2_t2091 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13720(__this, ___size, method) (( void (*) (Dictionary_2_t2091 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13720_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13722_gshared (Dictionary_2_t2091 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13722(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2091 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13722_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2093  Dictionary_2_make_pair_m13724_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13724(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2093  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13724_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13726_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13726(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13726_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13728_gshared (Dictionary_2_t2091 * __this, KeyValuePair_2U5BU5D_t2671* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13728(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2091 *, KeyValuePair_2U5BU5D_t2671*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13728_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13730_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13730(__this, method) (( void (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_Resize_m13730_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13732_gshared (Dictionary_2_t2091 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13732(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2091 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13732_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13734_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13734(__this, method) (( void (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_Clear_m13734_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13736_gshared (Dictionary_2_t2091 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13736(__this, ___key, method) (( bool (*) (Dictionary_2_t2091 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13736_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13738_gshared (Dictionary_2_t2091 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13738(__this, ___value, method) (( bool (*) (Dictionary_2_t2091 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13738_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13740_gshared (Dictionary_2_t2091 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13740(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2091 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2_GetObjectData_m13740_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13742_gshared (Dictionary_2_t2091 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13742(__this, ___sender, method) (( void (*) (Dictionary_2_t2091 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13742_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13744_gshared (Dictionary_2_t2091 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13744(__this, ___key, method) (( bool (*) (Dictionary_2_t2091 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13744_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13746_gshared (Dictionary_2_t2091 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13746(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2091 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13746_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2095 * Dictionary_2_get_Values_m13747_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13747(__this, method) (( ValueCollection_t2095 * (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_get_Values_m13747_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13749_gshared (Dictionary_2_t2091 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13749(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2091 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13749_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13751_gshared (Dictionary_2_t2091 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13751(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2091 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13751_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13753_gshared (Dictionary_2_t2091 * __this, KeyValuePair_2_t2093  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13753(__this, ___pair, method) (( bool (*) (Dictionary_2_t2091 *, KeyValuePair_2_t2093 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13753_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2097  Dictionary_2_GetEnumerator_m13754_gshared (Dictionary_2_t2091 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13754(__this, method) (( Enumerator_t2097  (*) (Dictionary_2_t2091 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13754_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t764  Dictionary_2_U3CCopyToU3Em__0_m13756_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13756(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t764  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13756_gshared)(__this /* static, unused */, ___key, ___value, method)
