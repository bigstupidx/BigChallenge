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

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t39;
// UnityEngine.Animator
struct Animator_t34;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m388 (StateMachineBehaviour_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m3319 (StateMachineBehaviour_t39 * __this, Animator_t34 * ___animator, AnimatorStateInfo_t74  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m3320 (StateMachineBehaviour_t39 * __this, Animator_t34 * ___animator, AnimatorStateInfo_t74  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m3321 (StateMachineBehaviour_t39 * __this, Animator_t34 * ___animator, AnimatorStateInfo_t74  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
