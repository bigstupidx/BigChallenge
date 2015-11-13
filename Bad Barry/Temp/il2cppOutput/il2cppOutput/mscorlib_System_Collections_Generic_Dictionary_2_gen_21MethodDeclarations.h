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
struct Dictionary_2_t1992;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1840;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t621;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2544;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2545;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1996;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12997_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12997(__this, method) (( void (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2__ctor_m12997_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12998_gshared (Dictionary_2_t1992 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12998(__this, ___comparer, method) (( void (*) (Dictionary_2_t1992 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12998_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12999_gshared (Dictionary_2_t1992 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12999(__this, ___capacity, method) (( void (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12999_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13000_gshared (Dictionary_2_t1992 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13000(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1992 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m13000_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13001_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13001(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13001_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13002_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13002(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13002_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13003_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13003(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13003_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13004_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13004(__this, ___key, method) (( bool (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13004_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13005_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13005(__this, ___key, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13005_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13006_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13006(__this, method) (( bool (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13006_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13007_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13007(__this, method) (( Object_t * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13007_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13008_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13008(__this, method) (( bool (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13008_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13009_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1994  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13009(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1994 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13009_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13010_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1994  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13010(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1994 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13010_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13011_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2U5BU5D_t2544* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13011(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, KeyValuePair_2U5BU5D_t2544*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13011_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13012_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1994  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13012(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1994 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13012_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13013_gshared (Dictionary_2_t1992 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13013(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13013_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13014_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13014(__this, method) (( Object_t * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13014_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13015_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13015(__this, method) (( Object_t* (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13015_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13016_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13016(__this, method) (( Object_t * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13016_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13017_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13017(__this, method) (( int32_t (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_get_Count_m13017_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13018_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13018(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13018_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13019_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13019(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13019_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13020_gshared (Dictionary_2_t1992 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13020(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1992 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13020_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13021_gshared (Dictionary_2_t1992 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13021(__this, ___size, method) (( void (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13021_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13022_gshared (Dictionary_2_t1992 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13022(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13022_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1994  Dictionary_2_make_pair_m13023_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13023(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1994  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13023_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13024_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13024(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13024_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13025_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2U5BU5D_t2544* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13025(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1992 *, KeyValuePair_2U5BU5D_t2544*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13025_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13026_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13026(__this, method) (( void (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_Resize_m13026_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13027_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13027(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13027_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13028_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13028(__this, method) (( void (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_Clear_m13028_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13029_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13029(__this, ___key, method) (( bool (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13029_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13030_gshared (Dictionary_2_t1992 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13030(__this, ___value, method) (( bool (*) (Dictionary_2_t1992 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13030_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13031_gshared (Dictionary_2_t1992 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13031(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1992 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m13031_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13032_gshared (Dictionary_2_t1992 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13032(__this, ___sender, method) (( void (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13032_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13033_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13033(__this, ___key, method) (( bool (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13033_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13034_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13034(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1992 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13034_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1996 * Dictionary_2_get_Values_m13035_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13035(__this, method) (( ValueCollection_t1996 * (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_get_Values_m13035_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13036_gshared (Dictionary_2_t1992 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13036(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13036_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13037_gshared (Dictionary_2_t1992 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13037(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13037_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13038_gshared (Dictionary_2_t1992 * __this, KeyValuePair_2_t1994  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13038(__this, ___pair, method) (( bool (*) (Dictionary_2_t1992 *, KeyValuePair_2_t1994 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13038_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1998  Dictionary_2_GetEnumerator_m13039_gshared (Dictionary_2_t1992 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13039(__this, method) (( Enumerator_t1998  (*) (Dictionary_2_t1992 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13039_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m13040_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13040(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13040_gshared)(__this /* static, unused */, ___key, ___value, method)
