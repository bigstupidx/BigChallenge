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
struct ValueCollection_t2365;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2362;
// System.Collections.Generic.IEnumerator`1<LitJson.ArrayMetadata>
struct IEnumerator_1_t2626;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Object
struct Object_t;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t2359;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_17.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m17722_gshared (ValueCollection_t2365 * __this, Dictionary_2_t2362 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m17722(__this, ___dictionary, method) (( void (*) (ValueCollection_t2365 *, Dictionary_2_t2362 *, const MethodInfo*))ValueCollection__ctor_m17722_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17723_gshared (ValueCollection_t2365 * __this, ArrayMetadata_t684  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17723(__this, ___item, method) (( void (*) (ValueCollection_t2365 *, ArrayMetadata_t684 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m17723_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17724_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17724(__this, method) (( void (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m17724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17725_gshared (ValueCollection_t2365 * __this, ArrayMetadata_t684  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17725(__this, ___item, method) (( bool (*) (ValueCollection_t2365 *, ArrayMetadata_t684 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m17725_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17726_gshared (ValueCollection_t2365 * __this, ArrayMetadata_t684  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17726(__this, ___item, method) (( bool (*) (ValueCollection_t2365 *, ArrayMetadata_t684 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m17726_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17727_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17727(__this, method) (( Object_t* (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m17727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m17728_gshared (ValueCollection_t2365 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m17728(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2365 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m17728_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17729_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17729(__this, method) (( Object_t * (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m17729_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17730_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17730(__this, method) (( bool (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m17730_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17731_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17731(__this, method) (( bool (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m17731_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m17732_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m17732(__this, method) (( Object_t * (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m17732_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m17733_gshared (ValueCollection_t2365 * __this, ArrayMetadataU5BU5D_t2359* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m17733(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2365 *, ArrayMetadataU5BU5D_t2359*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m17733_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2366  ValueCollection_GetEnumerator_m17734_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m17734(__this, method) (( Enumerator_t2366  (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_GetEnumerator_m17734_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m17735_gshared (ValueCollection_t2365 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m17735(__this, method) (( int32_t (*) (ValueCollection_t2365 *, const MethodInfo*))ValueCollection_get_Count_m17735_gshared)(__this, method)
