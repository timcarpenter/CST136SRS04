#include "stdafx.h"
#include "Location.h"
#include <cmath>

namespace GPS {


	Location::Location(const std::string name, const Latitude latitude, const Longitude longitude)
		: name_(name), latitude_(latitude), longitude_(longitude)
	{
	}

	Location::Location(const Location &location)
		: name_(location.name_), latitude_(location.latitude_), longitude_(location.longitude_)
	{
	}

	Location &Location::operator=(const Location &other)
	{
		if (&other == this)
			return *this;

		return *this;
	}

	double Location::distance_to_(const Location &dest)
	{
		// This calculation was pulled from codeproject.com --> see reference in report.md

		double PI = 4.0*atan(1.0);

		//main code inside the class
		double dlat1 = dest.latitude_.get_degree() * (PI / 180);
		double dlong1 = dest.longitude_.get_degree() * (PI / 180);
		double dlat2 = latitude_.get_degree() * (PI / 180);
		double dlong2 = longitude_.get_degree() * (PI / 180);

		double dLong = dlong1 - dlong2;
		double dLat = dlat1 - dlat2;

		double aHarv = pow(sin(dLat / 2.0), 2.0) + cos(dlat1)*cos(dlat2)*pow(sin(dLong / 2), 2);
		double cHarv = 2 * atan2(sqrt(aHarv), sqrt(1.0 - aHarv));
		//earth's radius from wikipedia varies between 6,356.750 km — 6,378.135 km (˜3,949.901 — 3,963.189 miles)
		//The IUGG value for the equatorial radius of the Earth is 6378.137 km (3963.19 mile)
		const double earth = 6378;  //In KM
		double distance = earth * cHarv;

		return distance;
	}

	std::string Location::get_name() const
	{
		return name_;
	}

	double Location::get_lat() const
	{

		return latitude_.get_degree();
	}

	double Location::get_long() const
	{

		return longitude_.get_degree();
	}

}

