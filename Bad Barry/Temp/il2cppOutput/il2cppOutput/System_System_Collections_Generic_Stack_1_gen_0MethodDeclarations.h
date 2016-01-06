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
struct Stack_1_t701;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2575;
// System.Collections.IEnumerator
struct IEnumerator_t99;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C" void Stack_1__ctor_m3760_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1__ctor_m3760(__this, method) (( void (*) (Stack_1_t701 *, const MethodInfo*))Stack_1__ctor_m3760_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m18418_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m18418(__this, method) (( bool (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m18418_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m18419_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m18419(__this, method) (( Object_t * (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m18419_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m18420_gshared (Stack_1_t701 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m18420(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t701 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m18420_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18421_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18421(__this, method) (( Object_t* (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18421_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m18422_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m18422(__this, method) (( Object_t * (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m18422_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
extern "C" void Stack_1_Clear_m3768_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_Clear_m3768(__this, method) (( void (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_Clear_m3768_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C" int32_t Stack_1_Peek_m3769_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_Peek_m3769(__this, method) (( int32_t (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_Peek_m3769_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C" int32_t Stack_1_Pop_m3770_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_Pop_m3770(__this, method) (( int32_t (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_Pop_m3770_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
extern "C" void Stack_1_Push_m3761_gshared (Stack_1_t701 * __this, int32_t ___t, const MethodInfo* method);
#define Stack_1_Push_m3761(__this, ___t, method) (( void (*) (Stack_1_t701 *, int32_t, const MethodInfo*))Stack_1_Push_m3761_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C" int32_t Stack_1_get_Count_m18423_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m18423(__this, method) (( int32_t (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_get_Count_m18423_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2419  Stack_1_GetEnumerator_m18424_gshared (Stack_1_t701 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m18424(__this, method) (( Enumerator_t2419  (*) (Stack_1_t701 *, const MethodInfo*))Stack_1_GetEnumerator_m18424_gshared)(__this, method)
