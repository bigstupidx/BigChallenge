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
struct ValueCollection_t2425;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2422;
// System.Collections.Generic.IEnumerator`1<LitJson.ArrayMetadata>
struct IEnumerator_1_t2689;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t109;
// System.Object
struct Object_t;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t2419;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_17.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18350_gshared (ValueCollection_t2425 * __this, Dictionary_2_t2422 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m18350(__this, ___dictionary, method) (( void (*) (ValueCollection_t2425 *, Dictionary_2_t2422 *, const MethodInfo*))ValueCollection__ctor_m18350_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18351_gshared (ValueCollection_t2425 * __this, ArrayMetadata_t697  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18351(__this, ___item, method) (( void (*) (ValueCollection_t2425 *, ArrayMetadata_t697 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18352_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18352(__this, method) (( void (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18353_gshared (ValueCollection_t2425 * __this, ArrayMetadata_t697  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18353(__this, ___item, method) (( bool (*) (ValueCollection_t2425 *, ArrayMetadata_t697 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18354_gshared (ValueCollection_t2425 * __this, ArrayMetadata_t697  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18354(__this, ___item, method) (( bool (*) (ValueCollection_t2425 *, ArrayMetadata_t697 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18354_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18355_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18355(__this, method) (( Object_t* (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18355_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18356_gshared (ValueCollection_t2425 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18356(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2425 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18356_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18357_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18357(__this, method) (( Object_t * (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18358_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18358(__this, method) (( bool (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18358_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18359_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18359(__this, method) (( bool (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18359_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18360_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18360(__this, method) (( Object_t * (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18360_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18361_gshared (ValueCollection_t2425 * __this, ArrayMetadataU5BU5D_t2419* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18361(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2425 *, ArrayMetadataU5BU5D_t2419*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18361_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2426  ValueCollection_GetEnumerator_m18362_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18362(__this, method) (( Enumerator_t2426  (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_GetEnumerator_m18362_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18363_gshared (ValueCollection_t2425 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18363(__this, method) (( int32_t (*) (ValueCollection_t2425 *, const MethodInfo*))ValueCollection_get_Count_m18363_gshared)(__this, method)
