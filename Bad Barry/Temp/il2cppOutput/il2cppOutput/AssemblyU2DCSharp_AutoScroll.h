#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3;
// GameBehavior
struct GameBehavior_t4;
// UnityEngine.Canvas
struct Canvas_t5;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AutoScroll
struct  AutoScroll_t1  : public MonoBehaviour_t2
{
	// UnityEngine.RectTransform AutoScroll::content
	RectTransform_t3 * ___content_2;
	// System.Single AutoScroll::timer
	float ___timer_3;
	// System.Single AutoScroll::speed
	float ___speed_4;
	// System.Boolean AutoScroll::enableScroll
	bool ___enableScroll_5;
	// System.Single AutoScroll::distanceToScroll
	float ___distanceToScroll_6;
	// GameBehavior AutoScroll::behave
	GameBehavior_t4 * ___behave_7;
	// UnityEngine.Canvas AutoScroll::canvas
	Canvas_t5 * ___canvas_8;
	// System.Single AutoScroll::distanceScrollable
	float ___distanceScrollable_9;
	// UnityEngine.RectTransform AutoScroll::canvasRect
	RectTransform_t3 * ___canvasRect_10;
	// System.Single AutoScroll::initialContentPosition
	float ___initialContentPosition_11;
};
