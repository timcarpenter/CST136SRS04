
CST136SRS04
Island Hopping

Student Name: Timothy Carpenter

Issues:

Notes:

-Requirements
	Use as many STL algorithms and containers as possible.
	Implement Great Circle for distances and haversine formula for lat/long.
	Earth's radius = 6378 km

	For algorithm movement; need two paths
	 - NZ to Hawaii from S to N
	 - NZ to Hawaii from W to E

	Use 3 different data structures:
	- forward_list
	- vector
	- map

	Add up distance mileage using algorithm (cannot use manual loop)


- Using Haversine formula reference: 
   https://www.codeproject.com/Articles/22488/Distance-using-Longitiude-and-latitude-using-c



- Summation of elements in a container
  c++ cookbook pg. 399
  using <numeric> header and accumulate() function
  i.e.		int sum = accumulate(vector.begin(), vector.end(),0)

- Algorithm for finding a path through data points
  The Standard Library pg. 325
 sort()? 