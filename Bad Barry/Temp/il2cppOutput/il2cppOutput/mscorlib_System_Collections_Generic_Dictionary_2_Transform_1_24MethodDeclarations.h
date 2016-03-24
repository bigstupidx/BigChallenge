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
struct Transform_1_t2501;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t314;
// System.AsyncCallback
struct AsyncCallback_t315;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19008_gshared (Transform_1_t2501 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19008(__this, ___object, ___method, method) (( void (*) (Transform_1_t2501 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19008_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::Invoke(TKey,TValue)
extern "C" ObjectMetadata_t743  Transform_1_Invoke_m19009_gshared (Transform_1_t2501 * __this, Object_t * ___key, ObjectMetadata_t743  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19009(__this, ___key, ___value, method) (( ObjectMetadata_t743  (*) (Transform_1_t2501 *, Object_t *, ObjectMetadata_t743 , const MethodInfo*))Transform_1_Invoke_m19009_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19010_gshared (Transform_1_t2501 * __this, Object_t * ___key, ObjectMetadata_t743  ___value, AsyncCallback_t315 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19010(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2501 *, Object_t *, ObjectMetadata_t743 , AsyncCallback_t315 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19010_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ObjectMetadata,LitJson.ObjectMetadata>::EndInvoke(System.IAsyncResult)
extern "C" ObjectMetadata_t743  Transform_1_EndInvoke_m19011_gshared (Transform_1_t2501 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19011(__this, ___result, method) (( ObjectMetadata_t743  (*) (Transform_1_t2501 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19011_gshared)(__this, ___result, method)
