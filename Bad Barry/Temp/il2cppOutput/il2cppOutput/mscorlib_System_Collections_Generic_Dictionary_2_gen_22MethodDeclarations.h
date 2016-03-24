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
struct Dictionary_2_t2132;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1967;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t699;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2689;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2690;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t775;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2136;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14116_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14116(__this, method) (( void (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2__ctor_m14116_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14117_gshared (Dictionary_2_t2132 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14117(__this, ___comparer, method) (( void (*) (Dictionary_2_t2132 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14117_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14118_gshared (Dictionary_2_t2132 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14118(__this, ___capacity, method) (( void (*) (Dictionary_2_t2132 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14119_gshared (Dictionary_2_t2132 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14119(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2132 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2__ctor_m14119_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14120_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14120(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14120_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14121_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14121(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2132 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14121_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14122_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14122(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2132 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14122_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14123_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14123(__this, ___key, method) (( bool (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14123_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14124_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14124(__this, ___key, method) (( void (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14124_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14125_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14125(__this, method) (( bool (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14125_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14126_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14126(__this, method) (( Object_t * (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14127_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14127(__this, method) (( bool (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14127_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14128_gshared (Dictionary_2_t2132 * __this, KeyValuePair_2_t2134  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14128(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2132 *, KeyValuePair_2_t2134 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14128_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14129_gshared (Dictionary_2_t2132 * __this, KeyValuePair_2_t2134  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14129(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2132 *, KeyValuePair_2_t2134 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14129_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14130_gshared (Dictionary_2_t2132 * __this, KeyValuePair_2U5BU5D_t2689* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14130(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2132 *, KeyValuePair_2U5BU5D_t2689*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14130_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14131_gshared (Dictionary_2_t2132 * __this, KeyValuePair_2_t2134  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14131(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2132 *, KeyValuePair_2_t2134 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14131_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14132_gshared (Dictionary_2_t2132 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14132(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2132 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14132_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14133_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14133(__this, method) (( Object_t * (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14133_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14134_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14134(__this, method) (( Object_t* (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14134_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14135_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14135(__this, method) (( Object_t * (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14135_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14136_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14136(__this, method) (( int32_t (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_get_Count_m14136_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14137_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14137(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14137_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14138_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14138(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2132 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14138_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14139_gshared (Dictionary_2_t2132 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14139(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2132 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14139_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14140_gshared (Dictionary_2_t2132 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14140(__this, ___size, method) (( void (*) (Dictionary_2_t2132 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14140_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14141_gshared (Dictionary_2_t2132 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14141(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2132 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14141_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2134  Dictionary_2_make_pair_m14142_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14142(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2134  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14142_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14143_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14143(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14143_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14144_gshared (Dictionary_2_t2132 * __this, KeyValuePair_2U5BU5D_t2689* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14144(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2132 *, KeyValuePair_2U5BU5D_t2689*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14144_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14145_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14145(__this, method) (( void (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_Resize_m14145_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14146_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14146(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2132 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14146_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14147_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14147(__this, method) (( void (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_Clear_m14147_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14148_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14148(__this, ___key, method) (( bool (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14148_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14149_gshared (Dictionary_2_t2132 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14149(__this, ___value, method) (( bool (*) (Dictionary_2_t2132 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14149_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14150_gshared (Dictionary_2_t2132 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14150(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2132 *, SerializationInfo_t699 *, StreamingContext_t700 , const MethodInfo*))Dictionary_2_GetObjectData_m14150_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14151_gshared (Dictionary_2_t2132 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14151(__this, ___sender, method) (( void (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14151_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14152_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14152(__this, ___key, method) (( bool (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14152_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14153_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14153(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2132 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14153_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2136 * Dictionary_2_get_Values_m14154_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14154(__this, method) (( ValueCollection_t2136 * (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_get_Values_m14154_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14155_gshared (Dictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14155(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14155_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14156_gshared (Dictionary_2_t2132 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14156(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2132 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14156_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14157_gshared (Dictionary_2_t2132 * __this, KeyValuePair_2_t2134  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14157(__this, ___pair, method) (( bool (*) (Dictionary_2_t2132 *, KeyValuePair_2_t2134 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14157_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2138  Dictionary_2_GetEnumerator_m14158_gshared (Dictionary_2_t2132 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14158(__this, method) (( Enumerator_t2138  (*) (Dictionary_2_t2132 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14158_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t779  Dictionary_2_U3CCopyToU3Em__0_m14159_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14159(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t779  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14159_gshared)(__this /* static, unused */, ___key, ___value, method)
