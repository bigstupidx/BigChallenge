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
struct ValueCollection_t2436;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2433;
// System.Collections.Generic.IEnumerator`1<LitJson.ObjectMetadata>
struct IEnumerator_1_t2685;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t2431;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18530_gshared (ValueCollection_t2436 * __this, Dictionary_2_t2433 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m18530(__this, ___dictionary, method) (( void (*) (ValueCollection_t2436 *, Dictionary_2_t2433 *, const MethodInfo*))ValueCollection__ctor_m18530_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18531_gshared (ValueCollection_t2436 * __this, ObjectMetadata_t698  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18531(__this, ___item, method) (( void (*) (ValueCollection_t2436 *, ObjectMetadata_t698 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18531_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18532_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18532(__this, method) (( void (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18532_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18533_gshared (ValueCollection_t2436 * __this, ObjectMetadata_t698  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18533(__this, ___item, method) (( bool (*) (ValueCollection_t2436 *, ObjectMetadata_t698 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18533_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18534_gshared (ValueCollection_t2436 * __this, ObjectMetadata_t698  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18534(__this, ___item, method) (( bool (*) (ValueCollection_t2436 *, ObjectMetadata_t698 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18534_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18535_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18535(__this, method) (( Object_t* (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18535_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18536_gshared (ValueCollection_t2436 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18536(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2436 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18536_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18537_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18537(__this, method) (( Object_t * (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18537_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18538_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18538(__this, method) (( bool (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18538_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18539_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18539(__this, method) (( bool (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18540_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18540(__this, method) (( Object_t * (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18540_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18541_gshared (ValueCollection_t2436 * __this, ObjectMetadataU5BU5D_t2431* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18541(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2436 *, ObjectMetadataU5BU5D_t2431*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18541_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2437  ValueCollection_GetEnumerator_m18542_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18542(__this, method) (( Enumerator_t2437  (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_GetEnumerator_m18542_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18543_gshared (ValueCollection_t2436 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18543(__this, method) (( int32_t (*) (ValueCollection_t2436 *, const MethodInfo*))ValueCollection_get_Count_m18543_gshared)(__this, method)
