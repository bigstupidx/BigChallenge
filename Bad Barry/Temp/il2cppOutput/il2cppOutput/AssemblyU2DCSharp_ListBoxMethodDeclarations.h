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
struct ListBox_t124;
// Item
struct Item_t86;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ListBox::.ctor()
extern "C" void ListBox__ctor_m564 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Start()
extern "C" void ListBox_Start_m565 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialContent()
extern "C" void ListBox_initialContent_m566 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateContent(Item)
extern "C" void ListBox_updateContent_m567 (ListBox_t124 * __this, Item_t86 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::setSlidingDistance(System.Single)
extern "C" void ListBox_setSlidingDistance_m568 (ListBox_t124 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::unitMove(System.Int32,System.Boolean)
extern "C" void ListBox_unitMove_m569 (ListBox_t124 * __this, int32_t ___unit, bool ___up, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Update()
extern "C" void ListBox_Update_m570 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialPosition(System.Int32)
extern "C" void ListBox_initialPosition_m571 (ListBox_t124 * __this, int32_t ___listBoxID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updatePosition(UnityEngine.Vector3)
extern "C" void ListBox_updatePosition_m572 (ListBox_t124 * __this, Vector3_t25  ___deltaPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateXPosition()
extern "C" void ListBox_updateXPosition_m573 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::checkBoundary()
extern "C" void ListBox_checkBoundary_m574 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateSize()
extern "C" void ListBox_updateSize_m575 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBox::getCurrentContentID()
extern "C" int32_t ListBox_getCurrentContentID_m576 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToLastContent()
extern "C" void ListBox_updateToLastContent_m577 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToNextContent()
extern "C" void ListBox_updateToNextContent_m578 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::onBoxClicked()
extern "C" void ListBox_onBoxClicked_m579 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::toggleAnimation()
extern "C" void ListBox_toggleAnimation_m580 (ListBox_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
