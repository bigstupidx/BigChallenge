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

// ScreenManager
struct ScreenManager_t107;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t156;

#include "codegen/il2cpp-codegen.h"

// System.Void ScreenManager::.ctor()
extern "C" void ScreenManager__ctor_m461 (ScreenManager_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Start()
extern "C" void ScreenManager_Start_m462 (ScreenManager_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Update()
extern "C" void ScreenManager_Update_m463 (ScreenManager_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::buttonClicked(System.String)
extern "C" void ScreenManager_buttonClicked_m464 (ScreenManager_t107 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenManager::LoadSceneAsync(System.String)
extern "C" Object_t * ScreenManager_LoadSceneAsync_m465 (ScreenManager_t107 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
