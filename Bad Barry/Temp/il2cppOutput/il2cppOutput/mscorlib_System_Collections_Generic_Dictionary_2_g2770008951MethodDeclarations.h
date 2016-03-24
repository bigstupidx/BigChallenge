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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2770008951;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2433375652;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t3741646697;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t397178749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22258540249.h"
#include "mscorlib_System_Array2840145358.h"
#include "LitJson_LitJson_ArrayMetadata4077657517.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2537036892.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C"  void Dictionary_2__ctor_m1284681082_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1284681082(__this, method) ((  void (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2__ctor_m1284681082_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1420942065_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1420942065(__this, ___comparer, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1420942065_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1307966411_gshared (Dictionary_2_t2770008951 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1307966411(__this, ___capacity, method) ((  void (*) (Dictionary_2_t2770008951 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1307966411_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m885457851_gshared (Dictionary_2_t2770008951 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m885457851(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2770008951 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m885457851_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2094908622_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2094908622(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2094908622_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3836575219_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3836575219(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3836575219_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m468227198_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m468227198(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m468227198_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2499685560_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2499685560(__this, ___key, method) ((  bool (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2499685560_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3053993521_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3053993521(__this, ___key, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3053993521_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3735649692_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3735649692(__this, method) ((  bool (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3735649692_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m194872072_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m194872072(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m194872072_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1141897952_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1141897952(__this, method) ((  bool (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1141897952_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m226909767_gshared (Dictionary_2_t2770008951 * __this, KeyValuePair_2_t2258540249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m226909767(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t2770008951 *, KeyValuePair_2_t2258540249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m226909767_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m108378971_gshared (Dictionary_2_t2770008951 * __this, KeyValuePair_2_t2258540249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m108378971(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2770008951 *, KeyValuePair_2_t2258540249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m108378971_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1598614123_gshared (Dictionary_2_t2770008951 * __this, KeyValuePair_2U5BU5D_t2433375652* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1598614123(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2770008951 *, KeyValuePair_2U5BU5D_t2433375652*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1598614123_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2741042496_gshared (Dictionary_2_t2770008951 * __this, KeyValuePair_2_t2258540249  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2741042496(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t2770008951 *, KeyValuePair_2_t2258540249 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2741042496_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2425885962_gshared (Dictionary_2_t2770008951 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2425885962(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2425885962_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3668859781_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3668859781(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3668859781_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m375294658_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m375294658(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m375294658_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m797725981_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m797725981(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m797725981_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3900703714_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3900703714(__this, method) ((  int32_t (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_get_Count_m3900703714_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C"  ArrayMetadata_t4077657517  Dictionary_2_get_Item_m3699366729_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m3699366729(__this, ___key, method) ((  ArrayMetadata_t4077657517  (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3699366729_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3731146170_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m3731146170(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppObject *, ArrayMetadata_t4077657517 , const MethodInfo*))Dictionary_2_set_Item_m3731146170_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2451485938_gshared (Dictionary_2_t2770008951 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2451485938(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t2770008951 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2451485938_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m4085043461_gshared (Dictionary_2_t2770008951 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m4085043461(__this, ___size, method) ((  void (*) (Dictionary_2_t2770008951 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m4085043461_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3641114689_gshared (Dictionary_2_t2770008951 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3641114689(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3641114689_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2258540249  Dictionary_2_make_pair_m532485517_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m532485517(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t2258540249  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, ArrayMetadata_t4077657517 , const MethodInfo*))Dictionary_2_make_pair_m532485517_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C"  ArrayMetadata_t4077657517  Dictionary_2_pick_value_m1458417481_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1458417481(__this /* static, unused */, ___key, ___value, method) ((  ArrayMetadata_t4077657517  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, ArrayMetadata_t4077657517 , const MethodInfo*))Dictionary_2_pick_value_m1458417481_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3045915758_gshared (Dictionary_2_t2770008951 * __this, KeyValuePair_2U5BU5D_t2433375652* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3045915758(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t2770008951 *, KeyValuePair_2U5BU5D_t2433375652*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3045915758_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C"  void Dictionary_2_Resize_m1228204542_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1228204542(__this, method) ((  void (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_Resize_m1228204542_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m807866491_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m807866491(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppObject *, ArrayMetadata_t4077657517 , const MethodInfo*))Dictionary_2_Add_m807866491_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C"  void Dictionary_2_Clear_m2985781669_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2985781669(__this, method) ((  void (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_Clear_m2985781669_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1008793163_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1008793163(__this, ___key, method) ((  bool (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1008793163_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2939301067_gshared (Dictionary_2_t2770008951 * __this, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2939301067(__this, ___value, method) ((  bool (*) (Dictionary_2_t2770008951 *, ArrayMetadata_t4077657517 , const MethodInfo*))Dictionary_2_ContainsValue_m2939301067_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m424828952_gshared (Dictionary_2_t2770008951 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m424828952(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t2770008951 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m424828952_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m4134498636_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m4134498636(__this, ___sender, method) ((  void (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m4134498636_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m497762245_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m497762245(__this, ___key, method) ((  bool (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m497762245_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1583600548_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, ArrayMetadata_t4077657517 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1583600548(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t2770008951 *, Il2CppObject *, ArrayMetadata_t4077657517 *, const MethodInfo*))Dictionary_2_TryGetValue_m1583600548_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C"  ValueCollection_t397178749 * Dictionary_2_get_Values_m1810682139_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1810682139(__this, method) ((  ValueCollection_t397178749 * (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_get_Values_m1810682139_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m2870222884_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2870222884(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2870222884_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C"  ArrayMetadata_t4077657517  Dictionary_2_ToTValue_m4065698916_gshared (Dictionary_2_t2770008951 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m4065698916(__this, ___value, method) ((  ArrayMetadata_t4077657517  (*) (Dictionary_2_t2770008951 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m4065698916_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2058077608_gshared (Dictionary_2_t2770008951 * __this, KeyValuePair_2_t2258540249  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2058077608(__this, ___pair, method) ((  bool (*) (Dictionary_2_t2770008951 *, KeyValuePair_2_t2258540249 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2058077608_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C"  Enumerator_t2537036893  Dictionary_2_GetEnumerator_m2302070399_gshared (Dictionary_2_t2770008951 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2302070399(__this, method) ((  Enumerator_t2537036893  (*) (Dictionary_2_t2770008951 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2302070399_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m2087381006_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2087381006(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, ArrayMetadata_t4077657517 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2087381006_gshared)(__this /* static, unused */, ___key, ___value, method)
