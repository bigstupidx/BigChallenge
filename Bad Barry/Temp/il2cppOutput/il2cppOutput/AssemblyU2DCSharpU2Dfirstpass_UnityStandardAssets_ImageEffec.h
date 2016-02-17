#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3;
// UnityEngine.Material
struct Material_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// UnityStandardAssets.ImageEffects.Blur
struct  Blur_t1  : public MonoBehaviour_t2
{
	// System.Int32 UnityStandardAssets.ImageEffects.Blur::iterations
	int32_t ___iterations_2;
	// System.Single UnityStandardAssets.ImageEffects.Blur::blurSpread
	float ___blurSpread_3;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Blur::blurShader
	Shader_t3 * ___blurShader_4;
};
struct Blur_t1_StaticFields{
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::m_Material
	Material_t4 * ___m_Material_5;
};
