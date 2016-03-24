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
struct Transform_1_t4112212790;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22258540249.h"
#include "LitJson_LitJson_ArrayMetadata4077657517.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m840461266_gshared (Transform_1_t4112212790 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m840461266(__this, ___object, ___method, method) ((  void (*) (Transform_1_t4112212790 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m840461266_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2258540249  Transform_1_Invoke_m2559593958_gshared (Transform_1_t4112212790 * __this, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2559593958(__this, ___key, ___value, method) ((  KeyValuePair_2_t2258540249  (*) (Transform_1_t4112212790 *, Il2CppObject *, ArrayMetadata_t4077657517 , const MethodInfo*))Transform_1_Invoke_m2559593958_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2558971281_gshared (Transform_1_t4112212790 * __this, Il2CppObject * ___key, ArrayMetadata_t4077657517  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2558971281(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t4112212790 *, Il2CppObject *, ArrayMetadata_t4077657517 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2558971281_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2258540249  Transform_1_EndInvoke_m3497182948_gshared (Transform_1_t4112212790 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3497182948(__this, ___result, method) ((  KeyValuePair_2_t2258540249  (*) (Transform_1_t4112212790 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3497182948_gshared)(__this, ___result, method)
