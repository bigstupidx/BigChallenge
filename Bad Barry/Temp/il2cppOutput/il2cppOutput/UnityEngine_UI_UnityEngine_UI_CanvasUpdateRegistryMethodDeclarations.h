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

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t172;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t347;
// UnityEngine.Transform
struct Transform_t44;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
extern "C" void CanvasUpdateRegistry__ctor_m813 (CanvasUpdateRegistry_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
extern "C" void CanvasUpdateRegistry__cctor_m814 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
extern "C" CanvasUpdateRegistry_t172 * CanvasUpdateRegistry_get_instance_m815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_ObjectValidForUpdate_m816 (CanvasUpdateRegistry_t172 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::CleanInvalidItems()
extern "C" void CanvasUpdateRegistry_CleanInvalidItems_m817 (CanvasUpdateRegistry_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
extern "C" void CanvasUpdateRegistry_PerformUpdate_m818 (CanvasUpdateRegistry_t172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
extern "C" int32_t CanvasUpdateRegistry_ParentCount_m819 (Object_t * __this /* static, unused */, Transform_t44 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
extern "C" int32_t CanvasUpdateRegistry_SortLayoutList_m820 (Object_t * __this /* static, unused */, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m821 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_TryRegisterCanvasElementForLayoutRebuild_m822 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m823 (CanvasUpdateRegistry_t172 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m824 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_TryRegisterCanvasElementForGraphicRebuild_m825 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m826 (CanvasUpdateRegistry_t172 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m827 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m828 (CanvasUpdateRegistry_t172 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m829 (CanvasUpdateRegistry_t172 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
extern "C" bool CanvasUpdateRegistry_IsRebuildingLayout_m830 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
extern "C" bool CanvasUpdateRegistry_IsRebuildingGraphics_m831 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
