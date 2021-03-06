#pragma once
#include "Angle.h"
#include "Range.h"

namespace GPS
{
	class Latitude : public Angle<-89, 90>
	{
		
	public:
		enum class Cardinal { S = -1, N = +1 };

		Latitude(const Cardinal cardinal, 
			     const degree_type degree,
			     const minute_type minute, 
			     const second_type second);


		double get_degree() const;

	private:

		Cardinal cardinal_;
	};
}

