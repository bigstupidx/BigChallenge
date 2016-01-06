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
struct ValueCollection_t2387;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2384;
// System.Collections.Generic.IEnumerator`1<LitJson.ObjectMetadata>
struct IEnumerator_1_t2633;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Object
struct Object_t;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t2382;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m17995_gshared (ValueCollection_t2387 * __this, Dictionary_2_t2384 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m17995(__this, ___dictionary, method) (( void (*) (ValueCollection_t2387 *, Dictionary_2_t2384 *, const MethodInfo*))ValueCollection__ctor_m17995_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17996_gshared (ValueCollection_t2387 * __this, ObjectMetadata_t685  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17996(__this, ___item, method) (( void (*) (ValueCollection_t2387 *, ObjectMetadata_t685 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17996_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17997_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17997(__this, method) (( void (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17997_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17998_gshared (ValueCollection_t2387 * __this, ObjectMetadata_t685  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17998(__this, ___item, method) (( bool (*) (ValueCollection_t2387 *, ObjectMetadata_t685 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17998_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17999_gshared (ValueCollection_t2387 * __this, ObjectMetadata_t685  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17999(__this, ___item, method) (( bool (*) (ValueCollection_t2387 *, ObjectMetadata_t685 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17999_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18000_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18000(__this, method) (( Object_t* (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18001_gshared (ValueCollection_t2387 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18001(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2387 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18001_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18002_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18002(__this, method) (( Object_t * (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18002_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18003_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18003(__this, method) (( bool (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18003_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18004_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18004(__this, method) (( bool (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18005_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18005(__this, method) (( Object_t * (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18006_gshared (ValueCollection_t2387 * __this, ObjectMetadataU5BU5D_t2382* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18006(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2387 *, ObjectMetadataU5BU5D_t2382*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18006_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2388  ValueCollection_GetEnumerator_m18007_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18007(__this, method) (( Enumerator_t2388  (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_GetEnumerator_m18007_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18008_gshared (ValueCollection_t2387 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18008(__this, method) (( int32_t (*) (ValueCollection_t2387 *, const MethodInfo*))ValueCollection_get_Count_m18008_gshared)(__this, method)
