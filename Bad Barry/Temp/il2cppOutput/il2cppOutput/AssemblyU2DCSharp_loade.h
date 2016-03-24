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
struct StringU5BU5D_t146;
// UnityEngine.UI.Text
struct Text_t11;
// UnityEngine.GameObject
struct GameObject_t13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// loade
struct  loade_t145  : public MonoBehaviour_t2
{
	// System.String loade::scene
	String_t* ___scene_2;
	// System.String[] loade::texts
	StringU5BU5D_t146* ___texts_3;
	// UnityEngine.UI.Text loade::loadingText
	Text_t11 * ___loadingText_4;
	// UnityEngine.UI.Text loade::tip
	Text_t11 * ___tip_5;
	// System.Boolean loade::tapToPlay
	bool ___tapToPlay_6;
	// UnityEngine.GameObject loade::barry
	GameObject_t13 * ___barry_7;
	// UnityEngine.GameObject loade::canvas
	GameObject_t13 * ___canvas_8;
	// System.Boolean loade::missions
	bool ___missions_9;
};
