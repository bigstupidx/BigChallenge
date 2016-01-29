#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Item
struct Item_t82;
// UnityEngine.UI.Button
struct Button_t62;
// UnityEngine.GameObject
struct GameObject_t8;
// Inventory
struct Inventory_t73;
// GameBehavior
struct GameBehavior_t3;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Sell
struct  Sell_t104  : public MonoBehaviour_t2
{
	// Item Sell::item
	Item_t82 * ___item_2;
	// System.Int32 Sell::coin
	int32_t ___coin_3;
	// UnityEngine.UI.Button Sell::button
	Button_t62 * ___button_4;
	// UnityEngine.GameObject Sell::CoinsPanel
	GameObject_t8 * ___CoinsPanel_5;
	// Inventory Sell::inv
	Inventory_t73 * ___inv_6;
	// System.Boolean Sell::buttonActivate
	bool ___buttonActivate_7;
	// GameBehavior Sell::behave
	GameBehavior_t3 * ___behave_8;
	// System.Boolean Sell::activeBlink
	bool ___activeBlink_9;
	// System.Boolean Sell::blinkMessage
	bool ___blinkMessage_10;
	// System.Boolean Sell::pistolPurchased
	bool ___pistolPurchased_11;
	// System.Boolean Sell::watersPurchased
	bool ___watersPurchased_12;
	// System.Int32 Sell::indexToBuy
	int32_t ___indexToBuy_13;
	// System.Int32 Sell::waterCount
	int32_t ___waterCount_14;
	// UnityEngine.GameObject Sell::leftBuyArrow
	GameObject_t8 * ___leftBuyArrow_15;
	// UnityEngine.GameObject Sell::rightBuyArrow
	GameObject_t8 * ___rightBuyArrow_16;
	// UnityEngine.GameObject Sell::storeCanvasTutorial
	GameObject_t8 * ___storeCanvasTutorial_17;
	// UnityEngine.GameObject Sell::storeCanvasPanel
	GameObject_t8 * ___storeCanvasPanel_18;
	// UnityEngine.GameObject Sell::backArrow
	GameObject_t8 * ___backArrow_19;
	// UnityEngine.GameObject Sell::canvasText
	GameObject_t8 * ___canvasText_20;
	// UnityEngine.GameObject Sell::endTutoText
	GameObject_t8 * ___endTutoText_21;
	// UnityEngine.GameObject Sell::endTutoPanel
	GameObject_t8 * ___endTutoPanel_22;
};
