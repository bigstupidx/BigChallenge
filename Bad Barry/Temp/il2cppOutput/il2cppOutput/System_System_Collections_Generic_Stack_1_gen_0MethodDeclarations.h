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

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t744;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2675;
// System.Collections.IEnumerator
struct IEnumerator_t132;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" void Stack_1__ctor_m4015_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1__ctor_m4015(__this, method) (( void (*) (Stack_1_t744 *, const MethodInfo*))Stack_1__ctor_m4015_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m19313_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m19313(__this, method) (( bool (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m19313_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m19314_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m19314(__this, method) (( Object_t * (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m19314_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m19315_gshared (Stack_1_t744 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m19315(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t744 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m19315_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19316_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19316(__this, method) (( Object_t* (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19316_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m19317_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m19317(__this, method) (( Object_t * (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m19317_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
extern "C" void Stack_1_Clear_m4023_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_Clear_m4023(__this, method) (( void (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_Clear_m4023_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" int32_t Stack_1_Peek_m4024_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_Peek_m4024(__this, method) (( int32_t (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_Peek_m4024_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" int32_t Stack_1_Pop_m4025_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_Pop_m4025(__this, method) (( int32_t (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_Pop_m4025_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
extern "C" void Stack_1_Push_m4016_gshared (Stack_1_t744 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Push_m4016(__this, ___t, method) (( void (*) (Stack_1_t744 *, int32_t, const MethodInfo*))Stack_1_Push_m4016_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C" int32_t Stack_1_get_Count_m19318_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m19318(__this, method) (( int32_t (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_get_Count_m19318_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2514  Stack_1_GetEnumerator_m19319_gshared (Stack_1_t744 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m19319(__this, method) (( Enumerator_t2514  (*) (Stack_1_t744 *, const MethodInfo*))Stack_1_GetEnumerator_m19319_gshared)(__this, method)
