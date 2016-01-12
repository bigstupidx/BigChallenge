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

// System.Byte[]
struct ByteU5BU5D_t772;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t705;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Convert::.cctor()
extern "C" void Convert__cctor_m10707 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::InternalFromBase64String(System.String,System.Boolean)
extern "C" ByteU5BU5D_t772* Convert_InternalFromBase64String_m10708 (Object_t * __this /* static, unused */, String_t* ___str, bool ___allowWhitespaceOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" ByteU5BU5D_t772* Convert_FromBase64String_m4864 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C" String_t* Convert_ToBase64String_m4840 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___inArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Convert_ToBase64String_m10709 (Object_t * __this /* static, unused */, ByteU5BU5D_t772* ___inArray, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Byte)
extern "C" bool Convert_ToBoolean_m10710 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Decimal)
extern "C" bool Convert_ToBoolean_m10711 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Double)
extern "C" bool Convert_ToBoolean_m10712 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Single)
extern "C" bool Convert_ToBoolean_m10713 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int32)
extern "C" bool Convert_ToBoolean_m10714 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int64)
extern "C" bool Convert_ToBoolean_m10715 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.SByte)
extern "C" bool Convert_ToBoolean_m10716 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int16)
extern "C" bool Convert_ToBoolean_m10717 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.String,System.IFormatProvider)
extern "C" bool Convert_ToBoolean_m10718 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C" bool Convert_ToBoolean_m10719 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C" bool Convert_ToBoolean_m10720 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
extern "C" bool Convert_ToBoolean_m10721 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
extern "C" bool Convert_ToBoolean_m10722 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
extern "C" bool Convert_ToBoolean_m10723 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Boolean)
extern "C" uint8_t Convert_ToByte_m10724 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Char)
extern "C" uint8_t Convert_ToByte_m10725 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Decimal)
extern "C" uint8_t Convert_ToByte_m10726 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Double)
extern "C" uint8_t Convert_ToByte_m10727 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Single)
extern "C" uint8_t Convert_ToByte_m10728 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int32)
extern "C" uint8_t Convert_ToByte_m3820 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int64)
extern "C" uint8_t Convert_ToByte_m10729 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.SByte)
extern "C" uint8_t Convert_ToByte_m10730 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int16)
extern "C" uint8_t Convert_ToByte_m10731 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String)
extern "C" uint8_t Convert_ToByte_m10732 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String,System.IFormatProvider)
extern "C" uint8_t Convert_ToByte_m10733 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C" uint8_t Convert_ToByte_m10734 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C" uint8_t Convert_ToByte_m10735 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
extern "C" uint8_t Convert_ToByte_m10736 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Object,System.IFormatProvider)
extern "C" uint8_t Convert_ToByte_m10737 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Byte)
extern "C" uint16_t Convert_ToChar_m4869 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C" uint16_t Convert_ToChar_m3851 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int64)
extern "C" uint16_t Convert_ToChar_m10738 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Single)
extern "C" uint16_t Convert_ToChar_m10739 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.SByte)
extern "C" uint16_t Convert_ToChar_m10740 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int16)
extern "C" uint16_t Convert_ToChar_m10741 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String)
extern "C" uint16_t Convert_ToChar_m3830 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String,System.IFormatProvider)
extern "C" uint16_t Convert_ToChar_m10742 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
extern "C" uint16_t Convert_ToChar_m10743 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
extern "C" uint16_t Convert_ToChar_m10744 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
extern "C" uint16_t Convert_ToChar_m10745 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Object,System.IFormatProvider)
extern "C" uint16_t Convert_ToChar_m10746 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
extern "C" DateTime_t48  Convert_ToDateTime_m3831 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int16)
extern "C" DateTime_t48  Convert_ToDateTime_m10747 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int32)
extern "C" DateTime_t48  Convert_ToDateTime_m10748 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int64)
extern "C" DateTime_t48  Convert_ToDateTime_m10749 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Single)
extern "C" DateTime_t48  Convert_ToDateTime_m10750 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
extern "C" DateTime_t48  Convert_ToDateTime_m10751 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.SByte)
extern "C" DateTime_t48  Convert_ToDateTime_m10752 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt16)
extern "C" DateTime_t48  Convert_ToDateTime_m10753 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt32)
extern "C" DateTime_t48  Convert_ToDateTime_m10754 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt64)
extern "C" DateTime_t48  Convert_ToDateTime_m10755 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Boolean)
extern "C" Decimal_t735  Convert_ToDecimal_m10756 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Byte)
extern "C" Decimal_t735  Convert_ToDecimal_m10757 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Double)
extern "C" Decimal_t735  Convert_ToDecimal_m3828 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Single)
extern "C" Decimal_t735  Convert_ToDecimal_m10758 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int32)
extern "C" Decimal_t735  Convert_ToDecimal_m10759 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int64)
extern "C" Decimal_t735  Convert_ToDecimal_m10760 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.SByte)
extern "C" Decimal_t735  Convert_ToDecimal_m10761 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int16)
extern "C" Decimal_t735  Convert_ToDecimal_m10762 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.String,System.IFormatProvider)
extern "C" Decimal_t735  Convert_ToDecimal_m10763 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C" Decimal_t735  Convert_ToDecimal_m10764 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C" Decimal_t735  Convert_ToDecimal_m10765 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
extern "C" Decimal_t735  Convert_ToDecimal_m10766 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C" Decimal_t735  Convert_ToDecimal_m10767 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Boolean)
extern "C" double Convert_ToDouble_m10768 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Byte)
extern "C" double Convert_ToDouble_m10769 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Decimal)
extern "C" double Convert_ToDouble_m10770 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Double)
extern "C" double Convert_ToDouble_m10771 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Single)
extern "C" double Convert_ToDouble_m10772 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int32)
extern "C" double Convert_ToDouble_m3827 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int64)
extern "C" double Convert_ToDouble_m10773 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.SByte)
extern "C" double Convert_ToDouble_m10774 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int16)
extern "C" double Convert_ToDouble_m10775 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
extern "C" double Convert_ToDouble_m10776 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C" double Convert_ToDouble_m10777 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C" double Convert_ToDouble_m10778 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
extern "C" double Convert_ToDouble_m10779 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" double Convert_ToDouble_m10780 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Boolean)
extern "C" int16_t Convert_ToInt16_m10781 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Byte)
extern "C" int16_t Convert_ToInt16_m10782 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Char)
extern "C" int16_t Convert_ToInt16_m10783 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Decimal)
extern "C" int16_t Convert_ToInt16_m10784 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Double)
extern "C" int16_t Convert_ToInt16_m10785 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Single)
extern "C" int16_t Convert_ToInt16_m10786 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int32)
extern "C" int16_t Convert_ToInt16_m3823 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int64)
extern "C" int16_t Convert_ToInt16_m10787 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.SByte)
extern "C" int16_t Convert_ToInt16_m10788 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int16)
extern "C" int16_t Convert_ToInt16_m10789 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.String,System.IFormatProvider)
extern "C" int16_t Convert_ToInt16_m4825 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C" int16_t Convert_ToInt16_m10790 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C" int16_t Convert_ToInt16_m10791 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
extern "C" int16_t Convert_ToInt16_m10792 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object)
extern "C" int16_t Convert_ToInt16_m10793 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
extern "C" int16_t Convert_ToInt16_m10794 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Boolean)
extern "C" int32_t Convert_ToInt32_m10795 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Byte)
extern "C" int32_t Convert_ToInt32_m3813 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C" int32_t Convert_ToInt32_m10796 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Decimal)
extern "C" int32_t Convert_ToInt32_m10797 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Double)
extern "C" int32_t Convert_ToInt32_m10798 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Single)
extern "C" int32_t Convert_ToInt32_m10799 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int64)
extern "C" int32_t Convert_ToInt32_m10800 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.SByte)
extern "C" int32_t Convert_ToInt32_m3816 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int16)
extern "C" int32_t Convert_ToInt32_m3817 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.IFormatProvider)
extern "C" int32_t Convert_ToInt32_m10801 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C" int32_t Convert_ToInt32_m10802 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C" int32_t Convert_ToInt32_m10803 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C" int32_t Convert_ToInt32_m3818 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object)
extern "C" int32_t Convert_ToInt32_m10804 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
extern "C" int32_t Convert_ToInt32_m4878 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Boolean)
extern "C" int64_t Convert_ToInt64_m10805 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Byte)
extern "C" int64_t Convert_ToInt64_m10806 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Char)
extern "C" int64_t Convert_ToInt64_m10807 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Decimal)
extern "C" int64_t Convert_ToInt64_m10808 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Double)
extern "C" int64_t Convert_ToInt64_m10809 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Single)
extern "C" int64_t Convert_ToInt64_m10810 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int32)
extern "C" int64_t Convert_ToInt64_m10811 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int64)
extern "C" int64_t Convert_ToInt64_m10812 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.SByte)
extern "C" int64_t Convert_ToInt64_m10813 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int16)
extern "C" int64_t Convert_ToInt64_m10814 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String)
extern "C" int64_t Convert_ToInt64_m10815 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
extern "C" int64_t Convert_ToInt64_m10816 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C" int64_t Convert_ToInt64_m10817 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C" int64_t Convert_ToInt64_m10818 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
extern "C" int64_t Convert_ToInt64_m10819 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object)
extern "C" int64_t Convert_ToInt64_m10820 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
extern "C" int64_t Convert_ToInt64_m10821 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Boolean)
extern "C" int8_t Convert_ToSByte_m10822 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Byte)
extern "C" int8_t Convert_ToSByte_m10823 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Char)
extern "C" int8_t Convert_ToSByte_m10824 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Decimal)
extern "C" int8_t Convert_ToSByte_m10825 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Double)
extern "C" int8_t Convert_ToSByte_m10826 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Single)
extern "C" int8_t Convert_ToSByte_m10827 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int32)
extern "C" int8_t Convert_ToSByte_m3822 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int64)
extern "C" int8_t Convert_ToSByte_m10828 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int16)
extern "C" int8_t Convert_ToSByte_m10829 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.String,System.IFormatProvider)
extern "C" int8_t Convert_ToSByte_m10830 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C" int8_t Convert_ToSByte_m10831 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C" int8_t Convert_ToSByte_m10832 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
extern "C" int8_t Convert_ToSByte_m10833 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
extern "C" int8_t Convert_ToSByte_m10834 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Boolean)
extern "C" float Convert_ToSingle_m10835 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Byte)
extern "C" float Convert_ToSingle_m10836 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Decimal)
extern "C" float Convert_ToSingle_m10837 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Double)
extern "C" float Convert_ToSingle_m10838 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Single)
extern "C" float Convert_ToSingle_m10839 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
extern "C" float Convert_ToSingle_m3826 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int64)
extern "C" float Convert_ToSingle_m10840 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.SByte)
extern "C" float Convert_ToSingle_m10841 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int16)
extern "C" float Convert_ToSingle_m10842 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
extern "C" float Convert_ToSingle_m10843 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C" float Convert_ToSingle_m10844 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C" float Convert_ToSingle_m10845 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
extern "C" float Convert_ToSingle_m10846 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
extern "C" float Convert_ToSingle_m10847 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Char)
extern "C" String_t* Convert_ToString_m3814 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
extern "C" String_t* Convert_ToString_m3815 (Object_t * __this /* static, unused */, DateTime_t48  ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
extern "C" String_t* Convert_ToString_m3848 (Object_t * __this /* static, unused */, Decimal_t735  ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
extern "C" String_t* Convert_ToString_m3849 (Object_t * __this /* static, unused */, int32_t ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
extern "C" String_t* Convert_ToString_m10848 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
extern "C" String_t* Convert_ToString_m10849 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
extern "C" String_t* Convert_ToString_m3850 (Object_t * __this /* static, unused */, uint64_t ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Boolean)
extern "C" uint16_t Convert_ToUInt16_m10850 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Byte)
extern "C" uint16_t Convert_ToUInt16_m10851 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Char)
extern "C" uint16_t Convert_ToUInt16_m10852 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Decimal)
extern "C" uint16_t Convert_ToUInt16_m10853 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Double)
extern "C" uint16_t Convert_ToUInt16_m10854 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Single)
extern "C" uint16_t Convert_ToUInt16_m10855 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
extern "C" uint16_t Convert_ToUInt16_m3824 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int64)
extern "C" uint16_t Convert_ToUInt16_m10856 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.SByte)
extern "C" uint16_t Convert_ToUInt16_m10857 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int16)
extern "C" uint16_t Convert_ToUInt16_m10858 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.String,System.IFormatProvider)
extern "C" uint16_t Convert_ToUInt16_m10859 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C" uint16_t Convert_ToUInt16_m10860 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C" uint16_t Convert_ToUInt16_m10861 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object,System.IFormatProvider)
extern "C" uint16_t Convert_ToUInt16_m10862 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Boolean)
extern "C" uint32_t Convert_ToUInt32_m3562 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Byte)
extern "C" uint32_t Convert_ToUInt32_m10863 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Char)
extern "C" uint32_t Convert_ToUInt32_m10864 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
extern "C" uint32_t Convert_ToUInt32_m10865 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Double)
extern "C" uint32_t Convert_ToUInt32_m10866 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Single)
extern "C" uint32_t Convert_ToUInt32_m10867 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
extern "C" uint32_t Convert_ToUInt32_m3825 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
extern "C" uint32_t Convert_ToUInt32_m3829 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.SByte)
extern "C" uint32_t Convert_ToUInt32_m10868 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int16)
extern "C" uint32_t Convert_ToUInt32_m10869 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.String,System.IFormatProvider)
extern "C" uint32_t Convert_ToUInt32_m10870 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C" uint32_t Convert_ToUInt32_m10871 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
extern "C" uint32_t Convert_ToUInt32_m10872 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object)
extern "C" uint32_t Convert_ToUInt32_m3561 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
extern "C" uint32_t Convert_ToUInt32_m10873 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Boolean)
extern "C" uint64_t Convert_ToUInt64_m10874 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Byte)
extern "C" uint64_t Convert_ToUInt64_m10875 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Char)
extern "C" uint64_t Convert_ToUInt64_m10876 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Decimal)
extern "C" uint64_t Convert_ToUInt64_m10877 (Object_t * __this /* static, unused */, Decimal_t735  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Double)
extern "C" uint64_t Convert_ToUInt64_m10878 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Single)
extern "C" uint64_t Convert_ToUInt64_m10879 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
extern "C" uint64_t Convert_ToUInt64_m3821 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int64)
extern "C" uint64_t Convert_ToUInt64_m10880 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.SByte)
extern "C" uint64_t Convert_ToUInt64_m10881 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int16)
extern "C" uint64_t Convert_ToUInt64_m10882 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.String,System.IFormatProvider)
extern "C" uint64_t Convert_ToUInt64_m10883 (Object_t * __this /* static, unused */, String_t* ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C" uint64_t Convert_ToUInt64_m3819 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
extern "C" uint64_t Convert_ToUInt64_m10884 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
extern "C" uint64_t Convert_ToUInt64_m10885 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
extern "C" uint64_t Convert_ToUInt64_m10886 (Object_t * __this /* static, unused */, Object_t * ___value, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
extern "C" Object_t * Convert_ChangeType_m10887 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___conversionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
extern "C" Object_t * Convert_ToType_m10888 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___conversionType, Object_t * ___provider, bool ___try_target_to_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
