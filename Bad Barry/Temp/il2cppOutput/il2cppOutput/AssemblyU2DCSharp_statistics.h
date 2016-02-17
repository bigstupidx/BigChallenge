#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t12;
// UnityEngine.UI.Text
struct Text_t19;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// statistics
struct  statistics_t153  : public MonoBehaviour_t2
{
	// GameBehavior statistics::behave
	GameBehavior_t12 * ___behave_2;
	// UnityEngine.UI.Text statistics::totalCoinsText
	Text_t19 * ___totalCoinsText_3;
	// UnityEngine.UI.Text statistics::hordeKillsText
	Text_t19 * ___hordeKillsText_4;
	// UnityEngine.UI.Text statistics::enemiesKilledText
	Text_t19 * ___enemiesKilledText_5;
	// UnityEngine.UI.Text statistics::ammoSpentText
	Text_t19 * ___ammoSpentText_6;
	// UnityEngine.UI.Text statistics::totalExperienceText
	Text_t19 * ___totalExperienceText_7;
	// UnityEngine.UI.Text statistics::knifeKillsText
	Text_t19 * ___knifeKillsText_8;
};
