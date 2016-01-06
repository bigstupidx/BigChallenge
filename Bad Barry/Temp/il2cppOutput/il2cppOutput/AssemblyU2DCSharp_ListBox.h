#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t47;
// ListBox
struct ListBox_t79;
// UnityEngine.Animator
struct Animator_t39;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// ListBox
struct  ListBox_t79  : public MonoBehaviour_t2
{
	// System.Int32 ListBox::listBoxID
	int32_t ___listBoxID_2;
	// UnityEngine.UI.Text ListBox::content
	Text_t47 * ___content_3;
	// ListBox ListBox::lastListBox
	ListBox_t79 * ___lastListBox_4;
	// ListBox ListBox::nextListBox
	ListBox_t79 * ___nextListBox_5;
	// UnityEngine.Animator ListBox::animator
	Animator_t39 * ___animator_6;
	// System.Int32 ListBox::numOfListBox
	int32_t ___numOfListBox_7;
	// System.Int32 ListBox::contentID
	int32_t ___contentID_8;
	// System.Boolean ListBox::isTouchingDevice
	bool ___isTouchingDevice_9;
	// UnityEngine.Vector2 ListBox::maxWorldPos
	Vector2_t23  ___maxWorldPos_10;
	// System.Single ListBox::unitWorldPosY
	float ___unitWorldPosY_11;
	// System.Single ListBox::lowerBoundWorldPosY
	float ___lowerBoundWorldPosY_12;
	// System.Single ListBox::upperBoundWorldPosY
	float ___upperBoundWorldPosY_13;
	// System.Single ListBox::rangeBoundWorldPosY
	float ___rangeBoundWorldPosY_14;
	// UnityEngine.Vector3 ListBox::slidingWorldPos
	Vector3_t10  ___slidingWorldPos_15;
	// UnityEngine.Vector3 ListBox::slidingWorldPosLeft
	Vector3_t10  ___slidingWorldPosLeft_16;
	// UnityEngine.Vector3 ListBox::originalLocalScale
	Vector3_t10  ___originalLocalScale_17;
	// System.Boolean ListBox::keepSliding
	bool ___keepSliding_18;
	// System.Int32 ListBox::slidingFrames
	int32_t ___slidingFrames_19;
};
