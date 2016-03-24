#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// GameBehavior
struct GameBehavior_t1830462596;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// hordeMode
struct  hordeMode_t2236514767  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 hordeMode::level
	int32_t ___level_2;
	// UnityEngine.GameObject[] hordeMode::enemies
	GameObjectU5BU5D_t3499186955* ___enemies_3;
	// UnityEngine.Transform[] hordeMode::respawnPoints
	TransformU5BU5D_t3681339876* ___respawnPoints_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> hordeMode::enemiesInScene
	List_1_t514686775 * ___enemiesInScene_5;
	// System.Single hordeMode::timer
	float ___timer_6;
	// UnityEngine.GameObject hordeMode::clearedText
	GameObject_t4012695102 * ___clearedText_7;
	// UnityEngine.GameObject hordeMode::countingText
	GameObject_t4012695102 * ___countingText_8;
	// UnityEngine.GameObject hordeMode::totalText
	GameObject_t4012695102 * ___totalText_9;
	// System.Boolean hordeMode::go
	bool ___go_10;
	// System.Int32 hordeMode::count
	int32_t ___count_11;
	// GameBehavior hordeMode::behave
	GameBehavior_t1830462596 * ___behave_12;
	// UnityEngine.GameObject hordeMode::canvasTutorial
	GameObject_t4012695102 * ___canvasTutorial_13;
	// UnityEngine.GameObject hordeMode::textTutorial
	GameObject_t4012695102 * ___textTutorial_14;
	// System.Int32 hordeMode::index
	int32_t ___index_15;
	// System.Single hordeMode::time
	float ___time_16;
	// System.Boolean hordeMode::startTime
	bool ___startTime_17;
	// UnityEngine.GameObject hordeMode::joystickArrow
	GameObject_t4012695102 * ___joystickArrow_18;
	// UnityEngine.GameObject hordeMode::slotsArrow
	GameObject_t4012695102 * ___slotsArrow_19;
	// UnityEngine.GameObject hordeMode::skillArrow
	GameObject_t4012695102 * ___skillArrow_20;
	// UnityEngine.GameObject hordeMode::fireButtonArrow
	GameObject_t4012695102 * ___fireButtonArrow_21;

