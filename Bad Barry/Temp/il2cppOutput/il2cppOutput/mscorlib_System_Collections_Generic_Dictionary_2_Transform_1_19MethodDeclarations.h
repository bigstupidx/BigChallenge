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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t2229;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t207;
// System.AsyncCallback
struct AsyncCallback_t208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16679_gshared (Transform_1_t2229 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16679(__this, ___object, ___method, method) (( void (*) (Transform_1_t2229 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16679_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2222  Transform_1_Invoke_m16680_gshared (Transform_1_t2229 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16680(__this, ___key, ___value, method) (( KeyValuePair_2_t2222  (*) (Transform_1_t2229 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m16680_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16681_gshared (Transform_1_t2229 * __this, Object_t * ___key, bool ___value, AsyncCallback_t208 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16681(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2229 *, Object_t *, bool, AsyncCallback_t208 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16681_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2222  Transform_1_EndInvoke_m16682_gshared (Transform_1_t2229 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16682(__this, ___result, method) (( KeyValuePair_2_t2222  (*) (Transform_1_t2229 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16682_gshared)(__this, ___result, method)
