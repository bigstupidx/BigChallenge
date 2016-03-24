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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
struct Transform_1_t2139;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14206_gshared (Transform_1_t2139 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14206(__this, ___object, ___method, method) (( void (*) (Transform_1_t2139 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14206_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m14207_gshared (Transform_1_t2139 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14207(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2139 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m14207_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14208_gshared (Transform_1_t2139 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14208(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2139 *, Object_t *, int32_t, AsyncCallback_t315 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14208_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m14209_gshared (Transform_1_t2139 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14209(__this, ___result, method) (( int32_t (*) (Transform_1_t2139 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14209_gshared)(__this, ___result, method)
