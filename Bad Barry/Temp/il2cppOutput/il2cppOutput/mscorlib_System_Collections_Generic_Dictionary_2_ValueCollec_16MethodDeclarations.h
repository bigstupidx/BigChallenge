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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2414;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2411;
// System.Collections.Generic.IEnumerator`1<LitJson.ArrayMetadata>
struct IEnumerator_1_t2678;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t2408;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_17.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18257_gshared (ValueCollection_t2414 * __this, Dictionary_2_t2411 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m18257(__this, ___dictionary, method) (( void (*) (ValueCollection_t2414 *, Dictionary_2_t2411 *, const MethodInfo*))ValueCollection__ctor_m18257_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18258_gshared (ValueCollection_t2414 * __this, ArrayMetadata_t697  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18258(__this, ___item, method) (( void (*) (ValueCollection_t2414 *, ArrayMetadata_t697 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18258_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18259_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18259(__this, method) (( void (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18260_gshared (ValueCollection_t2414 * __this, ArrayMetadata_t697  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18260(__this, ___item, method) (( bool (*) (ValueCollection_t2414 *, ArrayMetadata_t697 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18260_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18261_gshared (ValueCollection_t2414 * __this, ArrayMetadata_t697  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18261(__this, ___item, method) (( bool (*) (ValueCollection_t2414 *, ArrayMetadata_t697 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18261_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18262_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18262(__this, method) (( Object_t* (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18263_gshared (ValueCollection_t2414 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18263(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2414 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18263_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18264_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18264(__this, method) (( Object_t * (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18264_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18265_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18265(__this, method) (( bool (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18265_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18266_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18266(__this, method) (( bool (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18266_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18267_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18267(__this, method) (( Object_t * (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18267_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18268_gshared (ValueCollection_t2414 * __this, ArrayMetadataU5BU5D_t2408* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18268(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2414 *, ArrayMetadataU5BU5D_t2408*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18268_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2415  ValueCollection_GetEnumerator_m18269_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18269(__this, method) (( Enumerator_t2415  (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_GetEnumerator_m18269_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18270_gshared (ValueCollection_t2414 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18270(__this, method) (( int32_t (*) (ValueCollection_t2414 *, const MethodInfo*))ValueCollection_get_Count_m18270_gshared)(__this, method)
