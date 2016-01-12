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
struct Dictionary_2_t2422;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18370_gshared (Enumerator_t2427 * __this, Dictionary_2_t2422 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18370(__this, ___dictionary, method) (( void (*) (Enumerator_t2427 *, Dictionary_2_t2422 *, const MethodInfo*))Enumerator__ctor_m18370_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18371_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18371(__this, method) (( Object_t * (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18371_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18372_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18372(__this, method) (( void (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18372_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t734  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18373_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18373(__this, method) (( DictionaryEntry_t734  (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18373_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18374_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18374(__this, method) (( Object_t * (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18374_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18375_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18375(__this, method) (( Object_t * (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18375_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18376_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18376(__this, method) (( bool (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_MoveNext_m18376_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t2414  Enumerator_get_Current_m18377_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18377(__this, method) (( KeyValuePair_2_t2414  (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_get_Current_m18377_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18378_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18378(__this, method) (( Object_t * (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_get_CurrentKey_m18378_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t697  Enumerator_get_CurrentValue_m18379_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18379(__this, method) (( ArrayMetadata_t697  (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_get_CurrentValue_m18379_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m18380_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18380(__this, method) (( void (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_Reset_m18380_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m18381_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18381(__this, method) (( void (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_VerifyState_m18381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18382_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18382(__this, method) (( void (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_VerifyCurrent_m18382_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18383_gshared (Enumerator_t2427 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18383(__this, method) (( void (*) (Enumerator_t2427 *, const MethodInfo*))Enumerator_Dispose_m18383_gshared)(__this, method)
