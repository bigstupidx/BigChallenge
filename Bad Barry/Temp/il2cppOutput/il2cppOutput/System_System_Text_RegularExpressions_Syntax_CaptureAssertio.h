#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t982;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t976;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t983;

#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t981  : public Assertion_t980
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t982 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t976 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t983 * ___literal_3;
};
