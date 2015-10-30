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

// UnityEngine.UI.Text
struct Text_t32;
// UnityEngine.TextGenerator
struct TextGenerator_t214;
// UnityEngine.Texture
struct Texture_t230;
// UnityEngine.Font
struct Font_t172;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t77;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Text::.ctor()
extern "C" void Text__ctor_m1384 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::.cctor()
extern "C" void Text__cctor_m1385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
extern "C" TextGenerator_t214 * Text_get_cachedTextGenerator_m1386 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGeneratorForLayout()
extern "C" TextGenerator_t214 * Text_get_cachedTextGeneratorForLayout_m1387 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Text::get_mainTexture()
extern "C" Texture_t230 * Text_get_mainTexture_m1388 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::FontTextureChanged()
extern "C" void Text_FontTextureChanged_m1389 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
extern "C" Font_t172 * Text_get_font_m1390 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
extern "C" void Text_set_font_m1391 (Text_t32 * __this, Font_t172 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Text::get_text()
extern "C" String_t* Text_get_text_m1392 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_text(System.String)
extern "C" void Text_set_text_m1393 (Text_t32 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
extern "C" bool Text_get_supportRichText_m1394 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
extern "C" void Text_set_supportRichText_m1395 (Text_t32 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
extern "C" bool Text_get_resizeTextForBestFit_m1396 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
extern "C" void Text_set_resizeTextForBestFit_m1397 (Text_t32 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMinSize()
extern "C" int32_t Text_get_resizeTextMinSize_m1398 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
extern "C" void Text_set_resizeTextMinSize_m1399 (Text_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
extern "C" int32_t Text_get_resizeTextMaxSize_m1400 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
extern "C" void Text_set_resizeTextMaxSize_m1401 (Text_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
extern "C" int32_t Text_get_alignment_m1402 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
extern "C" void Text_set_alignment_m1403 (Text_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
extern "C" int32_t Text_get_fontSize_m1404 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C" void Text_set_fontSize_m1405 (Text_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
extern "C" int32_t Text_get_horizontalOverflow_m1406 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C" void Text_set_horizontalOverflow_m1407 (Text_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.Text::get_verticalOverflow()
extern "C" int32_t Text_get_verticalOverflow_m1408 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C" void Text_set_verticalOverflow_m1409 (Text_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
extern "C" float Text_get_lineSpacing_m1410 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
extern "C" void Text_set_lineSpacing_m1411 (Text_t32 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
extern "C" int32_t Text_get_fontStyle_m1412 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
extern "C" void Text_set_fontStyle_m1413 (Text_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_pixelsPerUnit()
extern "C" float Text_get_pixelsPerUnit_m1414 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnEnable()
extern "C" void Text_OnEnable_m1415 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnDisable()
extern "C" void Text_OnDisable_m1416 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::UpdateGeometry()
extern "C" void Text_UpdateGeometry_m1417 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
extern "C" TextGenerationSettings_t332  Text_GetGenerationSettings_m1418 (Text_t32 * __this, Vector2_t25  ___extents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Text::GetTextAnchorPivot(UnityEngine.TextAnchor)
extern "C" Vector2_t25  Text_GetTextAnchorPivot_m1419 (Object_t * __this /* static, unused */, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnPopulateMesh(UnityEngine.Mesh)
extern "C" void Text_OnPopulateMesh_m1420 (Text_t32 * __this, Mesh_t77 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputHorizontal()
extern "C" void Text_CalculateLayoutInputHorizontal_m1421 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputVertical()
extern "C" void Text_CalculateLayoutInputVertical_m1422 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minWidth()
extern "C" float Text_get_minWidth_m1423 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredWidth()
extern "C" float Text_get_preferredWidth_m1424 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleWidth()
extern "C" float Text_get_flexibleWidth_m1425 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minHeight()
extern "C" float Text_get_minHeight_m1426 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredHeight()
extern "C" float Text_get_preferredHeight_m1427 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleHeight()
extern "C" float Text_get_flexibleHeight_m1428 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_layoutPriority()
extern "C" int32_t Text_get_layoutPriority_m1429 (Text_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
