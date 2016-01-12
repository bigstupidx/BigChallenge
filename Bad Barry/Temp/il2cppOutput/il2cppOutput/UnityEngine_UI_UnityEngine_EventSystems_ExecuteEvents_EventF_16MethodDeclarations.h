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
struct EventFunction_1_t438;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t108;
// System.IAsyncResult
struct IAsyncResult_t265;
// System.AsyncCallback
struct AsyncCallback_t266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m12616_gshared (EventFunction_1_t438 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m12616(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t438 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m12616_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m12618_gshared (EventFunction_1_t438 * __this, Object_t * ___handler, BaseEventData_t108 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m12618(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t438 *, Object_t *, BaseEventData_t108 *, const MethodInfo*))EventFunction_1_Invoke_m12618_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m12620_gshared (EventFunction_1_t438 * __this, Object_t * ___handler, BaseEventData_t108 * ___eventData, AsyncCallback_t266 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m12620(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t438 *, Object_t *, BaseEventData_t108 *, AsyncCallback_t266 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m12620_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m12622_gshared (EventFunction_1_t438 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m12622(__this, ___result, method) (( void (*) (EventFunction_1_t438 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m12622_gshared)(__this, ___result, method)
