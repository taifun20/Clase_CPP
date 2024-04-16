#include "BP_VEH_.h"

void BP_VEH_::Throttle()
{
}

void BP_VEH_::Break()
{
}

void BP_VEH_::Steering()
{
}

void BP_VEH_::VehStats(std::string BrandName, std::string ModelName, int ManufactureYeah, int PowerHP, int TopSpeed, int Gears, int Seats)
{
	std::cout << "Veh Stats:" << std::endl << std::endl
		<< " Brand: " << BrandName << std::endl
		<< " Model: " << ModelName << std::endl
		<< " Year: " << ManufactureYeah << std::endl
		<< " HP: " << PowerHP << std::endl
		<< " TopSpeed: " << TopSpeed << std::endl
		<< " Gears: " << Gears << std::endl
		<< " Seats: " << Seats << std::endl;
}
