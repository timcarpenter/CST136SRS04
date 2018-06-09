#include "stdafx.h"
#include "Path.h"
#include <array>
#include <iostream>
#include <vector>
#include <list>
#include <numeric>

namespace GPS
{ 

 Path::Path()
	= default;
 	void Path::generate_northern_path(std::array<GPS::Location, 12> island)
	{
		distance_ = 0.0;

		std::list<GPS::Location> locations;

		 for(Location location: island)
		 {
			 locations.push_back(location);
		 }

		 locations.sort(north_compare);

		 //distance_ = accumulate(,0.0);

		for (Location location: locations)
		{
			std::cout << location.get_name() << std::endl;
		}

		std::cout << "Total Distance: " << distance_ << std::endl; 
	}

	void Path::generate_western_path(std::array<GPS::Location, 12> island)
	{
		distance_ = 0.0; 

		std::list<GPS::Location> locations;

		for (Location location : island)
		{
			locations.push_back(location);
		}

		locations.sort(west_compare);

		//distance_ = accumulate(locations.begin(), locations.end(), 0.0);

		for (Location location : locations)
		{
			std::cout << location.get_name() << std::endl;
		}
		std::cout << "Total Distance: " << distance_ << std::endl;
	}

	bool Path::north_compare(const Location& a, const Location& b)
	{

		return a.get_lat() < b.get_lat();
	}

	bool Path::west_compare(const Location& a, const Location& b)
	{
		return a.get_long() > b.get_long();
	}
}


