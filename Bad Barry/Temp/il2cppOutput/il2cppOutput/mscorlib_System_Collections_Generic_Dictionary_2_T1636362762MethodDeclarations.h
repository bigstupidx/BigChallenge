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
struct Transform_1_t1636362762;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "LitJson_LitJson_ArrayMetadata4077657517.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m219810509_gshared (Transform_1_t1636362762 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m219810509(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1636362762 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m219810509_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::Invoke(TKey,TValue)
extern "C"  ArrayMetadata_t4077657517  Transform_1_Invoke_m4214344719_gshared (Transform_1_t1636362762 * __this, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4214344719(__this, ___key, ___value, method) ((  ArrayMetadata_t4077657517  (*) (Transform_1_t1636362762 *, Il2CppObject *, ArrayMetadata_t4077657517 , const MethodInfo*))Transform_1_Invoke_m4214344719_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1715087726_gshared (Transform_1_t1636362762 * __this, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1715087726(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1636362762 *, Il2CppObject *, ArrayMetadata_t4077657517 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1715087726_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,LitJson.ArrayMetadata>::EndInvoke(System.IAsyncResult)
extern "C"  ArrayMetadata_t4077657517  Transform_1_EndInvoke_m3658089755_gshared (Transform_1_t1636362762 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3658089755(__this, ___result, method) ((  ArrayMetadata_t4077657517  (*) (Transform_1_t1636362762 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3658089755_gshared)(__this, ___result, method)