public:
	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_enemies_3() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___enemies_3)); }
	inline GameObjectU5BU5D_t3499186955* get_enemies_3() const { return ___enemies_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_enemies_3() { return &___enemies_3; }
	inline void set_enemies_3(GameObjectU5BU5D_t3499186955* value)
	{
		___enemies_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_3, value);
	}

	inline static int32_t get_offset_of_respawnPoints_4() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___respawnPoints_4)); }
	inline TransformU5BU5D_t3681339876* get_respawnPoints_4() const { return ___respawnPoints_4; }
	inline TransformU5BU5D_t3681339876** get_address_of_respawnPoints_4() { return &___respawnPoints_4; }
	inline void set_respawnPoints_4(TransformU5BU5D_t3681339876* value)
	{
		___respawnPoints_4 = value;
		Il2CppCodeGenWriteBarrier(&___respawnPoints_4, value);
	}

	inline static int32_t get_offset_of_enemiesInScene_5() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___enemiesInScene_5)); }
	inline List_1_t514686775 * get_enemiesInScene_5() const { return ___enemiesInScene_5; }
	inline List_1_t514686775 ** get_address_of_enemiesInScene_5() { return &___enemiesInScene_5; }
	inline void set_enemiesInScene_5(List_1_t514686775 * value)
	{
		___enemiesInScene_5 = value;
		Il2CppCodeGenWriteBarrier(&___enemiesInScene_5, value);
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_clearedText_7() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___clearedText_7)); }
	inline GameObject_t4012695102 * get_clearedText_7() const { return ___clearedText_7; }
	inline GameObject_t4012695102 ** get_address_of_clearedText_7() { return &___clearedText_7; }
	inline void set_clearedText_7(GameObject_t4012695102 * value)
	{
		___clearedText_7 = value;
		Il2CppCodeGenWriteBarrier(&___clearedText_7, value);
	}

	inline static int32_t get_offset_of_countingText_8() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___countingText_8)); }
	inline GameObject_t4012695102 * get_countingText_8() const { return ___countingText_8; }
	inline GameObject_t4012695102 ** get_address_of_countingText_8() { return &___countingText_8; }
	inline void set_countingText_8(GameObject_t4012695102 * value)
	{
		___countingText_8 = value;
		Il2CppCodeGenWriteBarrier(&___countingText_8, value);
	}

	inline static int32_t get_offset_of_totalText_9() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___totalText_9)); }
	inline GameObject_t4012695102 * get_totalText_9() const { return ___totalText_9; }
	inline GameObject_t4012695102 ** get_address_of_totalText_9() { return &___totalText_9; }
	inline void set_totalText_9(GameObject_t4012695102 * value)
	{
		___totalText_9 = value;
		Il2CppCodeGenWriteBarrier(&___totalText_9, value);
	}

	inline static int32_t get_offset_of_go_10() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___go_10)); }
	inline bool get_go_10() const { return ___go_10; }
	inline bool* get_address_of_go_10() { return &___go_10; }
	inline void set_go_10(bool value)
	{
		___go_10 = value;
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_behave_12() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___behave_12)); }
	inline GameBehavior_t1830462596 * get_behave_12() const { return ___behave_12; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_12() { return &___behave_12; }
	inline void set_behave_12(GameBehavior_t1830462596 * value)
	{
		___behave_12 = value;
		Il2CppCodeGenWriteBarrier(&___behave_12, value);
	}

	inline static int32_t get_offset_of_canvasTutorial_13() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___canvasTutorial_13)); }
	inline GameObject_t4012695102 * get_canvasTutorial_13() const { return ___canvasTutorial_13; }
	inline GameObject_t4012695102 ** get_address_of_canvasTutorial_13() { return &___canvasTutorial_13; }
	inline void set_canvasTutorial_13(GameObject_t4012695102 * value)
	{
		___canvasTutorial_13 = value;
		Il2CppCodeGenWriteBarrier(&___canvasTutorial_13, value);
	}

	inline static int32_t get_offset_of_textTutorial_14() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___textTutorial_14)); }
	inline GameObject_t4012695102 * get_textTutorial_14() const { return ___textTutorial_14; }
	inline GameObject_t4012695102 ** get_address_of_textTutorial_14() { return &___textTutorial_14; }
	inline void set_textTutorial_14(GameObject_t4012695102 * value)
	{
		___textTutorial_14 = value;
		Il2CppCodeGenWriteBarrier(&___textTutorial_14, value);
	}

	inline static int32_t get_offset_of_index_15() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___index_15)); }
	inline int32_t get_index_15() const { return ___index_15; }
	inline int32_t* get_address_of_index_15() { return &___index_15; }
	inline void set_index_15(int32_t value)
	{
		___index_15 = value;
	}

	inline static int32_t get_offset_of_time_16() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___time_16)); }
	inline float get_time_16() const { return ___time_16; }
	inline float* get_address_of_time_16() { return &___time_16; }
	inline void set_time_16(float value)
	{
		___time_16 = value;
	}

	inline static int32_t get_offset_of_startTime_17() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___startTime_17)); }
	inline bool get_startTime_17() const { return ___startTime_17; }
	inline bool* get_address_of_startTime_17() { return &___startTime_17; }
	inline void set_startTime_17(bool value)
	{
		___startTime_17 = value;
	}

	inline static int32_t get_offset_of_joystickArrow_18() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___joystickArrow_18)); }
	inline GameObject_t4012695102 * get_joystickArrow_18() const { return ___joystickArrow_18; }
	inline GameObject_t4012695102 ** get_address_of_joystickArrow_18() { return &___joystickArrow_18; }
	inline void set_joystickArrow_18(GameObject_t4012695102 * value)
	{
		___joystickArrow_18 = value;
		Il2CppCodeGenWriteBarrier(&___joystickArrow_18, value);
	}

	inline static int32_t get_offset_of_slotsArrow_19() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___slotsArrow_19)); }
	inline GameObject_t4012695102 * get_slotsArrow_19() const { return ___slotsArrow_19; }
	inline GameObject_t4012695102 ** get_address_of_slotsArrow_19() { return &___slotsArrow_19; }
	inline void set_slotsArrow_19(GameObject_t4012695102 * value)
	{
		___slotsArrow_19 = value;
		Il2CppCodeGenWriteBarrier(&___slotsArrow_19, value);
	}

	inline static int32_t get_offset_of_skillArrow_20() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___skillArrow_20)); }
	inline GameObject_t4012695102 * get_skillArrow_20() const { return ___skillArrow_20; }
	inline GameObject_t4012695102 ** get_address_of_skillArrow_20() { return &___skillArrow_20; }
	inline void set_skillArrow_20(GameObject_t4012695102 * value)
	{
		___skillArrow_20 = value;
		Il2CppCodeGenWriteBarrier(&___skillArrow_20, value);
	}

	inline static int32_t get_offset_of_fireButtonArrow_21() { return static_cast<int32_t>(offsetof(hordeMode_t2236514767, ___fireButtonArrow_21)); }
	inline GameObject_t4012695102 * get_fireButtonArrow_21() const { return ___fireButtonArrow_21; }
	inline GameObject_t4012695102 ** get_address_of_fireButtonArrow_21() { return &___fireButtonArrow_21; }
	inline void set_fireButtonArrow_21(GameObject_t4012695102 * value)
	{
		___fireButtonArrow_21 = value;
		Il2CppCodeGenWriteBarrier(&___fireButtonArrow_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
