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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t268;
// UnityEngine.Component
struct Component_t129;
// UnityEngine.Transform
struct Transform_t36;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t267;
// UnityEngine.UI.IClippable
struct IClippable_t373;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t276;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m1370 (MaskUtilities_t268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m1371 (Object_t * __this /* static, unused */, Component_t129 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m1372 (Object_t * __this /* static, unused */, Component_t129 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t36 * MaskUtilities_FindRootSortOverrideCanvas_m1373 (Object_t * __this /* static, unused */, Transform_t36 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m1374 (Object_t * __this /* static, unused */, Transform_t36 * ___transform, Transform_t36 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t267 * MaskUtilities_GetRectMaskForClippable_m1375 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m1376 (Object_t * __this /* static, unused */, RectMask2D_t267 * ___clipper, List_1_t276 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
