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
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_18.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18631_gshared (Enumerator_t2461 * __this, Dictionary_2_t2457 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m18631(__this, ___host, method) (( void (*) (Enumerator_t2461 *, Dictionary_2_t2457 *, const MethodInfo*))Enumerator__ctor_m18631_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18632_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18632(__this, method) (( Object_t * (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18632_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18633_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18633(__this, method) (( void (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18633_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m18634_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18634(__this, method) (( void (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_Dispose_m18634_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18635_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18635(__this, method) (( bool (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_MoveNext_m18635_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" ArrayMetadata_t727  Enumerator_get_Current_m18636_gshared (Enumerator_t2461 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18636(__this, method) (( ArrayMetadata_t727  (*) (Enumerator_t2461 *, const MethodInfo*))Enumerator_get_Current_m18636_gshared)(__this, method)
