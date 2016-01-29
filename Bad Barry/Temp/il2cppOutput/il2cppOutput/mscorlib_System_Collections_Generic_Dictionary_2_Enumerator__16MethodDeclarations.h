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
struct Dictionary_2_t2479;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18910_gshared (Enumerator_t2484 * __this, Dictionary_2_t2479 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18910(__this, ___dictionary, method) (( void (*) (Enumerator_t2484 *, Dictionary_2_t2479 *, const MethodInfo*))Enumerator__ctor_m18910_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18911_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18911(__this, method) (( Object_t * (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18912_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18912(__this, method) (( void (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18912_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t764  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18913_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18913(__this, method) (( DictionaryEntry_t764  (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18913_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18914_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18914(__this, method) (( Object_t * (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18914_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18915_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18915(__this, method) (( Object_t * (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18915_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18916_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18916(__this, method) (( bool (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_MoveNext_m18916_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t2451  Enumerator_get_Current_m18917_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18917(__this, method) (( KeyValuePair_2_t2451  (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_get_Current_m18917_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18918_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18918(__this, method) (( Object_t * (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_get_CurrentKey_m18918_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t728  Enumerator_get_CurrentValue_m18919_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18919(__this, method) (( ObjectMetadata_t728  (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_get_CurrentValue_m18919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m18920_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18920(__this, method) (( void (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_Reset_m18920_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m18921_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18921(__this, method) (( void (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_VerifyState_m18921_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18922_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18922(__this, method) (( void (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_VerifyCurrent_m18922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18923_gshared (Enumerator_t2484 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18923(__this, method) (( void (*) (Enumerator_t2484 *, const MethodInfo*))Enumerator_Dispose_m18923_gshared)(__this, method)
