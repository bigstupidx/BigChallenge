#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Enemy
struct Enemy_t7;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Boss
struct  Boss_t6  : public MonoBehaviour_t2
{
	// Enemy Boss::myself
	Enemy_t7 * ___myself_2;
	// System.Boolean Boss::shownVideo
	bool ___shownVideo_3;
};
