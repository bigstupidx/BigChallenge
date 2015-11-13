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
struct Transform_1_t2362;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17840_gshared (Transform_1_t2362 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17840(__this, ___object, ___method, method) (( void (*) (Transform_1_t2362 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17840_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2327  Transform_1_Invoke_m17841_gshared (Transform_1_t2362 * __this, Object_t * ___key, ObjectMetadata_t666  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17841(__this, ___key, ___value, method) (( KeyValuePair_2_t2327  (*) (Transform_1_t2362 *, Object_t *, ObjectMetadata_t666 , const MethodInfo*))Transform_1_Invoke_m17841_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17842_gshared (Transform_1_t2362 * __this, Object_t * ___key, ObjectMetadata_t666  ___value, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17842(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2362 *, Object_t *, ObjectMetadata_t666 , AsyncCallback_t229 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17842_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2327  Transform_1_EndInvoke_m17843_gshared (Transform_1_t2362 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17843(__this, ___result, method) (( KeyValuePair_2_t2327  (*) (Transform_1_t2362 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17843_gshared)(__this, ___result, method)
