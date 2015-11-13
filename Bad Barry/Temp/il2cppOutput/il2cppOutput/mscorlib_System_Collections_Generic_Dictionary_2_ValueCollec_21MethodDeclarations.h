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
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17812_gshared (Enumerator_t2359 * __this, Dictionary_2_t2355 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m17812(__this, ___host, method) (( void (*) (Enumerator_t2359 *, Dictionary_2_t2355 *, const MethodInfo*))Enumerator__ctor_m17812_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17813_gshared (Enumerator_t2359 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17813(__this, method) (( Object_t * (*) (Enumerator_t2359 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17813_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m17814_gshared (Enumerator_t2359 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m17814(__this, method) (( void (*) (Enumerator_t2359 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m17815_gshared (Enumerator_t2359 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17815(__this, method) (( void (*) (Enumerator_t2359 *, const MethodInfo*))Enumerator_Dispose_m17815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17816_gshared (Enumerator_t2359 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17816(__this, method) (( bool (*) (Enumerator_t2359 *, const MethodInfo*))Enumerator_MoveNext_m17816_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" ObjectMetadata_t666  Enumerator_get_Current_m17817_gshared (Enumerator_t2359 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17817(__this, method) (( ObjectMetadata_t666  (*) (Enumerator_t2359 *, const MethodInfo*))Enumerator_get_Current_m17817_gshared)(__this, method)
