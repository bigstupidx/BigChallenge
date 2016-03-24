#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowPlayer
struct  FollowPlayer_t1977798162  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean FollowPlayer::active
	bool ___active_2;
	// System.Single FollowPlayer::speed
	float ___speed_3;
	// System.Single FollowPlayer::rangeMin
	float ___rangeMin_4;
	// System.Single FollowPlayer::rangeMax
	float ___rangeMax_5;
	// System.Int32 FollowPlayer::direction
	int32_t ___direction_6;
	// UnityEngine.Transform FollowPlayer::player
	Transform_t284553113 * ___player_7;
	// UnityEngine.Animator FollowPlayer::bothAnimator
	Animator_t792326996 * ___bothAnimator_8;
	// UnityEngine.Animator FollowPlayer::torsoAnimator
	Animator_t792326996 * ___torsoAnimator_9;
	// UnityEngine.Animator FollowPlayer::legAnimator
	Animator_t792326996 * ___legAnimator_10;
	// System.Single FollowPlayer::delay
	float ___delay_11;
	// System.Single FollowPlayer::distanceY
	float ___distanceY_12;
	// System.Single FollowPlayer::distanceX
	float ___distanceX_13;
	// System.Single FollowPlayer::rangeShoot
	float ___rangeShoot_14;

public:
	inline static int32_t get_offset_of_active_2() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___active_2)); }
	inline bool get_active_2() const { return ___active_2; }
	inline bool* get_address_of_active_2() { return &___active_2; }
	inline void set_active_2(bool value)
	{
		___active_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rangeMin_4() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___rangeMin_4)); }
	inline float get_rangeMin_4() const { return ___rangeMin_4; }
	inline float* get_address_of_rangeMin_4() { return &___rangeMin_4; }
	inline void set_rangeMin_4(float value)
	{
		___rangeMin_4 = value;
	}

	inline static int32_t get_offset_of_rangeMax_5() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___rangeMax_5)); }
	inline float get_rangeMax_5() const { return ___rangeMax_5; }
	inline float* get_address_of_rangeMax_5() { return &___rangeMax_5; }
	inline void set_rangeMax_5(float value)
	{
		___rangeMax_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___direction_6)); }
	inline int32_t get_direction_6() const { return ___direction_6; }
	inline int32_t* get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(int32_t value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___player_7)); }
	inline Transform_t284553113 * get_player_7() const { return ___player_7; }
	inline Transform_t284553113 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(Transform_t284553113 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_bothAnimator_8() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___bothAnimator_8)); }
	inline Animator_t792326996 * get_bothAnimator_8() const { return ___bothAnimator_8; }
	inline Animator_t792326996 ** get_address_of_bothAnimator_8() { return &___bothAnimator_8; }
	inline void set_bothAnimator_8(Animator_t792326996 * value)
	{
		___bothAnimator_8 = value;
		Il2CppCodeGenWriteBarrier(&___bothAnimator_8, value);
	}

	inline static int32_t get_offset_of_torsoAnimator_9() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___torsoAnimator_9)); }
	inline Animator_t792326996 * get_torsoAnimator_9() const { return ___torsoAnimator_9; }
	inline Animator_t792326996 ** get_address_of_torsoAnimator_9() { return &___torsoAnimator_9; }
	inline void set_torsoAnimator_9(Animator_t792326996 * value)
	{
		___torsoAnimator_9 = value;
		Il2CppCodeGenWriteBarrier(&___torsoAnimator_9, value);
	}

	inline static int32_t get_offset_of_legAnimator_10() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___legAnimator_10)); }
	inline Animator_t792326996 * get_legAnimator_10() const { return ___legAnimator_10; }
	inline Animator_t792326996 ** get_address_of_legAnimator_10() { return &___legAnimator_10; }
	inline void set_legAnimator_10(Animator_t792326996 * value)
	{
		___legAnimator_10 = value;
		Il2CppCodeGenWriteBarrier(&___legAnimator_10, value);
	}

	inline static int32_t get_offset_of_delay_11() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___delay_11)); }
	inline float get_delay_11() const { return ___delay_11; }
	inline float* get_address_of_delay_11() { return &___delay_11; }
	inline void set_delay_11(float value)
	{
		___delay_11 = value;
	}

	inline static int32_t get_offset_of_distanceY_12() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___distanceY_12)); }
	inline float get_distanceY_12() const { return ___distanceY_12; }
	inline float* get_address_of_distanceY_12() { return &___distanceY_12; }
	inline void set_distanceY_12(float value)
	{
		___distanceY_12 = value;
	}

	inline static int32_t get_offset_of_distanceX_13() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___distanceX_13)); }
	inline float get_distanceX_13() const { return ___distanceX_13; }
	inline float* get_address_of_distanceX_13() { return &___distanceX_13; }
	inline void set_distanceX_13(float value)
	{
		___distanceX_13 = value;
	}

	inline static int32_t get_offset_of_rangeShoot_14() { return static_cast<int32_t>(offsetof(FollowPlayer_t1977798162, ___rangeShoot_14)); }
	inline float get_rangeShoot_14() const { return ___rangeShoot_14; }
	inline float* get_address_of_rangeShoot_14() { return &___rangeShoot_14; }
	inline void set_rangeShoot_14(float value)
	{
		___rangeShoot_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
