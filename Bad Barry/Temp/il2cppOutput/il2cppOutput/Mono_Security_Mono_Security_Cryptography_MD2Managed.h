﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t759;

#include "Mono_Security_Mono_Security_Cryptography_MD2.h"

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t802  : public MD2_t800
{
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t759* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t759* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t759* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t759* ___x_8;
};
struct MD2Managed_t802_StaticFields{
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t759* ___PI_SUBST_9;
};