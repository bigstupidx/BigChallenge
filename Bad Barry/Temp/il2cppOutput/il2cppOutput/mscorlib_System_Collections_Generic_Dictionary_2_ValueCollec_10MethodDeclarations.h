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
struct ValueCollection_t1_1201;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t1_1198;
// System.Collections.Generic.IEnumerator`1<LitJson.ArrayMetadata>
struct IEnumerator_1_t1_1590;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t5_27;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m1_7885_gshared (ValueCollection_t1_1201 * __this, Dictionary_2_t1_1198 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1_7885(__this, ___dictionary, method) (( void (*) (ValueCollection_t1_1201 *, Dictionary_2_t1_1198 *, const MethodInfo*))ValueCollection__ctor_m1_7885_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_7886_gshared (ValueCollection_t1_1201 * __this, ArrayMetadata_t5_6  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_7886(__this, ___item, method) (( void (*) (ValueCollection_t1_1201 *, ArrayMetadata_t5_6 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_7886_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_7887_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_7887(__this, method) (( void (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_7887_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_7888_gshared (ValueCollection_t1_1201 * __this, ArrayMetadata_t5_6  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_7888(__this, ___item, method) (( bool (*) (ValueCollection_t1_1201 *, ArrayMetadata_t5_6 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_7888_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_7889_gshared (ValueCollection_t1_1201 * __this, ArrayMetadata_t5_6  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_7889(__this, ___item, method) (( bool (*) (ValueCollection_t1_1201 *, ArrayMetadata_t5_6 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_7889_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_7890_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_7890(__this, method) (( Object_t* (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_7890_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m1_7891_gshared (ValueCollection_t1_1201 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m1_7891(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1201 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m1_7891_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_7892_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_7892(__this, method) (( Object_t * (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_7892_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_7893_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_7893(__this, method) (( bool (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_7893_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_7894_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_7894(__this, method) (( bool (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_7894_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_7895_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_7895(__this, method) (( Object_t * (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_7895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m1_7896_gshared (ValueCollection_t1_1201 * __this, ArrayMetadataU5BU5D_t5_27* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m1_7896(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1201 *, ArrayMetadataU5BU5D_t5_27*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m1_7896_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t1_1202  ValueCollection_GetEnumerator_m1_7897_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1_7897(__this, method) (( Enumerator_t1_1202  (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_GetEnumerator_m1_7897_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m1_7898_gshared (ValueCollection_t1_1201 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m1_7898(__this, method) (( int32_t (*) (ValueCollection_t1_1201 *, const MethodInfo*))ValueCollection_get_Count_m1_7898_gshared)(__this, method)
