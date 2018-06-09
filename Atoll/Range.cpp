#include "stdafx.h"
#include "Range.h"

namespace GPS
{

	template <typename T, T min, T max>
	Range<T, min, max>::Range(const value_type value)
	{
		value_ = value;
	}




	template class Range<unsigned, 0, 60>;
	template class Range<int, -180, 180>;
	template class Range<int, -89, 90>;

}