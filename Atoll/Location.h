#pragma once

#include <string>
#include "Latitude.h"
#include "Longitude.h"
#include "Range.h"
#include "Angle.h"

namespace GPS
{
	class Location
	{

	private:
		const std::string name_;
		const Latitude latitude_;
		const Longitude longitude_;

	public:
		Location(const std::string name, 
			     const Latitude latitude, 
			     const Longitude longitude);

		Location(const Location &location);

		Location & operator= (const Location &);

		double distance_to_(const Location &dest); 

		double get_lat() const;
		double get_long() const;
		std::string get_name() const; 

	};

}

