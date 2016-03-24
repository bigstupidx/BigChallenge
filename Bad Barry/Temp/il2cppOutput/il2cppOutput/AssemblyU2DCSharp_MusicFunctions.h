#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t16;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MusicFunctions
struct  MusicFunctions_t15  : public MonoBehaviour_t2
{
	// UnityEngine.AudioSource MusicFunctions::music
	AudioSource_t16 * ___music_2;
	// System.Single MusicFunctions::minVolume
	float ___minVolume_3;
	// System.Boolean MusicFunctions::fade
	bool ___fade_4;
	// System.Single MusicFunctions::fadeTime
	float ___fadeTime_5;
	// System.Single MusicFunctions::decrease
	float ___decrease_6;
};
