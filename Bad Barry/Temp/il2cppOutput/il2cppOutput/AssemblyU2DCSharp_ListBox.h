#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBox
struct ListBox_t124;
// Item
struct Item_t86;
// UnityEngine.UI.Image
struct Image_t39;
// UnityEngine.UI.Text
struct Text_t11;
// UnityEngine.Animator
struct Animator_t54;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// ListBox
struct  ListBox_t124  : public MonoBehaviour_t2
{
	// System.Int32 ListBox::listBoxID
	int32_t ___listBoxID_3;
	// Item ListBox::content
	Item_t86 * ___content_4;
	// UnityEngine.UI.Image ListBox::contentImage
	Image_t39 * ___contentImage_5;
	// UnityEngine.UI.Text ListBox::contentTitle
	Text_t11 * ___contentTitle_6;
	// UnityEngine.UI.Text ListBox::contentPrice
	Text_t11 * ___contentPrice_7;
	// UnityEngine.UI.Text ListBox::contentDetails
	Text_t11 * ___contentDetails_8;
	// ListBox ListBox::lastListBox
	ListBox_t124 * ___lastListBox_9;
	// ListBox ListBox::nextListBox
	ListBox_t124 * ___nextListBox_10;
	// UnityEngine.Animator ListBox::animator
	Animator_t54 * ___animator_11;
	// System.Int32 ListBox::numOfListBox
	int32_t ___numOfListBox_12;
	// System.Int32 ListBox::contentID
	int32_t ___contentID_13;
	// System.Boolean ListBox::isTouchingDevice
	bool ___isTouchingDevice_14;
	// UnityEngine.Vector2 ListBox::maxWorldPos
	Vector2_t38  ___maxWorldPos_15;
	// System.Single ListBox::unitWorldPosY
	float ___unitWorldPosY_16;
	// System.Single ListBox::lowerBoundWorldPosY
	float ___lowerBoundWorldPosY_17;
	// System.Single ListBox::upperBoundWorldPosY
	float ___upperBoundWorldPosY_18;
	// System.Single ListBox::rangeBoundWorldPosY
	float ___rangeBoundWorldPosY_19;
	// UnityEngine.Vector3 ListBox::slidingWorldPos
	Vector3_t25  ___slidingWorldPos_20;
	// UnityEngine.Vector3 ListBox::slidingWorldPosLeft
	Vector3_t25  ___slidingWorldPosLeft_21;
	// UnityEngine.Vector3 ListBox::originalLocalScale
	Vector3_t25  ___originalLocalScale_22;
	// System.Boolean ListBox::keepSliding
	bool ___keepSliding_23;
	// System.Int32 ListBox::slidingFrames
	int32_t ___slidingFrames_24;
	// System.Int32 ListBox::bulletsAux
	int32_t ___bulletsAux_25;
};
struct ListBox_t124_StaticFields{
	// ListBox ListBox::Instance
	ListBox_t124 * ___Instance_2;
};
