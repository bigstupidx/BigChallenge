#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t1830462596;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t4084811832;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t79711858  : public MonoBehaviour_t3012272455
{
public:
	// GameBehavior Score::behave
	GameBehavior_t1830462596 * ___behave_2;
	// UnityEngine.UI.Text Score::totalEnimies
	Text_t3286458198 * ___totalEnimies_3;
	// UnityEngine.UI.Text Score::enemiesKilled
	Text_t3286458198 * ___enemiesKilled_4;
	// UnityEngine.UI.Text Score::coinsEarned
	Text_t3286458198 * ___coinsEarned_5;
	// UnityEngine.AudioSource Score::audioCoin
	AudioSource_t3628549054 * ___audioCoin_6;
	// UnityEngine.GameObject Score::heads
	GameObject_t4012695102 * ___heads_7;
	// UnityEngine.UI.Image Score::enemyImage
	Image_t3354615620 * ___enemyImage_8;
	// UnityEngine.UI.GridLayoutGroup Score::headsGrid
	GridLayoutGroup_t4084811832 * ___headsGrid_9;
	// System.Int32 Score::coinsPerEnemy
	int32_t ___coinsPerEnemy_10;
	// System.Single Score::incrementTime
	float ___incrementTime_11;
	// System.Single Score::timer
	float ___timer_12;
	// System.Boolean Score::startCounter
	bool ___startCounter_13;
	// System.Int32 Score::incrementEnemies
	int32_t ___incrementEnemies_14;
	// System.Int32 Score::incrementCoins
	int32_t ___incrementCoins_15;
	// System.Single Score::maxSize
	float ___maxSize_16;
	// System.Single Score::maxCollumn
	float ___maxCollumn_17;
	// System.Single Score::amountCollumn
	float ___amountCollumn_18;

public:
	inline static int32_t get_offset_of_behave_2() { return static_cast<int32_t>(offsetof(Score_t79711858, ___behave_2)); }
	inline GameBehavior_t1830462596 * get_behave_2() const { return ___behave_2; }
	inline GameBehavior_t1830462596 ** get_address_of_behave_2() { return &___behave_2; }
	inline void set_behave_2(GameBehavior_t1830462596 * value)
	{
		___behave_2 = value;
		Il2CppCodeGenWriteBarrier(&___behave_2, value);
	}

	inline static int32_t get_offset_of_totalEnimies_3() { return static_cast<int32_t>(offsetof(Score_t79711858, ___totalEnimies_3)); }
	inline Text_t3286458198 * get_totalEnimies_3() const { return ___totalEnimies_3; }
	inline Text_t3286458198 ** get_address_of_totalEnimies_3() { return &___totalEnimies_3; }
	inline void set_totalEnimies_3(Text_t3286458198 * value)
	{
		___totalEnimies_3 = value;
		Il2CppCodeGenWriteBarrier(&___totalEnimies_3, value);
	}

	inline static int32_t get_offset_of_enemiesKilled_4() { return static_cast<int32_t>(offsetof(Score_t79711858, ___enemiesKilled_4)); }
	inline Text_t3286458198 * get_enemiesKilled_4() const { return ___enemiesKilled_4; }
	inline Text_t3286458198 ** get_address_of_enemiesKilled_4() { return &___enemiesKilled_4; }
	inline void set_enemiesKilled_4(Text_t3286458198 * value)
	{
		___enemiesKilled_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemiesKilled_4, value);
	}

	inline static int32_t get_offset_of_coinsEarned_5() { return static_cast<int32_t>(offsetof(Score_t79711858, ___coinsEarned_5)); }
	inline Text_t3286458198 * get_coinsEarned_5() const { return ___coinsEarned_5; }
	inline Text_t3286458198 ** get_address_of_coinsEarned_5() { return &___coinsEarned_5; }
	inline void set_coinsEarned_5(Text_t3286458198 * value)
	{
		___coinsEarned_5 = value;
		Il2CppCodeGenWriteBarrier(&___coinsEarned_5, value);
	}

	inline static int32_t get_offset_of_audioCoin_6() { return static_cast<int32_t>(offsetof(Score_t79711858, ___audioCoin_6)); }
	inline AudioSource_t3628549054 * get_audioCoin_6() const { return ___audioCoin_6; }
	inline AudioSource_t3628549054 ** get_address_of_audioCoin_6() { return &___audioCoin_6; }
	inline void set_audioCoin_6(AudioSource_t3628549054 * value)
	{
		___audioCoin_6 = value;
		Il2CppCodeGenWriteBarrier(&___audioCoin_6, value);
	}

	inline static int32_t get_offset_of_heads_7() { return static_cast<int32_t>(offsetof(Score_t79711858, ___heads_7)); }
	inline GameObject_t4012695102 * get_heads_7() const { return ___heads_7; }
	inline GameObject_t4012695102 ** get_address_of_heads_7() { return &___heads_7; }
	inline void set_heads_7(GameObject_t4012695102 * value)
	{
		___heads_7 = value;
		Il2CppCodeGenWriteBarrier(&___heads_7, value);
	}

	inline static int32_t get_offset_of_enemyImage_8() { return static_cast<int32_t>(offsetof(Score_t79711858, ___enemyImage_8)); }
	inline Image_t3354615620 * get_enemyImage_8() const { return ___enemyImage_8; }
	inline Image_t3354615620 ** get_address_of_enemyImage_8() { return &___enemyImage_8; }
	inline void set_enemyImage_8(Image_t3354615620 * value)
	{
		___enemyImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemyImage_8, value);
	}

	inline static int32_t get_offset_of_headsGrid_9() { return static_cast<int32_t>(offsetof(Score_t79711858, ___headsGrid_9)); }
	inline GridLayoutGroup_t4084811832 * get_headsGrid_9() const { return ___headsGrid_9; }
	inline GridLayoutGroup_t4084811832 ** get_address_of_headsGrid_9() { return &___headsGrid_9; }
	inline void set_headsGrid_9(GridLayoutGroup_t4084811832 * value)
	{
		___headsGrid_9 = value;
		Il2CppCodeGenWriteBarrier(&___headsGrid_9, value);
	}

	inline static int32_t get_offset_of_coinsPerEnemy_10() { return static_cast<int32_t>(offsetof(Score_t79711858, ___coinsPerEnemy_10)); }
	inline int32_t get_coinsPerEnemy_10() const { return ___coinsPerEnemy_10; }
	inline int32_t* get_address_of_coinsPerEnemy_10() { return &___coinsPerEnemy_10; }
	inline void set_coinsPerEnemy_10(int32_t value)
	{
		___coinsPerEnemy_10 = value;
	}

	inline static int32_t get_offset_of_incrementTime_11() { return static_cast<int32_t>(offsetof(Score_t79711858, ___incrementTime_11)); }
	inline float get_incrementTime_11() const { return ___incrementTime_11; }
	inline float* get_address_of_incrementTime_11() { return &___incrementTime_11; }
	inline void set_incrementTime_11(float value)
	{
		___incrementTime_11 = value;
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(Score_t79711858, ___timer_12)); }
	inline float get_timer_12() const { return ___timer_12; }
	inline float* get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(float value)
	{
		___timer_12 = value;
	}

	inline static int32_t get_offset_of_startCounter_13() { return static_cast<int32_t>(offsetof(Score_t79711858, ___startCounter_13)); }
	inline bool get_startCounter_13() const { return ___startCounter_13; }
	inline bool* get_address_of_startCounter_13() { return &___startCounter_13; }
	inline void set_startCounter_13(bool value)
	{
		___startCounter_13 = value;
	}

	inline static int32_t get_offset_of_incrementEnemies_14() { return static_cast<int32_t>(offsetof(Score_t79711858, ___incrementEnemies_14)); }
	inline int32_t get_incrementEnemies_14() const { return ___incrementEnemies_14; }
	inline int32_t* get_address_of_incrementEnemies_14() { return &___incrementEnemies_14; }
	inline void set_incrementEnemies_14(int32_t value)
	{
		___incrementEnemies_14 = value;
	}

	inline static int32_t get_offset_of_incrementCoins_15() { return static_cast<int32_t>(offsetof(Score_t79711858, ___incrementCoins_15)); }
	inline int32_t get_incrementCoins_15() const { return ___incrementCoins_15; }
	inline int32_t* get_address_of_incrementCoins_15() { return &___incrementCoins_15; }
	inline void set_incrementCoins_15(int32_t value)
	{
		___incrementCoins_15 = value;
	}

	inline static int32_t get_offset_of_maxSize_16() { return static_cast<int32_t>(offsetof(Score_t79711858, ___maxSize_16)); }
	inline float get_maxSize_16() const { return ___maxSize_16; }
	inline float* get_address_of_maxSize_16() { return &___maxSize_16; }
	inline void set_maxSize_16(float value)
	{
		___maxSize_16 = value;
	}

	inline static int32_t get_offset_of_maxCollumn_17() { return static_cast<int32_t>(offsetof(Score_t79711858, ___maxCollumn_17)); }
	inline float get_maxCollumn_17() const { return ___maxCollumn_17; }
	inline float* get_address_of_maxCollumn_17() { return &___maxCollumn_17; }
	inline void set_maxCollumn_17(float value)
	{
		___maxCollumn_17 = value;
	}

	inline static int32_t get_offset_of_amountCollumn_18() { return static_cast<int32_t>(offsetof(Score_t79711858, ___amountCollumn_18)); }
	inline float get_amountCollumn_18() const { return ___amountCollumn_18; }
	inline float* get_address_of_amountCollumn_18() { return &___amountCollumn_18; }
	inline void set_amountCollumn_18(float value)
	{
		___amountCollumn_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
