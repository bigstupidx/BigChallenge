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

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t31;
// UnityEngine.Animator
struct Animator_t41;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m486 (StateMachineBehaviour_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m3467 (StateMachineBehaviour_t31 * __this, Animator_t41 * ___animator, AnimatorStateInfo_t106  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m3468 (StateMachineBehaviour_t31 * __this, Animator_t41 * ___animator, AnimatorStateInfo_t106  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m3469 (StateMachineBehaviour_t31 * __this, Animator_t41 * ___animator, AnimatorStateInfo_t106  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
