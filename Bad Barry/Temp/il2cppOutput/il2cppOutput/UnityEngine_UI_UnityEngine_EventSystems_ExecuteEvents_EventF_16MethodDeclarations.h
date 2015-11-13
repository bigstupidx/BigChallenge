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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t403;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t75;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m11866_gshared (EventFunction_1_t403 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m11866(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t403 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m11866_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m11868_gshared (EventFunction_1_t403 * __this, Object_t * ___handler, BaseEventData_t75 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m11868(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t403 *, Object_t *, BaseEventData_t75 *, const MethodInfo*))EventFunction_1_Invoke_m11868_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m11870_gshared (EventFunction_1_t403 * __this, Object_t * ___handler, BaseEventData_t75 * ___eventData, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m11870(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t403 *, Object_t *, BaseEventData_t75 *, AsyncCallback_t229 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m11870_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m11872_gshared (EventFunction_1_t403 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m11872(__this, ___result, method) (( void (*) (EventFunction_1_t403 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m11872_gshared)(__this, ___result, method)
