#include "BP_CONT_BANCAR_.h"

void BP_CONT_BANCAR_::CE_ACC_INFO_(std::string FirstName, std::string LastName, float AccMoney)
{
	std::cout << "	Account Info" << std::endl <<
		"	First Name: " << FirstName << std::endl <<
		"	Last Name: " << LastName << std::endl <<
		"	Money: " << AccMoney << std::endl;
}

void BP_CONT_BANCAR_::CE_InitAcc_()
{
	if (FirstName.empty() && LastName.empty())
	{
		std::cout << "	Not Init" << std::endl;
	}
	else
	{
		std::cout << "	Init" << std::endl;
	}
}

bool BP_CONT_BANCAR_::CE_DEPOSIT_(int Money)
{
	if (Money > -1)
	{
		AccMoney += Money;
		return true;
	}
	
	return false;
}
