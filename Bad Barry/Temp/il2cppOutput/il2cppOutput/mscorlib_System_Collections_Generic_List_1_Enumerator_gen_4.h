﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ItemData>
struct List_1_t62;
// ItemData
struct ItemData_t85;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<ItemData>
struct  Enumerator_t2011 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator<ItemData>::l
	List_1_t62 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<ItemData>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<ItemData>::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator<ItemData>::current
	ItemData_t85 * ___current_3;
};