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

// UnityEngine.UI.RectMask2D
struct RectMask2D_t313;
// UnityEngine.RectTransform
struct RectTransform_t80;
// UnityEngine.Camera
struct Camera_t171;
// UnityEngine.UI.IClippable
struct IClippable_t418;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.RectMask2D::.ctor()
extern "C" void RectMask2D__ctor_m1656 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RectMask2D::get_canvasRect()
extern "C" Rect_t153  RectMask2D_get_canvasRect_m1657 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::get_rectTransform()
extern "C" RectTransform_t80 * RectMask2D_get_rectTransform_m1658 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnEnable()
extern "C" void RectMask2D_OnEnable_m1659 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnDisable()
extern "C" void RectMask2D_OnDisable_m1660 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.RectMask2D::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectMask2D_IsRaycastLocationValid_m1661 (RectMask2D_t313 * __this, Vector2_t33  ___sp, Camera_t171 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::PerformClipping()
extern "C" void RectMask2D_PerformClipping_m1662 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::AddClippable(UnityEngine.UI.IClippable)
extern "C" void RectMask2D_AddClippable_m1663 (RectMask2D_t313 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::RemoveClippable(UnityEngine.UI.IClippable)
extern "C" void RectMask2D_RemoveClippable_m1664 (RectMask2D_t313 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnTransformParentChanged()
extern "C" void RectMask2D_OnTransformParentChanged_m1665 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnCanvasHierarchyChanged()
extern "C" void RectMask2D_OnCanvasHierarchyChanged_m1666 (RectMask2D_t313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
