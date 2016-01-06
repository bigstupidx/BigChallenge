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

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t180;
// UnityEngine.Camera
struct Camera_t122;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t95;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t171;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
extern "C" void PhysicsRaycaster__ctor_m862 (PhysicsRaycaster_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
extern "C" Camera_t122 * PhysicsRaycaster_get_eventCamera_m863 (PhysicsRaycaster_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
extern "C" int32_t PhysicsRaycaster_get_depth_m864 (PhysicsRaycaster_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
extern "C" int32_t PhysicsRaycaster_get_finalEventMask_m865 (PhysicsRaycaster_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
extern "C" LayerMask_t181  PhysicsRaycaster_get_eventMask_m866 (PhysicsRaycaster_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C" void PhysicsRaycaster_set_eventMask_m867 (PhysicsRaycaster_t180 * __this, LayerMask_t181  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void PhysicsRaycaster_Raycast_m868 (PhysicsRaycaster_t180 * __this, PointerEventData_t95 * ___eventData, List_1_t171 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C" int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m869 (Object_t * __this /* static, unused */, RaycastHit_t365  ___r1, RaycastHit_t365  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
