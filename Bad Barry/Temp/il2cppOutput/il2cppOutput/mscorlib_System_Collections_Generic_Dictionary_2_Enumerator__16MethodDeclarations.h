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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2495;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18994_gshared (Enumerator_t2500 * __this, Dictionary_2_t2495 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18994(__this, ___dictionary, method) (( void (*) (Enumerator_t2500 *, Dictionary_2_t2495 *, const MethodInfo*))Enumerator__ctor_m18994_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18995_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18995(__this, method) (( Object_t * (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18995_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18996_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18996(__this, method) (( void (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18996_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t779  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18997_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18997(__this, method) (( DictionaryEntry_t779  (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18997_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18998_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18998(__this, method) (( Object_t * (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18998_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18999_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18999(__this, method) (( Object_t * (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18999_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19000_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19000(__this, method) (( bool (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_MoveNext_m19000_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t2467  Enumerator_get_Current_m19001_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19001(__this, method) (( KeyValuePair_2_t2467  (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_get_Current_m19001_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19002_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19002(__this, method) (( Object_t * (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_get_CurrentKey_m19002_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t743  Enumerator_get_CurrentValue_m19003_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19003(__this, method) (( ObjectMetadata_t743  (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_get_CurrentValue_m19003_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m19004_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_Reset_m19004(__this, method) (( void (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_Reset_m19004_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m19005_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19005(__this, method) (( void (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_VerifyState_m19005_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19006_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19006(__this, method) (( void (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_VerifyCurrent_m19006_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m19007_gshared (Enumerator_t2500 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19007(__this, method) (( void (*) (Enumerator_t2500 *, const MethodInfo*))Enumerator_Dispose_m19007_gshared)(__this, method)
