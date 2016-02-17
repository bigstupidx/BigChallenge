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

// BulletBox
struct BulletBox_t135;
// UnityEngine.Collider2D
struct Collider2D_t158;

#include "codegen/il2cpp-codegen.h"

// System.Void BulletBox::.ctor()
extern "C" void BulletBox__ctor_m619 (BulletBox_t135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletBox::Start()
extern "C" void BulletBox_Start_m620 (BulletBox_t135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletBox::Update()
extern "C" void BulletBox_Update_m621 (BulletBox_t135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletBox::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void BulletBox_OnTriggerEnter2D_m622 (BulletBox_t135 * __this, Collider2D_t158 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
