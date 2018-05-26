#include "stdafx.h"
#include "Location.h"
#include <array>


std::array<GPS::Location, 12> island
{
	GPS::Location{ "Faichuk Islands",	GPS::Latitude{ GPS::Latitude::Cardinal::N, 7, 21, 8 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 151, 36, 30 } },
	GPS::Location{ "Hawaii",			GPS::Latitude{ GPS::Latitude::Cardinal::N, 21, 18, 41 },GPS::Longitude{ GPS::Longitude::Cardinal::W, 157, 47, 47 } },
	GPS::Location{ "Mariana Islands",	GPS::Latitude{ GPS::Latitude::Cardinal::N, 17, 0, 0 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 146, 0 , 0 } },
	GPS::Location{ "Johnston Atoll",	GPS::Latitude{ GPS::Latitude::Cardinal::N, 16, 44, 13 },GPS::Longitude{ GPS::Longitude::Cardinal::W, 169, 31, 26 } },
	GPS::Location{ "Kosrae",			GPS::Latitude{ GPS::Latitude::Cardinal::N, 5, 19, 0 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 162, 59, 0 } },
	GPS::Location{ "Falalop",			GPS::Latitude{ GPS::Latitude::Cardinal::N, 10, 1, 14 }, GPS::Longitude{ GPS::Longitude::Cardinal::E, 139, 47, 23 } },
	GPS::Location{ "Guam",				GPS::Latitude{ GPS::Latitude::Cardinal::N, 13, 30, 0 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 144, 48, 0 } },
	GPS::Location{ "Pohnpei",			GPS::Latitude{ GPS::Latitude::Cardinal::N, 6, 51, 0 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 158, 13, 0 } },
	GPS::Location{ "Marshall Islands",	GPS::Latitude{ GPS::Latitude::Cardinal::N, 7, 7	, 0 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 171, 4 , 0 } },
	GPS::Location{ "Yap",				GPS::Latitude{ GPS::Latitude::Cardinal::N, 9, 32, 0 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 138, 7 , 0 } },
	GPS::Location{ "Wake Island",		GPS::Latitude{ GPS::Latitude::Cardinal::N, 19, 17, 43 },GPS::Longitude{ GPS::Longitude::Cardinal::E, 166, 37, 52 } },
	GPS::Location{ "New Zealand",		GPS::Latitude{ GPS::Latitude::Cardinal::S, 41, 17, 0 },	GPS::Longitude{ GPS::Longitude::Cardinal::E, 174, 27, 0 } }

	
	/// ... In order as shown in the below table....
};

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