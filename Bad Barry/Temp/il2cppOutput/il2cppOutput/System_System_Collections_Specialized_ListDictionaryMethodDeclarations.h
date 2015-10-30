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

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t856;
// System.Collections.IComparer
struct IComparer_t859;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t857;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t815;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C" void ListDictionary__ctor_m4410 (ListDictionary_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C" void ListDictionary__ctor_m4411 (ListDictionary_t856 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m4412 (ListDictionary_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C" DictionaryNode_t857 * ListDictionary_FindEntry_m4413 (ListDictionary_t856 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C" DictionaryNode_t857 * ListDictionary_FindEntry_m4414 (ListDictionary_t856 * __this, Object_t * ___key, DictionaryNode_t857 ** ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C" void ListDictionary_AddImpl_m4415 (ListDictionary_t856 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t857 * ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C" int32_t ListDictionary_get_Count_m4416 (ListDictionary_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern "C" bool ListDictionary_get_IsSynchronized_m4417 (ListDictionary_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C" Object_t * ListDictionary_get_SyncRoot_m4418 (ListDictionary_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C" void ListDictionary_CopyTo_m4419 (ListDictionary_t856 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C" Object_t * ListDictionary_get_Item_m4420 (ListDictionary_t856 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C" void ListDictionary_set_Item_m4421 (ListDictionary_t856 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C" void ListDictionary_Add_m4422 (ListDictionary_t856 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C" void ListDictionary_Clear_m4423 (ListDictionary_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C" bool ListDictionary_Contains_m4424 (ListDictionary_t856 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C" Object_t * ListDictionary_GetEnumerator_m4425 (ListDictionary_t856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C" void ListDictionary_Remove_m4426 (ListDictionary_t856 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
