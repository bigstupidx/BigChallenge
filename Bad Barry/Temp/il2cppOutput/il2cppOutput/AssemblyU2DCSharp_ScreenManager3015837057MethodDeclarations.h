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
struct ScreenManager_t3015837057;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ScreenManager::.ctor()
extern "C"  void ScreenManager__ctor_m3580886282 (ScreenManager_t3015837057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Start()
extern "C"  void ScreenManager_Start_m2528024074 (ScreenManager_t3015837057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::Update()
extern "C"  void ScreenManager_Update_m1065187139 (ScreenManager_t3015837057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenManager::buttonClicked(System.String)
extern "C"  void ScreenManager_buttonClicked_m667443077 (ScreenManager_t3015837057 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenManager::LoadSceneAsync(System.String)
extern "C"  Il2CppObject * ScreenManager_LoadSceneAsync_m2440903226 (ScreenManager_t3015837057 * __this, String_t* ___sceneName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
