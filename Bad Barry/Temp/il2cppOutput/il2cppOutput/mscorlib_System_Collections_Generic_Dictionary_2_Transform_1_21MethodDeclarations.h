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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct Transform_1_t2485;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18763_gshared (Transform_1_t2485 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18763(__this, ___object, ___method, method) (( void (*) (Transform_1_t2485 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18763_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2470  Transform_1_Invoke_m18764_gshared (Transform_1_t2485 * __this, Object_t * ___key, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18764(__this, ___key, ___value, method) (( KeyValuePair_2_t2470  (*) (Transform_1_t2485 *, Object_t *, ArrayMetadata_t747 , const MethodInfo*))Transform_1_Invoke_m18764_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18765_gshared (Transform_1_t2485 * __this, Object_t * ___key, ArrayMetadata_t747  ___value, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18765(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2485 *, Object_t *, ArrayMetadata_t747 , AsyncCallback_t318 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18765_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2470  Transform_1_EndInvoke_m18766_gshared (Transform_1_t2485 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18766(__this, ___result, method) (( KeyValuePair_2_t2470  (*) (Transform_1_t2485 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18766_gshared)(__this, ___result, method)
