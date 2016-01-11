#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Coin
struct Coin_t82;
// UnityEngine.UI.Button
struct Button_t51;
// UnityEngine.GameObject
struct GameObject_t40;
// Inventory
struct Inventory_t59;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Sell
struct  Sell_t83  : public MonoBehaviour_t2
{
	// System.Int32 Sell::itemPrice
	int32_t ___itemPrice_2;
	// System.Int32 Sell::itemID
	int32_t ___itemID_3;
	// Coin Sell::coin
	Coin_t82 * ___coin_4;
	// UnityEngine.UI.Button Sell::button
	Button_t51 * ___button_5;
	// UnityEngine.GameObject Sell::CoinsPanel
	GameObject_t40 * ___CoinsPanel_6;
	// Inventory Sell::inv
	Inventory_t59 * ___inv_7;
};
