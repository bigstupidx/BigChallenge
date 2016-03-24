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
struct Transform_1_t1421186014;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_788930047.h"
#include "LitJson_LitJson_ObjectMetadata2608047315.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m506296114_gshared (Transform_1_t1421186014 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m506296114(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1421186014 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m506296114_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t788930047  Transform_1_Invoke_m2629277446_gshared (Transform_1_t1421186014 * __this, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2629277446(__this, ___key, ___value, method) ((  KeyValuePair_2_t788930047  (*) (Transform_1_t1421186014 *, Il2CppObject *, ObjectMetadata_t2608047315 , const MethodInfo*))Transform_1_Invoke_m2629277446_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2935766321_gshared (Transform_1_t1421186014 * __this, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2935766321(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1421186014 *, Il2CppObject *, ObjectMetadata_t2608047315 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2935766321_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t788930047  Transform_1_EndInvoke_m474515908_gshared (Transform_1_t1421186014 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m474515908(__this, ___result, method) ((  KeyValuePair_2_t788930047  (*) (Transform_1_t1421186014 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m474515908_gshared)(__this, ___result, method)
