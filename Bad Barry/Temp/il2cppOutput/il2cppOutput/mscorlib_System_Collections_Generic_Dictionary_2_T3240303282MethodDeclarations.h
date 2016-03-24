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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>
struct Transform_1_t3240303282;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "LitJson_LitJson_ObjectMetadata2608047315.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m338076359_gshared (Transform_1_t3240303282 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m338076359(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3240303282 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m338076359_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::Invoke(TKey,TValue)
extern "C"  ObjectMetadata_t2608047315  Transform_1_Invoke_m4209723093_gshared (Transform_1_t3240303282 * __this, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4209723093(__this, ___key, ___value, method) ((  ObjectMetadata_t2608047315  (*) (Transform_1_t3240303282 *, Il2CppObject *, ObjectMetadata_t2608047315 , const MethodInfo*))Transform_1_Invoke_m4209723093_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2315571124_gshared (Transform_1_t3240303282 * __this, Il2CppObject * ___key, ObjectMetadata_t2608047315  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2315571124(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3240303282 *, Il2CppObject *, ObjectMetadata_t2608047315 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2315571124_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::EndInvoke(System.IAsyncResult)
extern "C"  ObjectMetadata_t2608047315  Transform_1_EndInvoke_m2565223061_gshared (Transform_1_t3240303282 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2565223061(__this, ___result, method) ((  ObjectMetadata_t2608047315  (*) (Transform_1_t3240303282 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2565223061_gshared)(__this, ___result, method)
