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
struct Dictionary_2_t2355;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17818_gshared (Enumerator_t2360 * __this, Dictionary_2_t2355 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17818(__this, ___dictionary, method) (( void (*) (Enumerator_t2360 *, Dictionary_2_t2355 *, const MethodInfo*))Enumerator__ctor_m17818_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17819_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17819(__this, method) (( Object_t * (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17819_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m17820_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m17820(__this, method) (( void (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m17820_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t702  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17821_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17821(__this, method) (( DictionaryEntry_t702  (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17821_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17822_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17822(__this, method) (( Object_t * (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17822_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17823_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17823(__this, method) (( Object_t * (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17823_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17824_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17824(__this, method) (( bool (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_MoveNext_m17824_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t2327  Enumerator_get_Current_m17825_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17825(__this, method) (( KeyValuePair_2_t2327  (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_get_Current_m17825_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17826_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17826(__this, method) (( Object_t * (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_get_CurrentKey_m17826_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t666  Enumerator_get_CurrentValue_m17827_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17827(__this, method) (( ObjectMetadata_t666  (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_get_CurrentValue_m17827_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m17828_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_Reset_m17828(__this, method) (( void (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_Reset_m17828_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m17829_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17829(__this, method) (( void (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_VerifyState_m17829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17830_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17830(__this, method) (( void (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_VerifyCurrent_m17830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m17831_gshared (Enumerator_t2360 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17831(__this, method) (( void (*) (Enumerator_t2360 *, const MethodInfo*))Enumerator_Dispose_m17831_gshared)(__this, method)
