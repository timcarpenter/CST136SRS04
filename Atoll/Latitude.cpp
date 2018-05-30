#include "stdafx.h"
#include "Latitude.h"


namespace GPS
{

	//double Latitude::get_value_()
	//{
	//
	//	return Angle::get_degree();
	//}

	Latitude::Latitude(const Cardinal cardinal, const degree_type degree, const minute_type minute, const second_type second)
		: Angle(degree,minute,second),cardinal_(cardinal)
	{

	}

	double Latitude::get_degree() const
	{
		double angle = Angle::get_degree();

		if (cardinal_ == Cardinal::S)
		{
			angle = -angle;
		}


		return angle;
	}

}