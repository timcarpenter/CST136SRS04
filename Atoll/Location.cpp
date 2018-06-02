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




/*
| Island Name		| Lat Deg	| Lat Min	| Lat Sec	| N / S | Lng Deg	| Lng Min	| Lng Sec	| E / W |
| ----------------	| ------ -	| ------ -	| ------ -	| -- -	| ------ -	| ------ -	| ------ -	| -- -	|
| Faichuk Islands	| 7			| 21		| 8			| N		| 151		| 36		| 30		| E		|
| Hawaii			| 21		| 18		| 41		| N		| 157		| 47		| 47		| W		|
| Mariana Islands	| 17		| 0			| 0			| N		| 146		| 0			| 0			| E		|
| Johnston Atoll	| 16		| 44		| 13		| N		| 169		| 31		| 26		| W		|
| Kosrae			| 5			| 19		| 0			| N		| 162		| 59		| 0			| E		|
| Falalop			| 10		| 1			| 14		| N		| 139		| 47		| 23		| E		|
| Guam				| 13		| 30		| 0			| N		| 144		| 48		| 0			| E		|
| Pohnpei			| 6			| 51		| 0			| N		| 158		| 13		| 0			| E		|
| Marshall Islands	| 7			| 7			| 0			| N		| 171		| 4			| 0			| E		|
| Yap				| 9			| 32		| 0			| N		| 138		| 7			| 0			| E		|
| Wake Island		| 19		| 17		| 43		| N		| 166		| 37		| 52		| E		|
| New Zealand		| 41		| 17		| 0			| S		| 174		| 27		| 0			| E		|


*/