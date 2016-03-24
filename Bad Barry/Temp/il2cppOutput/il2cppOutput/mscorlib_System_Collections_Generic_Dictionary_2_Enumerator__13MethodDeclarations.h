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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2473;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18721_gshared (Enumerator_t2478 * __this, Dictionary_2_t2473 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18721(__this, ___dictionary, method) (( void (*) (Enumerator_t2478 *, Dictionary_2_t2473 *, const MethodInfo*))Enumerator__ctor_m18721_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18722_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18722(__this, method) (( Object_t * (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18722_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18723_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18723(__this, method) (( void (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18723_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t779  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18724_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18724(__this, method) (( DictionaryEntry_t779  (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18724_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18725_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18725(__this, method) (( Object_t * (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18725_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18726_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18726(__this, method) (( Object_t * (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18727_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18727(__this, method) (( bool (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_MoveNext_m18727_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t2465  Enumerator_get_Current_m18728_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18728(__this, method) (( KeyValuePair_2_t2465  (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_get_Current_m18728_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18729_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18729(__this, method) (( Object_t * (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_get_CurrentKey_m18729_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t742  Enumerator_get_CurrentValue_m18730_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18730(__this, method) (( ArrayMetadata_t742  (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_get_CurrentValue_m18730_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m18731_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18731(__this, method) (( void (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_Reset_m18731_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m18732_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18732(__this, method) (( void (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_VerifyState_m18732_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18733_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18733(__this, method) (( void (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_VerifyCurrent_m18733_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18734_gshared (Enumerator_t2478 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18734(__this, method) (( void (*) (Enumerator_t2478 *, const MethodInfo*))Enumerator_Dispose_m18734_gshared)(__this, method)
