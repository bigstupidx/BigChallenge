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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t54;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t58;
// UnityEngine.GameObject
struct GameObject_t3;
// UnityEngine.Camera
struct Camera_t134;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void PointerEventData__ctor_m445 (PointerEventData_t54 * __this, EventSystem_t58 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C" GameObject_t3 * PointerEventData_get_pointerEnter_m446 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerEnter_m447 (PointerEventData_t54 * __this, GameObject_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C" GameObject_t3 * PointerEventData_get_lastPress_m448 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_lastPress_m449 (PointerEventData_t54 * __this, GameObject_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C" GameObject_t3 * PointerEventData_get_rawPointerPress_m450 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_rawPointerPress_m451 (PointerEventData_t54 * __this, GameObject_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C" GameObject_t3 * PointerEventData_get_pointerDrag_m452 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerDrag_m453 (PointerEventData_t54 * __this, GameObject_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C" RaycastResult_t118  PointerEventData_get_pointerCurrentRaycast_m454 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerCurrentRaycast_m455 (PointerEventData_t54 * __this, RaycastResult_t118  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C" RaycastResult_t118  PointerEventData_get_pointerPressRaycast_m456 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C" void PointerEventData_set_pointerPressRaycast_m457 (PointerEventData_t54 * __this, RaycastResult_t118  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C" bool PointerEventData_get_eligibleForClick_m458 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C" void PointerEventData_set_eligibleForClick_m459 (PointerEventData_t54 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C" int32_t PointerEventData_get_pointerId_m249 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C" void PointerEventData_set_pointerId_m460 (PointerEventData_t54 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" Vector2_t25  PointerEventData_get_position_m220 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C" void PointerEventData_set_position_m461 (PointerEventData_t54 * __this, Vector2_t25  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C" Vector2_t25  PointerEventData_get_delta_m462 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_delta_m463 (PointerEventData_t54 * __this, Vector2_t25  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C" Vector2_t25  PointerEventData_get_pressPosition_m464 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C" void PointerEventData_set_pressPosition_m465 (PointerEventData_t54 * __this, Vector2_t25  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C" Vector3_t12  PointerEventData_get_worldPosition_m466 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldPosition_m467 (PointerEventData_t54 * __this, Vector3_t12  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C" Vector3_t12  PointerEventData_get_worldNormal_m468 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C" void PointerEventData_set_worldNormal_m469 (PointerEventData_t54 * __this, Vector3_t12  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C" float PointerEventData_get_clickTime_m470 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C" void PointerEventData_set_clickTime_m471 (PointerEventData_t54 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C" int32_t PointerEventData_get_clickCount_m472 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C" void PointerEventData_set_clickCount_m473 (PointerEventData_t54 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C" Vector2_t25  PointerEventData_get_scrollDelta_m474 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C" void PointerEventData_set_scrollDelta_m475 (PointerEventData_t54 * __this, Vector2_t25  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C" bool PointerEventData_get_useDragThreshold_m476 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C" void PointerEventData_set_useDragThreshold_m477 (PointerEventData_t54 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C" bool PointerEventData_get_dragging_m478 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C" void PointerEventData_set_dragging_m479 (PointerEventData_t54 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C" int32_t PointerEventData_get_button_m480 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C" void PointerEventData_set_button_m481 (PointerEventData_t54 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C" bool PointerEventData_IsPointerMoving_m482 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C" bool PointerEventData_IsScrolling_m483 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C" Camera_t134 * PointerEventData_get_enterEventCamera_m484 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C" Camera_t134 * PointerEventData_get_pressEventCamera_m485 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C" GameObject_t3 * PointerEventData_get_pointerPress_m486 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C" void PointerEventData_set_pointerPress_m487 (PointerEventData_t54 * __this, GameObject_t3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C" String_t* PointerEventData_ToString_m488 (PointerEventData_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
