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

// UnityEngine.Texture
struct Texture_t338;
// UnityEngine.RenderTexture
struct RenderTexture_t5;
// UnityEngine.Material
struct Material_t4;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t7;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C" void Graphics_Blit_m24 (Object_t * __this /* static, unused */, Texture_t338 * ___source, RenderTexture_t5 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_BlitMultiTap_m19 (Object_t * __this /* static, unused */, Texture_t338 * ___source, RenderTexture_t5 * ___dest, Material_t4 * ___mat, Vector2U5BU5D_t7* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C" void Graphics_Internal_BlitMultiTap_m3024 (Object_t * __this /* static, unused */, Texture_t338 * ___source, RenderTexture_t5 * ___dest, Material_t4 * ___mat, Vector2U5BU5D_t7* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
