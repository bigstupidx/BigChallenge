﻿#pragma once

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
struct RectMask2D_t245;
// UnityEngine.RectTransform
struct RectTransform_t179;
// UnityEngine.Camera
struct Camera_t155;
// UnityEngine.UI.IClippable
struct IClippable_t352;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.RectMask2D::.ctor()
extern "C" void RectMask2D__ctor_m1291 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RectMask2D::get_canvasRect()
extern "C" Rect_t233  RectMask2D_get_canvasRect_m1292 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::get_rectTransform()
extern "C" RectTransform_t179 * RectMask2D_get_rectTransform_m1293 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnEnable()
extern "C" void RectMask2D_OnEnable_m1294 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnDisable()
extern "C" void RectMask2D_OnDisable_m1295 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.RectMask2D::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectMask2D_IsRaycastLocationValid_m1296 (RectMask2D_t245 * __this, Vector2_t25  ___sp, Camera_t155 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::PerformClipping()
extern "C" void RectMask2D_PerformClipping_m1297 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::AddClippable(UnityEngine.UI.IClippable)
extern "C" void RectMask2D_AddClippable_m1298 (RectMask2D_t245 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::RemoveClippable(UnityEngine.UI.IClippable)
extern "C" void RectMask2D_RemoveClippable_m1299 (RectMask2D_t245 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnTransformParentChanged()
extern "C" void RectMask2D_OnTransformParentChanged_m1300 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnCanvasHierarchyChanged()
extern "C" void RectMask2D_OnCanvasHierarchyChanged_m1301 (RectMask2D_t245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
