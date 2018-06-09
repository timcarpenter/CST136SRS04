#include "stdafx.h"
#include "Angle.h"


namespace GPS
{

	template<int min, int max>
	Angle<min, max>::Angle(const degree_type degree, const minute_type minute, const second_type second)
		: degree_(degree), minute_(minute), second_(second)
	{
	}

	template <int min, int max>
	Angle<min, max>::Angle()
		: degree_(0), minute_(0), second_(0)
	{

	}

	template <int min, int max>
	Angle<min, max>::Angle(const double degree)
		: degree_(degree), 
	      minute_(degree - degree_.get_value() * 60.0), 
	      second_(degree - degree_.get_value() - (minute_.get_value() / 60.0) * 3600.0)
	{
		//degree_(degree);
		//minute_((degree - degree_.get_value()) * 60.0);
		//second_((degree - degree_.get_value() - (minute_.get_value() / 60.0)) * 3600.0);
	}

	template <int min, int max>
	double Angle<min, max>::get_degree() const
	{
		double value = degree_.get_value() + (minute_.get_value() / 60.0) + (second_.get_value() / 3600.0);

		return value;
	}

	double operator/(const Range<unsigned, 0, 60>& lhs, const int & rhs)
	{
		return 0.0;
	}


	template class Angle<-89, 90>;
	template class Angle<-180, 180>;


}