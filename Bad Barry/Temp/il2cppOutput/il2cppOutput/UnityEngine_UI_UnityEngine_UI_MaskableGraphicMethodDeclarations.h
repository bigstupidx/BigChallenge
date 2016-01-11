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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t253;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t279;
// UnityEngine.Material
struct Material_t233;
// UnityEngine.RectTransform
struct RectTransform_t71;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C" void MaskableGraphic__ctor_m1425 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::get_onCullStateChanged()
extern "C" CullStateChangedEvent_t279 * MaskableGraphic_get_onCullStateChanged_m1426 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent)
extern "C" void MaskableGraphic_set_onCullStateChanged_m1427 (MaskableGraphic_t253 * __this, CullStateChangedEvent_t279 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
extern "C" bool MaskableGraphic_get_maskable_m1428 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
extern "C" void MaskableGraphic_set_maskable_m1429 (MaskableGraphic_t253 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.MaskableGraphic::GetModifiedMaterial(UnityEngine.Material)
extern "C" Material_t233 * MaskableGraphic_GetModifiedMaterial_m1430 (MaskableGraphic_t253 * __this, Material_t233 * ___baseMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean)
extern "C" void MaskableGraphic_Cull_m1431 (MaskableGraphic_t253 * __this, Rect_t130  ___clipRect, bool ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::SetClipRect(UnityEngine.Rect,System.Boolean)
extern "C" void MaskableGraphic_SetClipRect_m1432 (MaskableGraphic_t253 * __this, Rect_t130  ___clipRect, bool ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
extern "C" void MaskableGraphic_OnEnable_m1433 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
extern "C" void MaskableGraphic_OnDisable_m1434 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnTransformParentChanged()
extern "C" void MaskableGraphic_OnTransformParentChanged_m1435 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::ParentMaskStateChanged()
extern "C" void MaskableGraphic_ParentMaskStateChanged_m1436 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnCanvasHierarchyChanged()
extern "C" void MaskableGraphic_OnCanvasHierarchyChanged_m1437 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.MaskableGraphic::get_canvasRect()
extern "C" Rect_t130  MaskableGraphic_get_canvasRect_m1438 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateClipParent()
extern "C" void MaskableGraphic_UpdateClipParent_m1439 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateClipping()
extern "C" void MaskableGraphic_RecalculateClipping_m1440 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateMasking()
extern "C" void MaskableGraphic_RecalculateMasking_m1441 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.MaskableGraphic::UnityEngine.UI.IClippable.get_rectTransform()
extern "C" RectTransform_t71 * MaskableGraphic_UnityEngine_UI_IClippable_get_rectTransform_m1442 (MaskableGraphic_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
