#pragma once
#include <string>
#include <iostream>

class BP_VEH_
{
	public:
		int ManufactureYeah{ 0 };
		int Seats{ 0 };
		int Wheels{ 0 };
		int Gears{ 0 };
		int TopSpeed{ 0 };
		int PowerHP{ 0 };
		std::string BrandName{ "" };
		std::string ModelName{ "" };
		void Throttle();
		void Break();
		void Steering();
		void VehStats(std::string BrandName, std::string ModelName, int ManufactureYeah, int PowerHP, int TopSpeed, int Gears, int Seats);
};

