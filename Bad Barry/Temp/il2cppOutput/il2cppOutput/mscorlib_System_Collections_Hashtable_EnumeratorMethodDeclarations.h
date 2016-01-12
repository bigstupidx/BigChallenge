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

// System.Collections.Hashtable/Enumerator
struct Enumerator_t1264;
// System.Collections.Hashtable
struct Hashtable_t868;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Hashtable/Enumerator::.ctor(System.Collections.Hashtable,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Enumerator__ctor_m7561 (Enumerator_t1264 * __this, Hashtable_t868 * ___host, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m7562 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::FailFast()
extern "C" void Enumerator_FailFast_m7563 (Enumerator_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::Reset()
extern "C" void Enumerator_Reset_m7564 (Enumerator_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m7565 (Enumerator_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Hashtable/Enumerator::get_Entry()
extern "C" DictionaryEntry_t734  Enumerator_get_Entry_m7566 (Enumerator_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m7567 (Enumerator_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m7568 (Enumerator_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m7569 (Enumerator_t1264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
