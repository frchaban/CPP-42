#include "phonebook.h"

void Contact::fill(void)
{
	std::string var[11] = {"first name", "last name", "nickname", "login", "postal address", "email address"
	, "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};

	for (int i = 0; i < 11; i++)
	{
		std::cout << "Please enter the contact's " << var[i] << std::endl;
		std::cin >> info[i];
	}
}

void Contact::print(void)
{
	std::string var[11] = {"first name", "last name", "nickname", "login", "postal address", "email address"
	, "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};
	for (int i = 0; i < 11; i++)
	{
		std::cout << "Contact's " << var[i] << " is : "<< info[i] << std::endl;
	}
}
