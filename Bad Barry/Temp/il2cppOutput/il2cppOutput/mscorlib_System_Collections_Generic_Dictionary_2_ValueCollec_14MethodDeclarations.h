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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t1_1222;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t1_1219;
// System.Collections.Generic.IEnumerator`1<LitJson.ObjectMetadata>
struct IEnumerator_1_t1_1597;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t5_28;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m1_8158_gshared (ValueCollection_t1_1222 * __this, Dictionary_2_t1_1219 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1_8158(__this, ___dictionary, method) (( void (*) (ValueCollection_t1_1222 *, Dictionary_2_t1_1219 *, const MethodInfo*))ValueCollection__ctor_m1_8158_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_8159_gshared (ValueCollection_t1_1222 * __this, ObjectMetadata_t5_7  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_8159(__this, ___item, method) (( void (*) (ValueCollection_t1_1222 *, ObjectMetadata_t5_7 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_8159_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_8160_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_8160(__this, method) (( void (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_8160_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_8161_gshared (ValueCollection_t1_1222 * __this, ObjectMetadata_t5_7  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_8161(__this, ___item, method) (( bool (*) (ValueCollection_t1_1222 *, ObjectMetadata_t5_7 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_8161_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_8162_gshared (ValueCollection_t1_1222 * __this, ObjectMetadata_t5_7  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_8162(__this, ___item, method) (( bool (*) (ValueCollection_t1_1222 *, ObjectMetadata_t5_7 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_8162_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_8163_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_8163(__this, method) (( Object_t* (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_8163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m1_8164_gshared (ValueCollection_t1_1222 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m1_8164(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1222 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m1_8164_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_8165_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_8165(__this, method) (( Object_t * (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_8165_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_8166_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_8166(__this, method) (( bool (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_8166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_8167_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_8167(__this, method) (( bool (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_8167_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_8168_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_8168(__this, method) (( Object_t * (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_8168_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m1_8169_gshared (ValueCollection_t1_1222 * __this, ObjectMetadataU5BU5D_t5_28* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m1_8169(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1222 *, ObjectMetadataU5BU5D_t5_28*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m1_8169_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t1_1223  ValueCollection_GetEnumerator_m1_8170_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1_8170(__this, method) (( Enumerator_t1_1223  (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_GetEnumerator_m1_8170_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m1_8171_gshared (ValueCollection_t1_1222 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m1_8171(__this, method) (( int32_t (*) (ValueCollection_t1_1222 *, const MethodInfo*))ValueCollection_get_Count_m1_8171_gshared)(__this, method)
