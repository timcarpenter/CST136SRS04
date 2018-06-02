#include "stdafx.h"
#include "Range.h"

namespace GPS
{
	template <typename T, T min, T max>
	Range<T, min, max>::Range(const value_type value)
	{
		value_ = value;
	}
}