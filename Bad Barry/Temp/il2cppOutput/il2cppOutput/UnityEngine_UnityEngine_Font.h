#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t443;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t594;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.Font
struct  Font_t262  : public Object_t142
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t594 * ___m_FontTextureRebuildCallback_3;
};
struct Font_t262_StaticFields{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t443 * ___textureRebuilt_2;
};
