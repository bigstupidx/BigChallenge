#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// GameBehavior
struct GameBehavior_t1830462596;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBehavior/<PlayAudio>c__Iterator2
struct  U3CPlayAudioU3Ec__Iterator2_t195151385  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource GameBehavior/<PlayAudio>c__Iterator2::currentAudio
	AudioSource_t3628549054 * ___currentAudio_0;
	// System.String GameBehavior/<PlayAudio>c__Iterator2::levelName
	String_t* ___levelName_1;
	// System.Int32 GameBehavior/<PlayAudio>c__Iterator2::$PC
	int32_t ___U24PC_2;
	// System.Object GameBehavior/<PlayAudio>c__Iterator2::$current
	Il2CppObject * ___U24current_3;
	// UnityEngine.AudioSource GameBehavior/<PlayAudio>c__Iterator2::<$>currentAudio
	AudioSource_t3628549054 * ___U3CU24U3EcurrentAudio_4;
	// System.String GameBehavior/<PlayAudio>c__Iterator2::<$>levelName
	String_t* ___U3CU24U3ElevelName_5;
	// GameBehavior GameBehavior/<PlayAudio>c__Iterator2::<>f__this
	GameBehavior_t1830462596 * ___U3CU3Ef__this_6;

public:
	inline static int32_t get_offset_of_currentAudio_0() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t195151385, ___currentAudio_0)); }
	inline AudioSource_t3628549054 * get_currentAudio_0() const { return ___currentAudio_0; }
	inline AudioSource_t3628549054 ** get_address_of_currentAudio_0() { return &___currentAudio_0; }
	inline void set_currentAudio_0(AudioSource_t3628549054 * value)
	{
		___currentAudio_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentAudio_0, value);
	}

	inline static int32_t get_offset_of_levelName_1() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t195151385, ___levelName_1)); }
	inline String_t* get_levelName_1() const { return ___levelName_1; }
	inline String_t** get_address_of_levelName_1() { return &___levelName_1; }
	inline void set_levelName_1(String_t* value)
	{
		___levelName_1 = value;
		Il2CppCodeGenWriteBarrier(&___levelName_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t195151385, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t195151385, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EcurrentAudio_4() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t195151385, ___U3CU24U3EcurrentAudio_4)); }
	inline AudioSource_t3628549054 * get_U3CU24U3EcurrentAudio_4() const { return ___U3CU24U3EcurrentAudio_4; }
	inline AudioSource_t3628549054 ** get_address_of_U3CU24U3EcurrentAudio_4() { return &___U3CU24U3EcurrentAudio_4; }
	inline void set_U3CU24U3EcurrentAudio_4(AudioSource_t3628549054 * value)
	{
		___U3CU24U3EcurrentAudio_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EcurrentAudio_4, value);
	}

	inline static int32_t get_offset_of_U3CU24U3ElevelName_5() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t195151385, ___U3CU24U3ElevelName_5)); }
	inline String_t* get_U3CU24U3ElevelName_5() const { return ___U3CU24U3ElevelName_5; }
	inline String_t** get_address_of_U3CU24U3ElevelName_5() { return &___U3CU24U3ElevelName_5; }
	inline void set_U3CU24U3ElevelName_5(String_t* value)
	{
		___U3CU24U3ElevelName_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3ElevelName_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_6() { return static_cast<int32_t>(offsetof(U3CPlayAudioU3Ec__Iterator2_t195151385, ___U3CU3Ef__this_6)); }
	inline GameBehavior_t1830462596 * get_U3CU3Ef__this_6() const { return ___U3CU3Ef__this_6; }
	inline GameBehavior_t1830462596 ** get_address_of_U3CU3Ef__this_6() { return &___U3CU3Ef__this_6; }
	inline void set_U3CU3Ef__this_6(GameBehavior_t1830462596 * value)
	{
		___U3CU3Ef__this_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
