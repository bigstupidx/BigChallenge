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

// ListBox
struct ListBox_t109;
// Item
struct Item_t82;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ListBox::.ctor()
extern "C" void ListBox__ctor_m506 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Start()
extern "C" void ListBox_Start_m507 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialContent()
extern "C" void ListBox_initialContent_m508 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateContent(Item)
extern "C" void ListBox_updateContent_m509 (ListBox_t109 * __this, Item_t82 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::setSlidingDistance(System.Single)
extern "C" void ListBox_setSlidingDistance_m510 (ListBox_t109 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::unitMove(System.Int32,System.Boolean)
extern "C" void ListBox_unitMove_m511 (ListBox_t109 * __this, int32_t ___unit, bool ___up, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Update()
extern "C" void ListBox_Update_m512 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialPosition(System.Int32)
extern "C" void ListBox_initialPosition_m513 (ListBox_t109 * __this, int32_t ___listBoxID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updatePosition(UnityEngine.Vector3)
extern "C" void ListBox_updatePosition_m514 (ListBox_t109 * __this, Vector3_t20  ___deltaPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateXPosition()
extern "C" void ListBox_updateXPosition_m515 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::checkBoundary()
extern "C" void ListBox_checkBoundary_m516 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateSize()
extern "C" void ListBox_updateSize_m517 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBox::getCurrentContentID()
extern "C" int32_t ListBox_getCurrentContentID_m518 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToLastContent()
extern "C" void ListBox_updateToLastContent_m519 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToNextContent()
extern "C" void ListBox_updateToNextContent_m520 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::onBoxClicked()
extern "C" void ListBox_onBoxClicked_m521 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::toggleAnimation()
extern "C" void ListBox_toggleAnimation_m522 (ListBox_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
