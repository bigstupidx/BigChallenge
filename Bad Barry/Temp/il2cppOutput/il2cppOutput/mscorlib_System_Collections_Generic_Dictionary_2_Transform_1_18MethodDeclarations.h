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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>
struct Transform_1_t2417;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18291_gshared (Transform_1_t2417 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18291(__this, ___object, ___method, method) (( void (*) (Transform_1_t2417 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18291_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::Invoke(TKey,TValue)
extern "C" ArrayMetadata_t697  Transform_1_Invoke_m18292_gshared (Transform_1_t2417 * __this, Object_t * ___key, ArrayMetadata_t697  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18292(__this, ___key, ___value, method) (( ArrayMetadata_t697  (*) (Transform_1_t2417 *, Object_t *, ArrayMetadata_t697 , const MethodInfo*))Transform_1_Invoke_m18292_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18293_gshared (Transform_1_t2417 * __this, Object_t * ___key, ArrayMetadata_t697  ___value, AsyncCallback_t266 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18293(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2417 *, Object_t *, ArrayMetadata_t697 , AsyncCallback_t266 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18293_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::EndInvoke(System.IAsyncResult)
extern "C" ArrayMetadata_t697  Transform_1_EndInvoke_m18294_gshared (Transform_1_t2417 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18294(__this, ___result, method) (( ArrayMetadata_t697  (*) (Transform_1_t2417 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18294_gshared)(__this, ___result, method)
