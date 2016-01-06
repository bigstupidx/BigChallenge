#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ListBank
struct ListBank_t76;
// UnityEngine.UI.Text
struct Text_t47;
// System.Int32[]
struct Int32U5BU5D_t77;
// System.String[]
struct StringU5BU5D_t78;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ListBank
struct  ListBank_t76  : public MonoBehaviour_t2
{
	// UnityEngine.UI.Text ListBank::title
	Text_t47 * ___title_3;
	// UnityEngine.UI.Text ListBank::detail
	Text_t47 * ___detail_4;
	// System.Int32[] ListBank::contents
	Int32U5BU5D_t77* ___contents_5;
	// System.String[] ListBank::details
	StringU5BU5D_t78* ___details_6;
};
struct ListBank_t76_StaticFields{
	// ListBank ListBank::Instance
	ListBank_t76 * ___Instance_2;
};
