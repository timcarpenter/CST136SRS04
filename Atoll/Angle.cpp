#include "stdafx.h"
#include "Angle.h"
#include <cmath>

namespace GPS
{



	template<int min, int max>
	Angle<min, max>::Angle(const degree_type degree, const minute_type minute, const second_type second)
		: degree_(degree), minute_(minute), second_(second)
	{

	}

	template <int min, int max>
	Angle<min, max>::Angle(const double degree)
	{
		degree_ = int(degree);
		minute_ = (degree - degree_) * 60 ;
		second_ = (degree - degree_ - minute_ / 60) * 3600;
	}

	template <int min, int max>
	double Angle<min, max>::get_degree() const
	{


		double value = degree_ + minute_ / 60 + second_ / 3600; 

		//if (degree_ < 0)
		//{
		//	value = -value;
		//}

		return value; 
	}

}