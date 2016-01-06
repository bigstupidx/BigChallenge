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
struct Dictionary_2_t2384;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18015_gshared (Enumerator_t2389 * __this, Dictionary_2_t2384 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18015(__this, ___dictionary, method) (( void (*) (Enumerator_t2389 *, Dictionary_2_t2384 *, const MethodInfo*))Enumerator__ctor_m18015_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18016_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18016(__this, method) (( Object_t * (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18016_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18017_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18017(__this, method) (( void (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18017_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t721  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18018_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18018(__this, method) (( DictionaryEntry_t721  (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18019_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18019(__this, method) (( Object_t * (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18019_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18020_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18020(__this, method) (( Object_t * (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18021_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18021(__this, method) (( bool (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_MoveNext_m18021_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t2356  Enumerator_get_Current_m18022_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18022(__this, method) (( KeyValuePair_2_t2356  (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_get_Current_m18022_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18023_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18023(__this, method) (( Object_t * (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_get_CurrentKey_m18023_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t685  Enumerator_get_CurrentValue_m18024_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18024(__this, method) (( ObjectMetadata_t685  (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_get_CurrentValue_m18024_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m18025_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18025(__this, method) (( void (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_Reset_m18025_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m18026_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18026(__this, method) (( void (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_VerifyState_m18026_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18027_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18027(__this, method) (( void (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_VerifyCurrent_m18027_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18028_gshared (Enumerator_t2389 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18028(__this, method) (( void (*) (Enumerator_t2389 *, const MethodInfo*))Enumerator_Dispose_m18028_gshared)(__this, method)
