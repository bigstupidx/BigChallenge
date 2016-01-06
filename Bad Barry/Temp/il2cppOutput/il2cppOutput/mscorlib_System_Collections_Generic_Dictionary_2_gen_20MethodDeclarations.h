﻿#pragma once

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
struct Dictionary_2_t1996;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1995;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2571;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2572;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t717;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2000;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12836_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12836(__this, method) (( void (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2__ctor_m12836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12838_gshared (Dictionary_2_t1996 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12838(__this, ___comparer, method) (( void (*) (Dictionary_2_t1996 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12838_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12840_gshared (Dictionary_2_t1996 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12840(__this, ___capacity, method) (( void (*) (Dictionary_2_t1996 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12840_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12842_gshared (Dictionary_2_t1996 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12842(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1996 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2__ctor_m12842_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12844_gshared (Dictionary_2_t1996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12844(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1996 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12844_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12846_gshared (Dictionary_2_t1996 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12846(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1996 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12846_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12848_gshared (Dictionary_2_t1996 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12848(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1996 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12848_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12850_gshared (Dictionary_2_t1996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12850(__this, ___key, method) (( bool (*) (Dictionary_2_t1996 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12850_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12852_gshared (Dictionary_2_t1996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12852(__this, ___key, method) (( void (*) (Dictionary_2_t1996 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12852_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12854_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12854(__this, method) (( bool (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12854_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12856_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12856(__this, method) (( Object_t * (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12856_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12858_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12858(__this, method) (( bool (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12860_gshared (Dictionary_2_t1996 * __this, KeyValuePair_2_t1998  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12860(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1996 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12860_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12862_gshared (Dictionary_2_t1996 * __this, KeyValuePair_2_t1998  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12862(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1996 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12862_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12864_gshared (Dictionary_2_t1996 * __this, KeyValuePair_2U5BU5D_t2571* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12864(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1996 *, KeyValuePair_2U5BU5D_t2571*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12864_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12866_gshared (Dictionary_2_t1996 * __this, KeyValuePair_2_t1998  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12866(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1996 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12866_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12868_gshared (Dictionary_2_t1996 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12868(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1996 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12868_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12870_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12870(__this, method) (( Object_t * (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12870_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12872_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12872(__this, method) (( Object_t* (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12872_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12874_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12874(__this, method) (( Object_t * (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12874_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12876_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12876(__this, method) (( int32_t (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_get_Count_m12876_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12878_gshared (Dictionary_2_t1996 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12878(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1996 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12878_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12880_gshared (Dictionary_2_t1996 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12880(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1996 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12880_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12882_gshared (Dictionary_2_t1996 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12882(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1996 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12882_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12884_gshared (Dictionary_2_t1996 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12884(__this, ___size, method) (( void (*) (Dictionary_2_t1996 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12884_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12886_gshared (Dictionary_2_t1996 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12886(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1996 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12886_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1998  Dictionary_2_make_pair_m12888_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12888(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1998  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12888_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12890_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12890(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12890_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12892_gshared (Dictionary_2_t1996 * __this, KeyValuePair_2U5BU5D_t2571* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12892(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1996 *, KeyValuePair_2U5BU5D_t2571*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12892_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12894_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12894(__this, method) (( void (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_Resize_m12894_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12896_gshared (Dictionary_2_t1996 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12896(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1996 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12896_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12898_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12898(__this, method) (( void (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_Clear_m12898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12900_gshared (Dictionary_2_t1996 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12900(__this, ___key, method) (( bool (*) (Dictionary_2_t1996 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12900_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12902_gshared (Dictionary_2_t1996 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12902(__this, ___value, method) (( bool (*) (Dictionary_2_t1996 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12902_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12904_gshared (Dictionary_2_t1996 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12904(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1996 *, SerializationInfo_t640 *, StreamingContext_t641 , const MethodInfo*))Dictionary_2_GetObjectData_m12904_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12906_gshared (Dictionary_2_t1996 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12906(__this, ___sender, method) (( void (*) (Dictionary_2_t1996 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12906_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12908_gshared (Dictionary_2_t1996 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12908(__this, ___key, method) (( bool (*) (Dictionary_2_t1996 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12908_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12910_gshared (Dictionary_2_t1996 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12910(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1996 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12910_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2000 * Dictionary_2_get_Values_m12911_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12911(__this, method) (( ValueCollection_t2000 * (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_get_Values_m12911_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12913_gshared (Dictionary_2_t1996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12913(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1996 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12913_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12915_gshared (Dictionary_2_t1996 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12915(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1996 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12915_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12917_gshared (Dictionary_2_t1996 * __this, KeyValuePair_2_t1998  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12917(__this, ___pair, method) (( bool (*) (Dictionary_2_t1996 *, KeyValuePair_2_t1998 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12917_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2002  Dictionary_2_GetEnumerator_m12918_gshared (Dictionary_2_t1996 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12918(__this, method) (( Enumerator_t2002  (*) (Dictionary_2_t1996 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12918_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t721  Dictionary_2_U3CCopyToU3Em__0_m12920_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12920(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t721  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12920_gshared)(__this /* static, unused */, ___key, ___value, method)