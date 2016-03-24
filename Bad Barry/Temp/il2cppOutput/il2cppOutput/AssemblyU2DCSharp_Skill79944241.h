#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Skill
struct Skill_t79944241;
// GameBehavior
struct GameBehavior_t1830462596;
// Player
struct Player_t2393081601;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2279835437;
// ItemDatabase
struct ItemDatabase_t2582217166;
// System.Collections.Generic.List`1<Item>
struct List_1_t799248428;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock2245020947.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Skill
struct  Skill_t79944241  : public MonoBehaviour_t3012272455
{
public:
	// GameBehavior Skill::behave
	GameBehavior_t1830462596 * ___behave_3;
	// Player Skill::player
	Player_t2393081601 * ___player_4;
	// UnityEngine.UI.Image[] Skill::skillsInGame
	ImageU5BU5D_t2279835437* ___skillsInGame_5;
	// ItemDatabase Skill::database
	ItemDatabase_t2582217166 * ___database_6;
	// System.Collections.Generic.List`1<Item> Skill::skills
	List_1_t799248428 * ___skills_7;
	// System.Boolean Skill::skillActivate
	bool ___skillActivate_8;
	// UnityEngine.UI.Text Skill::amount
	Text_t3286458198 * ___amount_9;
	// UnityEngine.UI.Button Skill::slotButton
	Button_t990034267 * ___slotButton_10;
	// UnityEngine.UI.ColorBlock Skill::slotColors
	ColorBlock_t2245020947  ___slotColors_11;
	// UnityEngine.UI.Image Skill::iconImage
	Image_t3354615620 * ___iconImage_12;
	// UnityEngine.Color Skill::iconColor
	Color_t1588175760  ___iconColor_13;

public:
	inline static int32_t get_offset_of_behave_3() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___behave_3)); }
	inline GameBehavior_t1830462596 * get_behave_3() const { return ___behave_3; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_3() { return &___behave_3; }
	inline void set_behave_3(GameBehavior_t1830462596 * value)
	{
		___behave_3 = value;
		Il2CppCodeGenWriteBarrier(&___behave_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___player_4)); }
	inline Player_t2393081601 * get_player_4() const { return ___player_4; }
	inline Player_t2393081601 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Player_t2393081601 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_skillsInGame_5() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___skillsInGame_5)); }
	inline ImageU5BU5D_t2279835437* get_skillsInGame_5() const { return ___skillsInGame_5; }
	inline ImageU5BU5D_t2279835437** get_address_of_skillsInGame_5() { return &___skillsInGame_5; }
	inline void set_skillsInGame_5(ImageU5BU5D_t2279835437* value)
	{
		___skillsInGame_5 = value;
		Il2CppCodeGenWriteBarrier(&___skillsInGame_5, value);
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___database_6)); }
	inline ItemDatabase_t2582217166 * get_database_6() const { return ___database_6; }
	inline ItemDatabase_t2582217166 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(ItemDatabase_t2582217166 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier(&___database_6, value);
	}

	inline static int32_t get_offset_of_skills_7() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___skills_7)); }
	inline List_1_t799248428 * get_skills_7() const { return ___skills_7; }
	inline List_1_t799248428 ** get_address_of_skills_7() { return &___skills_7; }
	inline void set_skills_7(List_1_t799248428 * value)
	{
		___skills_7 = value;
		Il2CppCodeGenWriteBarrier(&___skills_7, value);
	}

	inline static int32_t get_offset_of_skillActivate_8() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___skillActivate_8)); }
	inline bool get_skillActivate_8() const { return ___skillActivate_8; }
	inline bool* get_address_of_skillActivate_8() { return &___skillActivate_8; }
	inline void set_skillActivate_8(bool value)
	{
		___skillActivate_8 = value;
	}

	inline static int32_t get_offset_of_amount_9() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___amount_9)); }
	inline Text_t3286458198 * get_amount_9() const { return ___amount_9; }
	inline Text_t3286458198 ** get_address_of_amount_9() { return &___amount_9; }
	inline void set_amount_9(Text_t3286458198 * value)
	{
		___amount_9 = value;
		Il2CppCodeGenWriteBarrier(&___amount_9, value);
	}

	inline static int32_t get_offset_of_slotButton_10() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___slotButton_10)); }
	inline Button_t990034267 * get_slotButton_10() const { return ___slotButton_10; }
	inline Button_t990034267 ** get_address_of_slotButton_10() { return &___slotButton_10; }
	inline void set_slotButton_10(Button_t990034267 * value)
	{
		___slotButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___slotButton_10, value);
	}

	inline static int32_t get_offset_of_slotColors_11() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___slotColors_11)); }
	inline ColorBlock_t2245020947  get_slotColors_11() const { return ___slotColors_11; }
	inline ColorBlock_t2245020947 * get_address_of_slotColors_11() { return &___slotColors_11; }
	inline void set_slotColors_11(ColorBlock_t2245020947  value)
	{
		___slotColors_11 = value;
	}

	inline static int32_t get_offset_of_iconImage_12() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___iconImage_12)); }
	inline Image_t3354615620 * get_iconImage_12() const { return ___iconImage_12; }
	inline Image_t3354615620 ** get_address_of_iconImage_12() { return &___iconImage_12; }
	inline void set_iconImage_12(Image_t3354615620 * value)
	{
		___iconImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___iconImage_12, value);
	}

	inline static int32_t get_offset_of_iconColor_13() { return static_cast<int32_t>(offsetof(Skill_t79944241, ___iconColor_13)); }
	inline Color_t1588175760  get_iconColor_13() const { return ___iconColor_13; }
	inline Color_t1588175760 * get_address_of_iconColor_13() { return &___iconColor_13; }
	inline void set_iconColor_13(Color_t1588175760  value)
	{
		___iconColor_13 = value;
	}
};

struct Skill_t79944241_StaticFields
{
public:
	// Skill Skill::Instance
	Skill_t79944241 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(Skill_t79944241_StaticFields, ___Instance_2)); }
	inline Skill_t79944241 * get_Instance_2() const { return ___Instance_2; }
	inline Skill_t79944241 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(Skill_t79944241 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
