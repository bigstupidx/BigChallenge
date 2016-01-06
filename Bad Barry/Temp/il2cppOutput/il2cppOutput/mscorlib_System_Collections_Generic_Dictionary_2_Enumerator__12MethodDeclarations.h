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
struct Dictionary_2_t2362;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17742_gshared (Enumerator_t2367 * __this, Dictionary_2_t2362 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17742(__this, ___dictionary, method) (( void (*) (Enumerator_t2367 *, Dictionary_2_t2362 *, const MethodInfo*))Enumerator__ctor_m17742_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17743_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17743(__this, method) (( Object_t * (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17743_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m17744_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m17744(__this, method) (( void (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m17744_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t721  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17745_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17745(__this, method) (( DictionaryEntry_t721  (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17746_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17746(__this, method) (( Object_t * (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17746_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17747_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17747(__this, method) (( Object_t * (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17747_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17748_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17748(__this, method) (( bool (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_MoveNext_m17748_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t2354  Enumerator_get_Current_m17749_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17749(__this, method) (( KeyValuePair_2_t2354  (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_get_Current_m17749_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17750_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17750(__this, method) (( Object_t * (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_get_CurrentKey_m17750_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t684  Enumerator_get_CurrentValue_m17751_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17751(__this, method) (( ArrayMetadata_t684  (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_get_CurrentValue_m17751_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m17752_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_Reset_m17752(__this, method) (( void (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_Reset_m17752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m17753_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17753(__this, method) (( void (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_VerifyState_m17753_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17754_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17754(__this, method) (( void (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_VerifyCurrent_m17754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m17755_gshared (Enumerator_t2367 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17755(__this, method) (( void (*) (Enumerator_t2367 *, const MethodInfo*))Enumerator_Dispose_m17755_gshared)(__this, method)
