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

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t76;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_GridLayoutGroup_Corner.h"
#include "UnityEngine_UI_UnityEngine_UI_GridLayoutGroup_Axis.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_GridLayoutGroup_Constraint.h"

// System.Void UnityEngine.UI.GridLayoutGroup::.ctor()
extern "C" void GridLayoutGroup__ctor_m921 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::get_startCorner()
extern "C" int32_t GridLayoutGroup_get_startCorner_m2176 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::set_startCorner(UnityEngine.UI.GridLayoutGroup/Corner)
extern "C" void GridLayoutGroup_set_startCorner_m2177 (GridLayoutGroup_t76 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::get_startAxis()
extern "C" int32_t GridLayoutGroup_get_startAxis_m2178 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::set_startAxis(UnityEngine.UI.GridLayoutGroup/Axis)
extern "C" void GridLayoutGroup_set_startAxis_m2179 (GridLayoutGroup_t76 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_cellSize()
extern "C" Vector2_t8  GridLayoutGroup_get_cellSize_m837 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::set_cellSize(UnityEngine.Vector2)
extern "C" void GridLayoutGroup_set_cellSize_m809 (GridLayoutGroup_t76 * __this, Vector2_t8  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_spacing()
extern "C" Vector2_t8  GridLayoutGroup_get_spacing_m926 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::set_spacing(UnityEngine.Vector2)
extern "C" void GridLayoutGroup_set_spacing_m867 (GridLayoutGroup_t76 * __this, Vector2_t8  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::get_constraint()
extern "C" int32_t GridLayoutGroup_get_constraint_m2180 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::set_constraint(UnityEngine.UI.GridLayoutGroup/Constraint)
extern "C" void GridLayoutGroup_set_constraint_m2181 (GridLayoutGroup_t76 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GridLayoutGroup::get_constraintCount()
extern "C" int32_t GridLayoutGroup_get_constraintCount_m2182 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::set_constraintCount(System.Int32)
extern "C" void GridLayoutGroup_set_constraintCount_m2183 (GridLayoutGroup_t76 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::CalculateLayoutInputHorizontal()
extern "C" void GridLayoutGroup_CalculateLayoutInputHorizontal_m922 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::CalculateLayoutInputVertical()
extern "C" void GridLayoutGroup_CalculateLayoutInputVertical_m2184 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::SetLayoutHorizontal()
extern "C" void GridLayoutGroup_SetLayoutHorizontal_m2185 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::SetLayoutVertical()
extern "C" void GridLayoutGroup_SetLayoutVertical_m2186 (GridLayoutGroup_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GridLayoutGroup::SetCellsAlongAxis(System.Int32)
extern "C" void GridLayoutGroup_SetCellsAlongAxis_m2187 (GridLayoutGroup_t76 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
