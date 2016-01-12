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
struct Dictionary_2_t2444;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1921;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2694;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2695;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t730;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2447;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m18530_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18530(__this, method) (( void (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2__ctor_m18530_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18532_gshared (Dictionary_2_t2444 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18532(__this, ___comparer, method) (( void (*) (Dictionary_2_t2444 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18532_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18534_gshared (Dictionary_2_t2444 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18534(__this, ___capacity, method) (( void (*) (Dictionary_2_t2444 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18536_gshared (Dictionary_2_t2444 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18536(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2444 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2__ctor_m18536_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18538_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18538(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18538_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18540_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18540(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2444 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18540_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18542_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18542(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2444 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18542_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18544_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18544(__this, ___key, method) (( bool (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18544_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18546_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18546(__this, ___key, method) (( void (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18546_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18548_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18548(__this, method) (( bool (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18548_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18550_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18550(__this, method) (( Object_t * (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18552_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18552(__this, method) (( bool (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18552_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18554_gshared (Dictionary_2_t2444 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18554(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2444 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18554_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18556_gshared (Dictionary_2_t2444 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18556(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2444 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18556_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18558_gshared (Dictionary_2_t2444 * __this, KeyValuePair_2U5BU5D_t2694* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18558(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2444 *, KeyValuePair_2U5BU5D_t2694*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18558_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18560_gshared (Dictionary_2_t2444 * __this, KeyValuePair_2_t2416  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18560(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2444 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18560_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18562_gshared (Dictionary_2_t2444 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18562(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2444 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18562_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18564_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18564(__this, method) (( Object_t * (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18564_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18566_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18566(__this, method) (( Object_t* (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18566_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18568_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18568(__this, method) (( Object_t * (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18570_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18570(__this, method) (( int32_t (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_get_Count_m18570_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t698  Dictionary_2_get_Item_m18572_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18572(__this, ___key, method) (( ObjectMetadata_t698  (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18572_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18574_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, ObjectMetadata_t698  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18574(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2444 *, Object_t *, ObjectMetadata_t698 , const MethodInfo*))Dictionary_2_set_Item_m18574_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18576_gshared (Dictionary_2_t2444 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18576(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2444 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18576_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18578_gshared (Dictionary_2_t2444 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18578(__this, ___size, method) (( void (*) (Dictionary_2_t2444 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18578_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18580_gshared (Dictionary_2_t2444 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18580(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2444 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18580_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2416  Dictionary_2_make_pair_m18582_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t698  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18582(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2416  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t698 , const MethodInfo*))Dictionary_2_make_pair_m18582_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t698  Dictionary_2_pick_value_m18584_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t698  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18584(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t698  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t698 , const MethodInfo*))Dictionary_2_pick_value_m18584_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18586_gshared (Dictionary_2_t2444 * __this, KeyValuePair_2U5BU5D_t2694* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18586(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2444 *, KeyValuePair_2U5BU5D_t2694*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18586_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m18588_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18588(__this, method) (( void (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_Resize_m18588_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18590_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, ObjectMetadata_t698  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18590(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2444 *, Object_t *, ObjectMetadata_t698 , const MethodInfo*))Dictionary_2_Add_m18590_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m18592_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18592(__this, method) (( void (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_Clear_m18592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18594_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18594(__this, ___key, method) (( bool (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18594_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18596_gshared (Dictionary_2_t2444 * __this, ObjectMetadata_t698  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18596(__this, ___value, method) (( bool (*) (Dictionary_2_t2444 *, ObjectMetadata_t698 , const MethodInfo*))Dictionary_2_ContainsValue_m18596_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18598_gshared (Dictionary_2_t2444 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18598(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2444 *, SerializationInfo_t653 *, StreamingContext_t654 , const MethodInfo*))Dictionary_2_GetObjectData_m18598_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18600_gshared (Dictionary_2_t2444 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18600(__this, ___sender, method) (( void (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18600_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18602_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18602(__this, ___key, method) (( bool (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18602_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18604_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, ObjectMetadata_t698 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18604(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2444 *, Object_t *, ObjectMetadata_t698 *, const MethodInfo*))Dictionary_2_TryGetValue_m18604_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2447 * Dictionary_2_get_Values_m18606_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18606(__this, method) (( ValueCollection_t2447 * (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_get_Values_m18606_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18608_gshared (Dictionary_2_t2444 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18608(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18608_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t698  Dictionary_2_ToTValue_m18610_gshared (Dictionary_2_t2444 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18610(__this, ___value, method) (( ObjectMetadata_t698  (*) (Dictionary_2_t2444 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18610_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18612_gshared (Dictionary_2_t2444 * __this, KeyValuePair_2_t2416  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18612(__this, ___pair, method) (( bool (*) (Dictionary_2_t2444 *, KeyValuePair_2_t2416 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18612_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2449  Dictionary_2_GetEnumerator_m18614_gshared (Dictionary_2_t2444 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18614(__this, method) (( Enumerator_t2449  (*) (Dictionary_2_t2444 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18614_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t734  Dictionary_2_U3CCopyToU3Em__0_m18616_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t698  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18616(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t734  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t698 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18616_gshared)(__this /* static, unused */, ___key, ___value, method)
