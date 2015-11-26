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
struct Stack_1_t2_158;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_1572;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" void Stack_1__ctor_m2_906_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1__ctor_m2_906(__this, method) (( void (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1__ctor_m2_906_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m2_934_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m2_934(__this, method) (( bool (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m2_934_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m2_935_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m2_935(__this, method) (( Object_t * (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m2_935_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m2_936_gshared (Stack_1_t2_158 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m2_936(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2_158 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m2_936_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2_937_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2_937(__this, method) (( Object_t* (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2_937_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m2_938_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m2_938(__this, method) (( Object_t * (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m2_938_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
extern "C" void Stack_1_Clear_m2_908_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_Clear_m2_908(__this, method) (( void (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_Clear_m2_908_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" int32_t Stack_1_Peek_m2_909_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_Peek_m2_909(__this, method) (( int32_t (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_Peek_m2_909_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" int32_t Stack_1_Pop_m2_910_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_Pop_m2_910(__this, method) (( int32_t (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_Pop_m2_910_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
extern "C" void Stack_1_Push_m2_907_gshared (Stack_1_t2_158 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Push_m2_907(__this, ___t, method) (( void (*) (Stack_1_t2_158 *, int32_t, const MethodInfo*))Stack_1_Push_m2_907_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C" int32_t Stack_1_get_Count_m2_939_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m2_939(__this, method) (( int32_t (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_get_Count_m2_939_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2_164  Stack_1_GetEnumerator_m2_940_gshared (Stack_1_t2_158 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m2_940(__this, method) (( Enumerator_t2_164  (*) (Stack_1_t2_158 *, const MethodInfo*))Stack_1_GetEnumerator_m2_940_gshared)(__this, method)
