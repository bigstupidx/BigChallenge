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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2112;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2243;
// System.Object[]
struct ObjectU5BU5D_t162;
// System.Predicate`1<System.Object>
struct Predicate_1_t1977;
// System.Comparison`1<System.Object>
struct Comparison_1_t1982;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13997_gshared (IndexedSet_1_t2112 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m13997(__this, method) (( void (*) (IndexedSet_1_t2112 *, const MethodInfo*))IndexedSet_1__ctor_m13997_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13999_gshared (IndexedSet_1_t2112 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13999(__this, method) (( Object_t * (*) (IndexedSet_1_t2112 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13999_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m14001_gshared (IndexedSet_1_t2112 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m14001(__this, ___item, method) (( void (*) (IndexedSet_1_t2112 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m14001_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m14003_gshared (IndexedSet_1_t2112 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m14003(__this, ___item, method) (( bool (*) (IndexedSet_1_t2112 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m14003_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m14005_gshared (IndexedSet_1_t2112 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m14005(__this, method) (( Object_t* (*) (IndexedSet_1_t2112 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m14005_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14007_gshared (IndexedSet_1_t2112 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14007(__this, method) (( void (*) (IndexedSet_1_t2112 *, const MethodInfo*))IndexedSet_1_Clear_m14007_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14009_gshared (IndexedSet_1_t2112 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14009(__this, ___item, method) (( bool (*) (IndexedSet_1_t2112 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14009_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14011_gshared (IndexedSet_1_t2112 * __this, ObjectU5BU5D_t162* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14011(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2112 *, ObjectU5BU5D_t162*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14011_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14013_gshared (IndexedSet_1_t2112 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14013(__this, method) (( int32_t (*) (IndexedSet_1_t2112 *, const MethodInfo*))IndexedSet_1_get_Count_m14013_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14015_gshared (IndexedSet_1_t2112 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14015(__this, method) (( bool (*) (IndexedSet_1_t2112 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14015_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14017_gshared (IndexedSet_1_t2112 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14017(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2112 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14017_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14019_gshared (IndexedSet_1_t2112 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14019(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2112 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14019_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14021_gshared (IndexedSet_1_t2112 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14021(__this, ___index, method) (( void (*) (IndexedSet_1_t2112 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14021_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14023_gshared (IndexedSet_1_t2112 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14023(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2112 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14023_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14025_gshared (IndexedSet_1_t2112 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14025(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2112 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14025_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14027_gshared (IndexedSet_1_t2112 * __this, Predicate_1_t1977 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14027(__this, ___match, method) (( void (*) (IndexedSet_1_t2112 *, Predicate_1_t1977 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14027_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14028_gshared (IndexedSet_1_t2112 * __this, Comparison_1_t1982 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14028(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2112 *, Comparison_1_t1982 *, const MethodInfo*))IndexedSet_1_Sort_m14028_gshared)(__this, ___sortLayoutFunction, method)
