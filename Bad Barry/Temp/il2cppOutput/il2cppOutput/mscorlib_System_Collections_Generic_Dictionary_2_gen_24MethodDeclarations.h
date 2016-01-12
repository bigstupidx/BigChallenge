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
struct Dictionary_2_t2503;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1921;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2711;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2712;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t730;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2508;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19296_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19296(__this, method) (( void (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2__ctor_m19296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19297_gshared (Dictionary_2_t2503 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19297(__this, ___comparer, method) (( void (*) (Dictionary_2_t2503 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19297_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19299_gshared (Dictionary_2_t2503 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19299(__this, ___capacity, method) (( void (*) (Dictionary_2_t2503 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19299_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19301_gshared (Dictionary_2_t2503 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19301(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2503 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2__ctor_m19301_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19303_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19303(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19303_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19305_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2503 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19305_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19307_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19307(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2503 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19307_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19309_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19309(__this, ___key, method) (( bool (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19309_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19311_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19311(__this, ___key, method) (( void (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19311_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19313_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19313(__this, method) (( bool (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19313_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19315_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19315(__this, method) (( Object_t * (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19317_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19317(__this, method) (( bool (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19317_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19319_gshared (Dictionary_2_t2503 * __this, KeyValuePair_2_t2505  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19319(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2503 *, KeyValuePair_2_t2505 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19319_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19321_gshared (Dictionary_2_t2503 * __this, KeyValuePair_2_t2505  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19321(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2503 *, KeyValuePair_2_t2505 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19321_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19323_gshared (Dictionary_2_t2503 * __this, KeyValuePair_2U5BU5D_t2711* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19323(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2503 *, KeyValuePair_2U5BU5D_t2711*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19323_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19325_gshared (Dictionary_2_t2503 * __this, KeyValuePair_2_t2505  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19325(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2503 *, KeyValuePair_2_t2505 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19325_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19327_gshared (Dictionary_2_t2503 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19327(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2503 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19327_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19329_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19329(__this, method) (( Object_t * (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19329_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19331_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19331(__this, method) (( Object_t* (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19331_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19333_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19333(__this, method) (( Object_t * (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19333_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19335_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19335(__this, method) (( int32_t (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_get_Count_m19335_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19337_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19337(__this, ___key, method) (( bool (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19337_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19339_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19339(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2503 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19339_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19341_gshared (Dictionary_2_t2503 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19341(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2503 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19341_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19343_gshared (Dictionary_2_t2503 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19343(__this, ___size, method) (( void (*) (Dictionary_2_t2503 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19343_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19345_gshared (Dictionary_2_t2503 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2503 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19345_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2505  Dictionary_2_make_pair_m19347_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19347(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2505  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19347_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19349_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19349(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19349_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19351_gshared (Dictionary_2_t2503 * __this, KeyValuePair_2U5BU5D_t2711* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19351(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2503 *, KeyValuePair_2U5BU5D_t2711*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19351_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19353_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19353(__this, method) (( void (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_Resize_m19353_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19355_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19355(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2503 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19355_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19357_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19357(__this, method) (( void (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_Clear_m19357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19359_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19359(__this, ___key, method) (( bool (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19359_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19361_gshared (Dictionary_2_t2503 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19361(__this, ___value, method) (( bool (*) (Dictionary_2_t2503 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19361_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19363_gshared (Dictionary_2_t2503 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19363(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2503 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2_GetObjectData_m19363_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19365_gshared (Dictionary_2_t2503 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19365(__this, ___sender, method) (( void (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19365_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19367_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19367(__this, ___key, method) (( bool (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19367_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19369_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19369(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2503 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19369_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2508 * Dictionary_2_get_Values_m19371_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19371(__this, method) (( ValueCollection_t2508 * (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_get_Values_m19371_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19373_gshared (Dictionary_2_t2503 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19373(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19373_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19375_gshared (Dictionary_2_t2503 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19375(__this, ___value, method) (( bool (*) (Dictionary_2_t2503 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19375_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19377_gshared (Dictionary_2_t2503 * __this, KeyValuePair_2_t2505  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19377(__this, ___pair, method) (( bool (*) (Dictionary_2_t2503 *, KeyValuePair_2_t2505 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19377_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2510  Dictionary_2_GetEnumerator_m19379_gshared (Dictionary_2_t2503 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19379(__this, method) (( Enumerator_t2510  (*) (Dictionary_2_t2503 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19379_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t734  Dictionary_2_U3CCopyToU3Em__0_m19381_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19381(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t734  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19381_gshared)(__this /* static, unused */, ___key, ___value, method)
