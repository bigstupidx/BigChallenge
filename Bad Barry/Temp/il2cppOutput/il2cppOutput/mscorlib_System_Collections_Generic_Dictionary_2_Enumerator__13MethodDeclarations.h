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
struct Dictionary_2_t2478;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18741_gshared (Enumerator_t2483 * __this, Dictionary_2_t2478 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18741(__this, ___dictionary, method) (( void (*) (Enumerator_t2483 *, Dictionary_2_t2478 *, const MethodInfo*))Enumerator__ctor_m18741_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18742_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18742(__this, method) (( Object_t * (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18742_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18743_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18743(__this, method) (( void (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18743_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t784  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18744_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18744(__this, method) (( DictionaryEntry_t784  (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18744_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18745_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18745(__this, method) (( Object_t * (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18746_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18746(__this, method) (( Object_t * (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18747_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18747(__this, method) (( bool (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_MoveNext_m18747_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t2470  Enumerator_get_Current_m18748_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18748(__this, method) (( KeyValuePair_2_t2470  (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_get_Current_m18748_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18749_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18749(__this, method) (( Object_t * (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_get_CurrentKey_m18749_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t747  Enumerator_get_CurrentValue_m18750_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18750(__this, method) (( ArrayMetadata_t747  (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_get_CurrentValue_m18750_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m18751_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18751(__this, method) (( void (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_Reset_m18751_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m18752_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18752(__this, method) (( void (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_VerifyState_m18752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18753_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18753(__this, method) (( void (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_VerifyCurrent_m18753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18754_gshared (Enumerator_t2483 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18754(__this, method) (( void (*) (Enumerator_t2483 *, const MethodInfo*))Enumerator_Dispose_m18754_gshared)(__this, method)
