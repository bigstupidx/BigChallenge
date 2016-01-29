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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct Transform_1_t2486;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18932_gshared (Transform_1_t2486 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18932(__this, ___object, ___method, method) (( void (*) (Transform_1_t2486 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18932_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2451  Transform_1_Invoke_m18933_gshared (Transform_1_t2486 * __this, Object_t * ___key, ObjectMetadata_t728  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18933(__this, ___key, ___value, method) (( KeyValuePair_2_t2451  (*) (Transform_1_t2486 *, Object_t *, ObjectMetadata_t728 , const MethodInfo*))Transform_1_Invoke_m18933_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18934_gshared (Transform_1_t2486 * __this, Object_t * ___key, ObjectMetadata_t728  ___value, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18934(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2486 *, Object_t *, ObjectMetadata_t728 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18934_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2451  Transform_1_EndInvoke_m18935_gshared (Transform_1_t2486 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18935(__this, ___result, method) (( KeyValuePair_2_t2451  (*) (Transform_1_t2486 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18935_gshared)(__this, ___result, method)
