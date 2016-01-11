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

// UnityEngine.CanvasGroup
struct CanvasGroup_t74;
// UnityEngine.Camera
struct Camera_t136;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Single UnityEngine.CanvasGroup::get_alpha()
extern "C" float CanvasGroup_get_alpha_m2264 (CanvasGroup_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C" void CanvasGroup_set_alpha_m2268 (CanvasGroup_t74 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m2508 (CanvasGroup_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
extern "C" void CanvasGroup_set_interactable_m601 (CanvasGroup_t74 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3308 (CanvasGroup_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
extern "C" void CanvasGroup_set_blocksRaycasts_m576 (CanvasGroup_t74 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2298 (CanvasGroup_t74 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3309 (CanvasGroup_t74 * __this, Vector2_t25  ___sp, Camera_t136 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
