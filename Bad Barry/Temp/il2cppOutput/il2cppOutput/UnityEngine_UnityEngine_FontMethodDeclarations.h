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

// UnityEngine.Font
struct Font_t215;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t78;
// System.Action`1<UnityEngine.Font>
struct Action_1_t399;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t554;
// UnityEngine.Material
struct Material_t219;
// UnityEngine.CharacterInfo[]
struct CharacterInfoU5BU5D_t635;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void UnityEngine.Font::.ctor()
extern "C" void Font__ctor_m3183 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String)
extern "C" void Font__ctor_m3184 (Font_t215 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
extern "C" void Font__ctor_m3185 (Font_t215 * __this, StringU5BU5D_t78* ___names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m2199 (Object_t * __this /* static, unused */, Action_1_t399 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m3186 (Object_t * __this /* static, unused */, Action_1_t399 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_add_m_FontTextureRebuildCallback_m3187 (Font_t215 * __this, FontTextureRebuildCallback_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_remove_m_FontTextureRebuildCallback_m3188 (Font_t215 * __this, FontTextureRebuildCallback_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t78* Font_GetOSInstalledFontNames_m3189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern "C" void Font_Internal_CreateFont_m3190 (Object_t * __this /* static, unused */, Font_t215 * ____font, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m3191 (Object_t * __this /* static, unused */, Font_t215 * ____font, StringU5BU5D_t78* ____names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern "C" Font_t215 * Font_CreateDynamicFontFromOSFont_m3192 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern "C" Font_t215 * Font_CreateDynamicFontFromOSFont_m3193 (Object_t * __this /* static, unused */, StringU5BU5D_t78* ___fontnames, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t219 * Font_get_material_m2462 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
extern "C" void Font_set_material_m3194 (Font_t215 * __this, Material_t219 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m2334 (Font_t215 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t78* Font_get_fontNames_m3195 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m3196 (Font_t215 * __this, StringU5BU5D_t78* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t635* Font_get_characterInfo_m3197 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
extern "C" void Font_set_characterInfo_m3198 (Font_t215 * __this, CharacterInfoU5BU5D_t635* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C" void Font_RequestCharactersInTexture_m3199 (Font_t215 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m3200 (Font_t215 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m3201 (Font_t215 * __this, String_t* ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m3202 (Object_t * __this /* static, unused */, Font_t215 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t554 * Font_get_textureRebuildCallback_m3203 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m3204 (Font_t215 * __this, FontTextureRebuildCallback_t554 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
extern "C" int32_t Font_GetMaxVertsForString_m3205 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m3206 (Font_t215 * __this, uint16_t ___ch, CharacterInfo_t553 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m3207 (Font_t215 * __this, uint16_t ___ch, CharacterInfo_t553 * ___info, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m3208 (Font_t215 * __this, uint16_t ___ch, CharacterInfo_t553 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m2464 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m3209 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m3210 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m2466 (Font_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
