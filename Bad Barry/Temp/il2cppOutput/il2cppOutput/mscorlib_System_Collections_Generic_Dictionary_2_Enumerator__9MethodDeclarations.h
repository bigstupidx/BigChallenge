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
struct Dictionary_2_t1_1219;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_8178_gshared (Enumerator_t1_1224 * __this, Dictionary_2_t1_1219 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_8178(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1224 *, Dictionary_2_t1_1219 *, const MethodInfo*))Enumerator__ctor_m1_8178_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_8179_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_8179(__this, method) (( Object_t * (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_8179_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_8180_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_8180(__this, method) (( void (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_8180_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_8181_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_8181(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_8181_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_8182_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_8182(__this, method) (( Object_t * (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_8182_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_8183_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_8183(__this, method) (( Object_t * (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_8183_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_8184_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_8184(__this, method) (( bool (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_MoveNext_m1_8184_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t1_1193  Enumerator_get_Current_m1_8185_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_8185(__this, method) (( KeyValuePair_2_t1_1193  (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_get_Current_m1_8185_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_8186_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_8186(__this, method) (( Object_t * (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_8186_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t5_7  Enumerator_get_CurrentValue_m1_8187_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_8187(__this, method) (( ObjectMetadata_t5_7  (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_8187_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m1_8188_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_8188(__this, method) (( void (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_Reset_m1_8188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_8189_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_8189(__this, method) (( void (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_VerifyState_m1_8189_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_8190_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_8190(__this, method) (( void (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_8190_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m1_8191_gshared (Enumerator_t1_1224 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_8191(__this, method) (( void (*) (Enumerator_t1_1224 *, const MethodInfo*))Enumerator_Dispose_m1_8191_gshared)(__this, method)
