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
struct Dictionary_2_t2457;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18637_gshared (Enumerator_t2462 * __this, Dictionary_2_t2457 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18637(__this, ___dictionary, method) (( void (*) (Enumerator_t2462 *, Dictionary_2_t2457 *, const MethodInfo*))Enumerator__ctor_m18637_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18638_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18638(__this, method) (( Object_t * (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18639_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18639(__this, method) (( void (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18639_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t764  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18640_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18640(__this, method) (( DictionaryEntry_t764  (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18640_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18641_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18641(__this, method) (( Object_t * (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18641_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18642_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18642(__this, method) (( Object_t * (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18642_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18643_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18643(__this, method) (( bool (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_MoveNext_m18643_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t2449  Enumerator_get_Current_m18644_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18644(__this, method) (( KeyValuePair_2_t2449  (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_get_Current_m18644_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18645_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18645(__this, method) (( Object_t * (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_get_CurrentKey_m18645_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t727  Enumerator_get_CurrentValue_m18646_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18646(__this, method) (( ArrayMetadata_t727  (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_get_CurrentValue_m18646_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m18647_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18647(__this, method) (( void (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_Reset_m18647_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m18648_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18648(__this, method) (( void (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_VerifyState_m18648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18649_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18649(__this, method) (( void (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_VerifyCurrent_m18649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18650_gshared (Enumerator_t2462 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18650(__this, method) (( void (*) (Enumerator_t2462 *, const MethodInfo*))Enumerator_Dispose_m18650_gshared)(__this, method)
