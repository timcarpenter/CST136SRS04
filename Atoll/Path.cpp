#include "stdafx.h"
#include "Path.h"
#include <array>
#include <iostream>

namespace GPS
{ 

Path::Path()
{
}

	void Path::generate_northern_path(std::array<GPS::Location, 12> island)
	{
		std::sort(island.begin(), island.end(), north_compare);

		for (Location location: island)
		{
			std::cout << location.get_name() << std::endl; 
		}
	}

	void Path::generate_western_path(std::array<GPS::Location, 12> island)
	{


	}

	bool Path::west_compare(const Location& a, const Location& b)
	{

		return a.get_lat() > b.get_lat();
	}

	bool Path::north_compare(const Location& a, const Location& b)
	{

		return a.get_long() > b.get_long();
	}
}


