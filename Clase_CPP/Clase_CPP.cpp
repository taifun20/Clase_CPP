
#include <iostream>
#include <string>
#include <vector>
#include "BP_VEH_.h"
#include "BP_CONT_BANCAR_.h"

class dateOfBirth
{
	private:
		int dayOfBirth;
		int yearOfBirth;
		std::string MonthOfBirth;
	public:
		dateOfBirth()
		{
			dayOfBirth = 0;
			yearOfBirth = 0;
			MonthOfBirth = "";
		}
		dateOfBirth(int dayOfBirth, int yearOfBirth, std::string MonthOfBirth)
		{
			this->dayOfBirth = dayOfBirth;
			this->yearOfBirth = yearOfBirth;
			this->MonthOfBirth = MonthOfBirth;
		}
		int calculateAge()
		{
			std::cout << "Age is " << "To Do" << std::endl;
		}
		void printDateOfBirth()
		{

		}
};

class Persoana
{
	private:
		// Atribute
		int Varsta{0};
		std::string Nume{""};
	public:
		Persoana(std::string Nume, int Varsta, int dayOfBirth, int yearOfBirth, std::string MonthOfBirth)
		{
			// Operatorul  "this"  este ca un pointer catre propria instanta !
			this->Nume = Nume;
			this->Varsta = Varsta;
			m_date_of_birth = dateOfBirth(dayOfBirth, yearOfBirth, MonthOfBirth);
		}
		// Metoda
		void CE_PrintInfo()
		{
			std::cout << "Salut ma cheam " << Nume << " si am " << Varsta << " ani" << std::endl;
			//m_date_of_birth.printDateOfBirth();
		}
		dateOfBirth m_date_of_birth;
};

#define MAX_CONTACTS 3

// Struct contacte
struct Contact {
	std::string name;
	std::string phone;
};

void CE_CONTACTE_()
{
	Contact agenda[MAX_CONTACTS]; // Vector de contacte
	int i;

	// Adaugam contactele
	std::cout << "Introduceti informatiile pentru " << MAX_CONTACTS << " contacte:\n";
	for (i = 0; i < MAX_CONTACTS; i++) {
		std::cout << "Contact " << i + 1 << ":" << std::endl;
		std::cout << "Nume: ";
		std::cin >> agenda[i].name;
		std::cout << "Telefon: ";
		std::cin >> agenda[i].phone;
		std::cout << std::endl;
	}

	// Afisam toate contactele
	std::cout << std::endl;
	std::cout << "Contactele adaugate sunt:" << std::endl;

	for (i = 0; i < MAX_CONTACTS; i++) {
		std::cout << std::endl;
		std::cout << "Contact " << i + 1 << ":" << std::endl;
		std::cout << "Nume: " << agenda[i].name << std::endl;
		std::cout << "Telefon: " << agenda[i].phone << std::endl;
	}
}

#define MAX_BOOKS 100

// Struct book
struct Book {
	std::string title;
	std::string author;
	int year{0};
};

// Adaugam carti in array
void CE_ADD_BOOK_(Book library[], int& numBooks) {
	if (numBooks < MAX_BOOKS) {
		std::cout << "Introduceti titlul: ";
		std::cin >> library[numBooks].title;
		std::cout << "Introduceti autorul: ";
		std::cin >> library[numBooks].author;
		std::cout << "Introduceti anul publicarii: ";
		std::cin >> library[numBooks].year;
		numBooks++;
	}
	else {
		std::cout << "Biblioteca este plina. Nu se mai pot adauga carti." << std::endl;
	}
}

// Afisam cartile din array
void CE_DISPLAY_LIBRARY(const Book library[], int numBooks) {
	std::cout << std::endl;
	std::cout << "Colectia de carti:" << std::endl;
	for (int i = 0; i < numBooks; i++) {
		std::cout << "Titlu: " << library[i].title << std::endl;
		std::cout << "Autor: " << library[i].author << std::endl;
		std::cout << "Anul publicarii: " << library[i].year << std::endl << std::endl;
	}
}

void CE_BIBLIOTECA_()
{
	Book library[MAX_BOOKS]; // Array de carti
	int numBooks = 0; // Numarul de carti din biblioteca

	char choice;
	do {
		std::cout << "1. Adaugare carte" << std::endl;
		std::cout << "2. Afisare colectie" << std::endl;
		std::cout << "3. Iesire" << std::endl;
		std::cout << "Alegeti optiunea: ";
		std::cin >> choice;

		switch (choice) {
		case '1':
			CE_ADD_BOOK_(library, numBooks);
			break;
		case '2':
			CE_DISPLAY_LIBRARY(library, numBooks);
			break;
		case '3':
			std::cout << "Iesire din program." << std::endl;
			break;
		default:
			std::cout << "Optiune invalida! Va rugam sa alegeti din nou." << std::endl;
		}
	} while (choice != '3');
}


bool isPalindrome_(const char* str) {
	int len = strlen(str);
	for (int i = 0; i < len / 2; ++i) {
		if (str[i] != str[len - i - 1]) {
			return false;
		}
	}
	return true;
}

void CE_PALINDROME_CHECK_()
{
	const int max_length = 100;
	char str[max_length + 1];

	std::cout << "Introduceti un sir de caractere: ";
	std::cin.getline(str, max_length + 1);

	if (isPalindrome_(str)) {
		std::cout << "Sirul este un palindrom." << std::endl;
	}
	else {
		std::cout << "Sirul nu este un palindrom." << std::endl;
	}
}


class myClass
{
	public:
		myClass() // constructor
		{
			std::cout << "Un obiect myClass a fost creat" << std::endl;

			my_var = 10;
			my_string = "myClass";
		};
		myClass(int var, std::string input_string)
		{
			my_var = var;
			my_string = input_string;
		}
		~myClass() // destructor
		{
			std::cout << "Un obiect myClass a fost distrus" << std::endl;
		};
		void printData()
		{
			std::cout << "my_var: " << my_var << std::endl;
			std::cout << "my_string: " << my_string << std::endl;
		};
	private:
		int my_var;
		std::string my_string;

};

int main()
{
	
	myClass obj;
	//obj = myClass(25, "Object 1"); // Se creeaza un Obiect temporar
	obj.printData();

	// Inca o metoda de a creea obiecte in C++
	myClass obj2 = myClass(45,"Object 2"); // De preferat aceasta metoda
	obj2.printData();



	//CE_CONTACTE_();
	//CE_BIBLIOTECA_();
	//CE_PALINDROME_CHECK_();
	
	//Persoana p1;
	//p1.Nume = "Taifun";
	//p1.Varsta = 20;
	//p1.CE_PrintInfo();

	/*	BP_VEH_ veh01;
	veh01.BrandName = "BMW";
	veh01.ModelName = "M3 GTR";
	veh01.ManufactureYeah = 2003;
	veh01.PowerHP = 465;
	veh01.TopSpeed = 286;
	veh01.Gears = 6;
	veh01.Seats = 1;
	veh01.VehStats(veh01.BrandName, veh01.ModelName, veh01.ManufactureYeah, veh01.PowerHP, veh01.TopSpeed, veh01.Gears, veh01.Seats);
	*/

	/*	BP_CONT_BANCAR_ Acc01_;
	Acc01_.FirstName = "Taifun20";
	Acc01_.LastName = "";
	Acc01_.AccMoney = 98055.54;

	Acc01_.CE_InitAcc_();
	Acc01_.CE_DEPOSIT_(25000);
	Acc01_.CE_ACC_INFO_(Acc01_.FirstName, Acc01_.LastName, Acc01_.AccMoney);*/

}