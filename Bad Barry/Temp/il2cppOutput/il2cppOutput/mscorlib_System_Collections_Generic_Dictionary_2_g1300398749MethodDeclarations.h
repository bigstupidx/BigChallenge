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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t1300398749;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t1211959078;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2272036495;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t3222535843;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_788930047.h"
#include "mscorlib_System_Array2840145358.h"
#include "LitJson_LitJson_ObjectMetadata2608047315.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1067426690.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C"  void Dictionary_2__ctor_m3712137446_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3712137446(__this, method) ((  void (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2__ctor_m3712137446_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m130369629_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m130369629(__this, ___comparer, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m130369629_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2536785207_gshared (Dictionary_2_t1300398749 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m2536785207(__this, ___capacity, method) ((  void (*) (Dictionary_2_t1300398749 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2536785207_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m2663093543_gshared (Dictionary_2_t1300398749 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m2663093543(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1300398749 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m2663093543_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m496044696_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m496044696(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m496044696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1260415495_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1260415495(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1260415495_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m326069226_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m326069226(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m326069226_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2154754056_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2154754056(__this, ___key, method) ((  bool (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2154754056_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3839742533_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3839742533(__this, ___key, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3839742533_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m185597004_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m185597004(__this, method) ((  bool (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m185597004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4046500350_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4046500350(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4046500350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4240031120_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4240031120(__this, method) ((  bool (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4240031120_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2321799259_gshared (Dictionary_2_t1300398749 * __this, KeyValuePair_2_t788930047  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2321799259(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t1300398749 *, KeyValuePair_2_t788930047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2321799259_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1584225803_gshared (Dictionary_2_t1300398749 * __this, KeyValuePair_2_t788930047  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1584225803(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1300398749 *, KeyValuePair_2_t788930047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1584225803_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2194376575_gshared (Dictionary_2_t1300398749 * __this, KeyValuePair_2U5BU5D_t1211959078* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2194376575(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1300398749 *, KeyValuePair_2U5BU5D_t1211959078*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2194376575_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4047604720_gshared (Dictionary_2_t1300398749 * __this, KeyValuePair_2_t788930047  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4047604720(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t1300398749 *, KeyValuePair_2_t788930047 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4047604720_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2313956126_gshared (Dictionary_2_t1300398749 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2313956126(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2313956126_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1644399149_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1644399149(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1644399149_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m729303268_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m729303268(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m729303268_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1594993521_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1594993521(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1594993521_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2537172742_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2537172742(__this, method) ((  int32_t (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_get_Count_m2537172742_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C"  ObjectMetadata_t2608047315  Dictionary_2_get_Item_m2376021825_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m2376021825(__this, ___key, method) ((  ObjectMetadata_t2608047315  (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2376021825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3510002726_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m3510002726(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppObject *, ObjectMetadata_t2608047315 , const MethodInfo*))Dictionary_2_set_Item_m3510002726_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2847760478_gshared (Dictionary_2_t1300398749 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2847760478(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t1300398749 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2847760478_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m185568025_gshared (Dictionary_2_t1300398749 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m185568025(__this, ___size, method) ((  void (*) (Dictionary_2_t1300398749 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m185568025_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3111159637_gshared (Dictionary_2_t1300398749 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3111159637(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3111159637_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t788930047  Dictionary_2_make_pair_m1545565417_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1545565417(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t788930047  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, ObjectMetadata_t2608047315 , const MethodInfo*))Dictionary_2_make_pair_m1545565417_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C"  ObjectMetadata_t2608047315  Dictionary_2_pick_value_m990530129_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m990530129(__this /* static, unused */, ___key, ___value, method) ((  ObjectMetadata_t2608047315  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, ObjectMetadata_t2608047315 , const MethodInfo*))Dictionary_2_pick_value_m990530129_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m962619098_gshared (Dictionary_2_t1300398749 * __this, KeyValuePair_2U5BU5D_t1211959078* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m962619098(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t1300398749 *, KeyValuePair_2U5BU5D_t1211959078*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m962619098_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C"  void Dictionary_2_Resize_m3464907794_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3464907794(__this, method) ((  void (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_Resize_m3464907794_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2622430863_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m2622430863(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppObject *, ObjectMetadata_t2608047315 , const MethodInfo*))Dictionary_2_Add_m2622430863_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C"  void Dictionary_2_Clear_m1118270737_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1118270737(__this, method) ((  void (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_Clear_m1118270737_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m793649403_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m793649403(__this, ___key, method) ((  bool (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m793649403_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2641002363_gshared (Dictionary_2_t1300398749 * __this, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2641002363(__this, ___value, method) ((  bool (*) (Dictionary_2_t1300398749 *, ObjectMetadata_t2608047315 , const MethodInfo*))Dictionary_2_ContainsValue_m2641002363_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2667890052_gshared (Dictionary_2_t1300398749 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2667890052(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t1300398749 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m2667890052_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2852181856_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2852181856(__this, ___sender, method) ((  void (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2852181856_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m725231381_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m725231381(__this, ___key, method) ((  bool (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m725231381_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m4258483796_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, ObjectMetadata_t2608047315 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m4258483796(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t1300398749 *, Il2CppObject *, ObjectMetadata_t2608047315 *, const MethodInfo*))Dictionary_2_TryGetValue_m4258483796_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C"  ValueCollection_t3222535843 * Dictionary_2_get_Values_m3646848547_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m3646848547(__this, method) ((  ValueCollection_t3222535843 * (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_get_Values_m3646848547_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m3932399376_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3932399376(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3932399376_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C"  ObjectMetadata_t2608047315  Dictionary_2_ToTValue_m3597811564_gshared (Dictionary_2_t1300398749 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3597811564(__this, ___value, method) ((  ObjectMetadata_t2608047315  (*) (Dictionary_2_t1300398749 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3597811564_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m693644536_gshared (Dictionary_2_t1300398749 * __this, KeyValuePair_2_t788930047  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m693644536(__this, ___pair, method) ((  bool (*) (Dictionary_2_t1300398749 *, KeyValuePair_2_t788930047 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m693644536_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C"  Enumerator_t1067426691  Dictionary_2_GetEnumerator_m7893041_gshared (Dictionary_2_t1300398749 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m7893041(__this, method) ((  Enumerator_t1067426691  (*) (Dictionary_2_t1300398749 *, const MethodInfo*))Dictionary_2_GetEnumerator_m7893041_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m4255924072_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m4255924072(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, ObjectMetadata_t2608047315 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m4255924072_gshared)(__this /* static, unused */, ___key, ___value, method)
