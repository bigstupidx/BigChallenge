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
struct Dictionary_2_t2333;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17546_gshared (Enumerator_t2338 * __this, Dictionary_2_t2333 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17546(__this, ___dictionary, method) (( void (*) (Enumerator_t2338 *, Dictionary_2_t2333 *, const MethodInfo*))Enumerator__ctor_m17546_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17547_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17547(__this, method) (( Object_t * (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17547_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m17548_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m17548(__this, method) (( void (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m17548_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t702  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17549_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17549(__this, method) (( DictionaryEntry_t702  (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17549_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17550_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17550(__this, method) (( Object_t * (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17550_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17551_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17551(__this, method) (( Object_t * (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17552_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17552(__this, method) (( bool (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_MoveNext_m17552_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t2325  Enumerator_get_Current_m17553_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17553(__this, method) (( KeyValuePair_2_t2325  (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_get_Current_m17553_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m17554_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17554(__this, method) (( Object_t * (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_get_CurrentKey_m17554_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t665  Enumerator_get_CurrentValue_m17555_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17555(__this, method) (( ArrayMetadata_t665  (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_get_CurrentValue_m17555_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m17556_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_Reset_m17556(__this, method) (( void (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_Reset_m17556_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m17557_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17557(__this, method) (( void (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_VerifyState_m17557_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17558_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17558(__this, method) (( void (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_VerifyCurrent_m17558_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m17559_gshared (Enumerator_t2338 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17559(__this, method) (( void (*) (Enumerator_t2338 *, const MethodInfo*))Enumerator_Dispose_m17559_gshared)(__this, method)
