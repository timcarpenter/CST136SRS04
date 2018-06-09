#pragma once

namespace GPS
{
	template<typename T, T min, T max>
	class Range // You should re-code and simplify your SRS01 RangeInt
	{

	private:
		using value_type = T;

		value_type value_;

	public:
		//explicit Range(const value_type value);
		Range(const value_type value);

		int get_value() const { return value_; }
		//void set_value(T value) { value_ = value; }
		
	};
}
