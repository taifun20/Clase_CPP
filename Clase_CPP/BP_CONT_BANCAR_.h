#pragma once
#include <iostream>
#include <string>

class BP_CONT_BANCAR_
{
	public:
		std::string FirstName{ "" };
		std::string LastName{ "" };
		float AccMoney{ 0.0 };

		void CE_ACC_INFO_(std::string FirstName, std::string LastName, float AccMoney);
		void CE_InitAcc_();
		bool CE_DEPOSIT_(int AccMoney);
	private:

};

