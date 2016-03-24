#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListPositionCtrl
struct ListPositionCtrl_t125;
// ListBox[]
struct ListBoxU5BU5D_t126;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t127;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// ListPositionCtrl
struct  ListPositionCtrl_t125  : public MonoBehaviour_t2
{
	// System.Boolean ListPositionCtrl::controlByButton
	bool ___controlByButton_3;
	// System.Boolean ListPositionCtrl::alignToCenter
	bool ___alignToCenter_4;
	// ListBox[] ListPositionCtrl::listBoxes
	ListBoxU5BU5D_t126* ___listBoxes_5;
	// System.Single ListPositionCtrl::centerPosY
	float ___centerPosY_6;
	// System.Int32 ListPositionCtrl::selectedID
	int32_t ___selectedID_7;
	// UnityEngine.UI.Button[] ListPositionCtrl::buttons
	ButtonU5BU5D_t127* ___buttons_8;
	// System.Single ListPositionCtrl::divideFactor
	float ___divideFactor_9;
	// System.Int32 ListPositionCtrl::slidingFrames
	int32_t ___slidingFrames_10;
	// System.Single ListPositionCtrl::slidingFactor
	float ___slidingFactor_11;
	// System.Single ListPositionCtrl::x_pivot
	float ___x_pivot_12;
	// System.Single ListPositionCtrl::angularity
	float ___angularity_13;
	// System.Single ListPositionCtrl::scaleFactor
	float ___scaleFactor_14;
	// System.Boolean ListPositionCtrl::isTouchingDevice
	bool ___isTouchingDevice_15;
	// UnityEngine.Vector3 ListPositionCtrl::lastInputWorldPos
	Vector3_t25  ___lastInputWorldPos_16;
	// UnityEngine.Vector3 ListPositionCtrl::currentInputWorldPos
	Vector3_t25  ___currentInputWorldPos_17;
	// UnityEngine.Vector3 ListPositionCtrl::deltaInputWorldPos
	Vector3_t25  ___deltaInputWorldPos_18;
	// System.Single ListPositionCtrl::maior
	float ___maior_19;
};
struct ListPositionCtrl_t125_StaticFields{
	// ListPositionCtrl ListPositionCtrl::Instance
	ListPositionCtrl_t125 * ___Instance_2;
};
