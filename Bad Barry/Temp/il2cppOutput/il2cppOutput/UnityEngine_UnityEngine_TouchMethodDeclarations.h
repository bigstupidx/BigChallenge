﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m2290 (Touch_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t33  Touch_get_position_m646 (Touch_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m818 (Touch_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Touch_t152_marshal(const Touch_t152& unmarshaled, Touch_t152_marshaled& marshaled);
extern "C" void Touch_t152_marshal_back(const Touch_t152_marshaled& marshaled, Touch_t152& unmarshaled);
extern "C" void Touch_t152_marshal_cleanup(Touch_t152_marshaled& marshaled);
