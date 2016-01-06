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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1857;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1859;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2333;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2560;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t717;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1865;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10997_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10997(__this, method) (( void (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2__ctor_m10997_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10999_gshared (Dictionary_2_t1857 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10999(__this, ___comparer, method) (( void (*) (Dictionary_2_t1857 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10999_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11001_gshared (Dictionary_2_t1857 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11001(__this, ___capacity, method) (( void (*) (Dictionary_2_t1857 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11001_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11003_gshared (Dictionary_2_t1857 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11003(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1857 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2__ctor_m11003_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11005_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11005(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11005_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11007_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11007(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1857 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11007_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11009_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11009(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1857 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11009_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11011_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11011(__this, ___key, method) (( bool (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11011_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11013_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11013(__this, ___key, method) (( void (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11013_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11015_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11015(__this, method) (( bool (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11017_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11017(__this, method) (( Object_t * (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11019_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11019(__this, method) (( bool (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11019_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11021_gshared (Dictionary_2_t1857 * __this, KeyValuePair_2_t1860  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11021(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1857 *, KeyValuePair_2_t1860 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11021_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11023_gshared (Dictionary_2_t1857 * __this, KeyValuePair_2_t1860  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11023(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1857 *, KeyValuePair_2_t1860 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11023_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11025_gshared (Dictionary_2_t1857 * __this, KeyValuePair_2U5BU5D_t2333* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11025(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1857 *, KeyValuePair_2U5BU5D_t2333*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11025_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11027_gshared (Dictionary_2_t1857 * __this, KeyValuePair_2_t1860  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11027(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1857 *, KeyValuePair_2_t1860 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11027_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11029_gshared (Dictionary_2_t1857 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11029(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1857 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11029_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11031_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11031(__this, method) (( Object_t * (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11031_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11033_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11033(__this, method) (( Object_t* (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11033_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11035_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11035(__this, method) (( Object_t * (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11035_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11037_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11037(__this, method) (( int32_t (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_get_Count_m11037_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11039_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11039(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11039_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11041_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11041(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1857 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11041_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11043_gshared (Dictionary_2_t1857 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11043(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1857 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11043_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11045_gshared (Dictionary_2_t1857 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11045(__this, ___size, method) (( void (*) (Dictionary_2_t1857 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11045_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11047_gshared (Dictionary_2_t1857 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11047(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1857 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11047_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1860  Dictionary_2_make_pair_m11049_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11049(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1860  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11049_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11051_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11051(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11051_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11053_gshared (Dictionary_2_t1857 * __this, KeyValuePair_2U5BU5D_t2333* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11053(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1857 *, KeyValuePair_2U5BU5D_t2333*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11053_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11055_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11055(__this, method) (( void (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_Resize_m11055_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11057_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11057(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1857 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m11057_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11059_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11059(__this, method) (( void (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_Clear_m11059_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11061_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11061(__this, ___key, method) (( bool (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11061_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11063_gshared (Dictionary_2_t1857 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11063(__this, ___value, method) (( bool (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11063_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11065_gshared (Dictionary_2_t1857 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11065(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1857 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2_GetObjectData_m11065_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11067_gshared (Dictionary_2_t1857 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11067(__this, ___sender, method) (( void (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11067_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11069_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11069(__this, ___key, method) (( bool (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11069_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11071_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11071(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1857 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11071_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1865 * Dictionary_2_get_Values_m11073_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11073(__this, method) (( ValueCollection_t1865 * (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_get_Values_m11073_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11075_gshared (Dictionary_2_t1857 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11075(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11075_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11077_gshared (Dictionary_2_t1857 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11077(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1857 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11077_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11079_gshared (Dictionary_2_t1857 * __this, KeyValuePair_2_t1860  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11079(__this, ___pair, method) (( bool (*) (Dictionary_2_t1857 *, KeyValuePair_2_t1860 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11079_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1867  Dictionary_2_GetEnumerator_m11081_gshared (Dictionary_2_t1857 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11081(__this, method) (( Enumerator_t1867  (*) (Dictionary_2_t1857 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11081_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t721  Dictionary_2_U3CCopyToU3Em__0_m11083_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11083(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t721  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11083_gshared)(__this /* static, unused */, ___key, ___value, method)
