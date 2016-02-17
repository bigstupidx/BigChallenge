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
struct Stack_1_t764;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2696;
// System.Collections.IEnumerator
struct IEnumerator_t156;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" void Stack_1__ctor_m4117_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1__ctor_m4117(__this, method) (( void (*) (Stack_1_t764 *, const MethodInfo*))Stack_1__ctor_m4117_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m19417_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m19417(__this, method) (( bool (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m19417_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m19418_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m19418(__this, method) (( Object_t * (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m19418_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m19419_gshared (Stack_1_t764 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m19419(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t764 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m19419_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19420_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19420(__this, method) (( Object_t* (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19420_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m19421_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m19421(__this, method) (( Object_t * (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m19421_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
extern "C" void Stack_1_Clear_m4125_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_Clear_m4125(__this, method) (( void (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_Clear_m4125_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" int32_t Stack_1_Peek_m4126_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_Peek_m4126(__this, method) (( int32_t (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_Peek_m4126_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" int32_t Stack_1_Pop_m4127_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_Pop_m4127(__this, method) (( int32_t (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_Pop_m4127_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
extern "C" void Stack_1_Push_m4118_gshared (Stack_1_t764 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Push_m4118(__this, ___t, method) (( void (*) (Stack_1_t764 *, int32_t, const MethodInfo*))Stack_1_Push_m4118_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C" int32_t Stack_1_get_Count_m19422_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m19422(__this, method) (( int32_t (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_get_Count_m19422_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2535  Stack_1_GetEnumerator_m19423_gshared (Stack_1_t764 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m19423(__this, method) (( Enumerator_t2535  (*) (Stack_1_t764 *, const MethodInfo*))Stack_1_GetEnumerator_m19423_gshared)(__this, method)
