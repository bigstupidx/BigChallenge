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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2_162;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_1161;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m2_916_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1__ctor_m2_916(__this, method) (( void (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1__ctor_m2_916_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m2_917_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m2_917(__this, method) (( bool (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m2_917_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m2_918_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m2_918(__this, method) (( Object_t * (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m2_918_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m2_919_gshared (Stack_1_t2_162 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m2_919(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2_162 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m2_919_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2_920_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2_920(__this, method) (( Object_t* (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2_920_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m2_921_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m2_921(__this, method) (( Object_t * (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m2_921_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
extern "C" void Stack_1_Clear_m2_922_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_Clear_m2_922(__this, method) (( void (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_Clear_m2_922_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m2_923_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_Peek_m2_923(__this, method) (( Object_t * (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_Peek_m2_923_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m2_924_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_Pop_m2_924(__this, method) (( Object_t * (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_Pop_m2_924_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m2_925_gshared (Stack_1_t2_162 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m2_925(__this, ___t, method) (( void (*) (Stack_1_t2_162 *, Object_t *, const MethodInfo*))Stack_1_Push_m2_925_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m2_926_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m2_926(__this, method) (( int32_t (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_get_Count_m2_926_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2_163  Stack_1_GetEnumerator_m2_927_gshared (Stack_1_t2_162 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m2_927(__this, method) (( Enumerator_t2_163  (*) (Stack_1_t2_162 *, const MethodInfo*))Stack_1_GetEnumerator_m2_927_gshared)(__this, method)
