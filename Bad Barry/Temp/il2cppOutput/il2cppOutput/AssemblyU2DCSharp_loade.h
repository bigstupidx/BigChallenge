#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t152;
// UnityEngine.UI.Text
struct Text_t19;
// UnityEngine.GameObject
struct GameObject_t21;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// loade
struct  loade_t151  : public MonoBehaviour_t2
{
	// System.String loade::scene
	String_t* ___scene_2;
	// System.String[] loade::texts
	StringU5BU5D_t152* ___texts_3;
	// UnityEngine.UI.Text loade::loadingText
	Text_t19 * ___loadingText_4;
	// UnityEngine.UI.Text loade::tip
	Text_t19 * ___tip_5;
	// System.Boolean loade::tapToPlay
	bool ___tapToPlay_6;
	// UnityEngine.GameObject loade::barry
	GameObject_t21 * ___barry_7;
	// UnityEngine.GameObject loade::canvas
	GameObject_t21 * ___canvas_8;
	// System.Boolean loade::missions
	bool ___missions_9;
};
