﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t440;

#include "mscorlib_System_IO_TextWriter.h"

// System.IO.StringWriter
struct  StringWriter_t809  : public TextWriter_t766
{
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t440 * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;
};