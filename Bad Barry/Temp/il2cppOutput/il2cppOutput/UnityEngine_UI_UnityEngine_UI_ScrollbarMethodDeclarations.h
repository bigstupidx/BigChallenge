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

// UnityEngine.UI.Scrollbar
struct Scrollbar_t238;
// UnityEngine.RectTransform
struct RectTransform_t159;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t235;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t54;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t120;
// UnityEngine.UI.Selectable
struct Selectable_t148;
// UnityEngine.Transform
struct Transform_t35;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C" void Scrollbar__ctor_m1137 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C" RectTransform_t159 * Scrollbar_get_handleRect_m1138 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C" void Scrollbar_set_handleRect_m1139 (Scrollbar_t238 * __this, RectTransform_t159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C" int32_t Scrollbar_get_direction_m1140 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C" void Scrollbar_set_direction_m1141 (Scrollbar_t238 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C" float Scrollbar_get_value_m1142 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C" void Scrollbar_set_value_m1143 (Scrollbar_t238 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C" float Scrollbar_get_size_m1144 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C" void Scrollbar_set_size_m1145 (Scrollbar_t238 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C" int32_t Scrollbar_get_numberOfSteps_m1146 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C" void Scrollbar_set_numberOfSteps_m1147 (Scrollbar_t238 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C" ScrollEvent_t235 * Scrollbar_get_onValueChanged_m1148 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C" void Scrollbar_set_onValueChanged_m1149 (Scrollbar_t238 * __this, ScrollEvent_t235 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C" float Scrollbar_get_stepSize_m1150 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Scrollbar_Rebuild_m1151 (Scrollbar_t238 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C" void Scrollbar_OnEnable_m1152 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C" void Scrollbar_OnDisable_m1153 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C" void Scrollbar_UpdateCachedReferences_m1154 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C" void Scrollbar_Set_m1155 (Scrollbar_t238 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C" void Scrollbar_Set_m1156 (Scrollbar_t238 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C" void Scrollbar_OnRectTransformDimensionsChange_m1157 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C" int32_t Scrollbar_get_axis_m1158 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C" bool Scrollbar_get_reverseValue_m1159 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C" void Scrollbar_UpdateVisuals_m1160 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_UpdateDrag_m1161 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Scrollbar_MayDrag_m1162 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnBeginDrag_m1163 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnDrag_m1164 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerDown_m1165 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * Scrollbar_ClickRepeat_m1166 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerUp_m1167 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Scrollbar_OnMove_m1168 (Scrollbar_t238 * __this, AxisEventData_t120 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C" Selectable_t148 * Scrollbar_FindSelectableOnLeft_m1169 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C" Selectable_t148 * Scrollbar_FindSelectableOnRight_m1170 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C" Selectable_t148 * Scrollbar_FindSelectableOnUp_m1171 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C" Selectable_t148 * Scrollbar_FindSelectableOnDown_m1172 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnInitializePotentialDrag_m1173 (Scrollbar_t238 * __this, PointerEventData_t54 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C" void Scrollbar_SetDirection_m1174 (Scrollbar_t238 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m1175 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t35 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m1176 (Scrollbar_t238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
