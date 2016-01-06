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

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t1233;
// System.Collections.ArrayList
struct ArrayList_t790;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t718;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t99;
// System.Collections.IComparer
struct IComparer_t970;
// System.Object[]
struct ObjectU5BU5D_t128;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C" void ArrayListWrapper__ctor_m7219 (ArrayListWrapper_t1233 * __this, ArrayList_t790 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
extern "C" Object_t * ArrayListWrapper_get_Item_m7220 (ArrayListWrapper_t1233 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C" void ArrayListWrapper_set_Item_m7221 (ArrayListWrapper_t1233 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
extern "C" int32_t ArrayListWrapper_get_Count_m7222 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Capacity()
extern "C" int32_t ArrayListWrapper_get_Capacity_m7223 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Capacity(System.Int32)
extern "C" void ArrayListWrapper_set_Capacity_m7224 (ArrayListWrapper_t1233 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
extern "C" bool ArrayListWrapper_get_IsFixedSize_m7225 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
extern "C" bool ArrayListWrapper_get_IsReadOnly_m7226 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
extern "C" bool ArrayListWrapper_get_IsSynchronized_m7227 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
extern "C" Object_t * ArrayListWrapper_get_SyncRoot_m7228 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
extern "C" int32_t ArrayListWrapper_Add_m7229 (ArrayListWrapper_t1233 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
extern "C" void ArrayListWrapper_Clear_m7230 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
extern "C" bool ArrayListWrapper_Contains_m7231 (ArrayListWrapper_t1233 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
extern "C" int32_t ArrayListWrapper_IndexOf_m7232 (ArrayListWrapper_t1233 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m7233 (ArrayListWrapper_t1233 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayListWrapper_IndexOf_m7234 (ArrayListWrapper_t1233 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
extern "C" void ArrayListWrapper_Insert_m7235 (ArrayListWrapper_t1233 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayListWrapper_InsertRange_m7236 (ArrayListWrapper_t1233 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
extern "C" void ArrayListWrapper_Remove_m7237 (ArrayListWrapper_t1233 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
extern "C" void ArrayListWrapper_RemoveAt_m7238 (ArrayListWrapper_t1233 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
extern "C" void ArrayListWrapper_CopyTo_m7239 (ArrayListWrapper_t1233 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m7240 (ArrayListWrapper_t1233 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayListWrapper_CopyTo_m7241 (ArrayListWrapper_t1233 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
extern "C" Object_t * ArrayListWrapper_GetEnumerator_m7242 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C" void ArrayListWrapper_AddRange_m7243 (ArrayListWrapper_t1233 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::Clone()
extern "C" Object_t * ArrayListWrapper_Clone_m7244 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
extern "C" void ArrayListWrapper_Sort_m7245 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
extern "C" void ArrayListWrapper_Sort_m7246 (ArrayListWrapper_t1233 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
extern "C" ObjectU5BU5D_t128* ArrayListWrapper_ToArray_m7247 (ArrayListWrapper_t1233 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
extern "C" Array_t * ArrayListWrapper_ToArray_m7248 (ArrayListWrapper_t1233 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
