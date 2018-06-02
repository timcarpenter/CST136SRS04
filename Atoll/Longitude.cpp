#include "stdafx.h"
#include "Longitude.h"

namespace GPS
{
	//double Longitude::get_value_()
	//{

	//	return Angle::get_degree();
	//}

	Longitude::Longitude(const Cardinal cardinal, const degree_type degree, const minute_type minute, const second_type second)
		: Angle(degree, minute, second), cardinal_(cardinal)
	{

	}

	double Longitude::get_degree() const
	{
		double angle = Angle::get_degree();

		if(cardinal_ == Cardinal::W)
		{
			angle = -angle;
		}

		return angle; 
	}
}
