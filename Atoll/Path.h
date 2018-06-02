#pragma once
#include "Location.h"
#include <array>

namespace GPS
{
	class Path
	{


	public:
		Path();
		void generate_northern_path(std::array<GPS::Location, 12> island);
		void generate_western_path(std::array<GPS::Location, 12> island);

		static bool west_compare(const Location &a, const Location &b);
		static bool north_compare(const Location &a, const Location &b);

	};






}
