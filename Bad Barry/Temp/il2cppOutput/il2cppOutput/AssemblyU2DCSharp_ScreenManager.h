#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FadeSprite
struct FadeSprite_t101;
// GameBehavior
struct GameBehavior_t12;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ScreenManager
struct  ScreenManager_t107  : public MonoBehaviour_t2
{
	// FadeSprite ScreenManager::m_blackScreenCover
	FadeSprite_t101 * ___m_blackScreenCover_2;
	// System.Single ScreenManager::m_minDuration
	float ___m_minDuration_3;
	// System.Boolean ScreenManager::attributesClicked
	bool ___attributesClicked_4;
	// GameBehavior ScreenManager::behave
	GameBehavior_t12 * ___behave_5;
};
