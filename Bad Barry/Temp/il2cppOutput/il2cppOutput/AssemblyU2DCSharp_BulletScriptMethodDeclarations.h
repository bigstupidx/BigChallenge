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

// BulletScript
struct BulletScript_t130;
// UnityEngine.Collider2D
struct Collider2D_t152;

#include "codegen/il2cpp-codegen.h"

// System.Void BulletScript::.ctor()
extern "C" void BulletScript__ctor_m598 (BulletScript_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Start()
extern "C" void BulletScript_Start_m599 (BulletScript_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Update()
extern "C" void BulletScript_Update_m600 (BulletScript_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void BulletScript_OnTriggerEnter2D_m601 (BulletScript_t130 * __this, Collider2D_t152 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
