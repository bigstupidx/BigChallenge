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
struct Dictionary_2_t1838;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1840;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t621;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2304;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2531;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10924_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10924(__this, method) (( void (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2__ctor_m10924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10926_gshared (Dictionary_2_t1838 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10926(__this, ___comparer, method) (( void (*) (Dictionary_2_t1838 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10926_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10928_gshared (Dictionary_2_t1838 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10928(__this, ___capacity, method) (( void (*) (Dictionary_2_t1838 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10928_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10930_gshared (Dictionary_2_t1838 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10930(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1838 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2__ctor_m10930_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10932_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10932(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10932_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10934_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10934(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10934_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10936_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10936_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10938_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10938(__this, ___key, method) (( bool (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10938_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10940_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10940(__this, ___key, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10940_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10942_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10942(__this, method) (( bool (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10942_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10944_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10944(__this, method) (( Object_t * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10946_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10946(__this, method) (( bool (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10948_gshared (Dictionary_2_t1838 * __this, KeyValuePair_2_t1841  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10948(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1838 *, KeyValuePair_2_t1841 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10948_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10950_gshared (Dictionary_2_t1838 * __this, KeyValuePair_2_t1841  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10950(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1838 *, KeyValuePair_2_t1841 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10950_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10952_gshared (Dictionary_2_t1838 * __this, KeyValuePair_2U5BU5D_t2304* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10952(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, KeyValuePair_2U5BU5D_t2304*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10952_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10954_gshared (Dictionary_2_t1838 * __this, KeyValuePair_2_t1841  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10954(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1838 *, KeyValuePair_2_t1841 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10954_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10956_gshared (Dictionary_2_t1838 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10956_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10958_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10958(__this, method) (( Object_t * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10958_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10960_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10960(__this, method) (( Object_t* (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10960_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10962_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10962(__this, method) (( Object_t * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10964_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10964(__this, method) (( int32_t (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_get_Count_m10964_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10966_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10966(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10966_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10968_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10968_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10970_gshared (Dictionary_2_t1838 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10970(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1838 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10970_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10972_gshared (Dictionary_2_t1838 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10972(__this, ___size, method) (( void (*) (Dictionary_2_t1838 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10972_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10974_gshared (Dictionary_2_t1838 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10974(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10974_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1841  Dictionary_2_make_pair_m10976_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10976(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1841  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10976_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10978_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10978(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10978_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10980_gshared (Dictionary_2_t1838 * __this, KeyValuePair_2U5BU5D_t2304* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10980(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1838 *, KeyValuePair_2U5BU5D_t2304*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10980_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10982_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10982(__this, method) (( void (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_Resize_m10982_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10984_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10984(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m10984_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10986_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10986(__this, method) (( void (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_Clear_m10986_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10988_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10988(__this, ___key, method) (( bool (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10988_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10990_gshared (Dictionary_2_t1838 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10990(__this, ___value, method) (( bool (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10990_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10992_gshared (Dictionary_2_t1838 * __this, SerializationInfo_t621 * ___info, StreamingContext_t622  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10992(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1838 *, SerializationInfo_t621 *, StreamingContext_t622 , const MethodInfo*))Dictionary_2_GetObjectData_m10992_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10994_gshared (Dictionary_2_t1838 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10994(__this, ___sender, method) (( void (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10994_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10996_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10996(__this, ___key, method) (( bool (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10996_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10998_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10998(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1838 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10998_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1846 * Dictionary_2_get_Values_m11000_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11000(__this, method) (( ValueCollection_t1846 * (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_get_Values_m11000_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11002_gshared (Dictionary_2_t1838 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11002(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11002_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11004_gshared (Dictionary_2_t1838 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11004(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1838 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11004_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11006_gshared (Dictionary_2_t1838 * __this, KeyValuePair_2_t1841  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11006(__this, ___pair, method) (( bool (*) (Dictionary_2_t1838 *, KeyValuePair_2_t1841 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11006_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1848  Dictionary_2_GetEnumerator_m11008_gshared (Dictionary_2_t1838 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11008(__this, method) (( Enumerator_t1848  (*) (Dictionary_2_t1838 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11008_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t702  Dictionary_2_U3CCopyToU3Em__0_m11010_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11010(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t702  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11010_gshared)(__this /* static, unused */, ___key, ___value, method)
