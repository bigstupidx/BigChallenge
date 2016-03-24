#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TileAnimator/Frame
struct  Frame_t68139341  : public Il2CppObject
{
public:
	// System.Int32 Tiled2Unity.TileAnimator/Frame::DurationMs
	int32_t ___DurationMs_0;
	// System.Single Tiled2Unity.TileAnimator/Frame::Vertex_z
	float ___Vertex_z_1;

public:
	inline static int32_t get_offset_of_DurationMs_0() { return static_cast<int32_t>(offsetof(Frame_t68139341, ___DurationMs_0)); }
	inline int32_t get_DurationMs_0() const { return ___DurationMs_0; }
	inline int32_t* get_address_of_DurationMs_0() { return &___DurationMs_0; }
	inline void set_DurationMs_0(int32_t value)
	{
		___DurationMs_0 = value;
	}

	inline static int32_t get_offset_of_Vertex_z_1() { return static_cast<int32_t>(offsetof(Frame_t68139341, ___Vertex_z_1)); }
	inline float get_Vertex_z_1() const { return ___Vertex_z_1; }
	inline float* get_address_of_Vertex_z_1() { return &___Vertex_z_1; }
	inline void set_Vertex_z_1(float value)
	{
		___Vertex_z_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
