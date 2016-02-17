#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// VisionColision
struct VisionColision_t64;
// UnityEngine.Collider2D
struct Collider2D_t158;

#include "codegen/il2cpp-codegen.h"

// System.Void VisionColision::.ctor()
extern "C" void VisionColision__ctor_m236 (VisionColision_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VisionColision::Start()
extern "C" void VisionColision_Start_m237 (VisionColision_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VisionColision::Update()
extern "C" void VisionColision_Update_m238 (VisionColision_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VisionColision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void VisionColision_OnTriggerEnter2D_m239 (VisionColision_t64 * __this, Collider2D_t158 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
