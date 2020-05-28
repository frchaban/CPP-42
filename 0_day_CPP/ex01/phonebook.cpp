#include "phonebook.h"

void ft_search(int n, Contact contact[])
{
	int nb;

	for (int j = 0; j < n; j++)
	{
		std::cout << std::setw(10);
		std::cout << j + 1;
		for (int i = 0; i < 3; i++)
		{
			if (i == 2)
				i = 3;
			std::cout << '|';
			std::cout << std::setw(10);
			if (contact[j].info[i].size() >= 10)
			{
				std::string tronc = contact[j].info[i].substr(0, 9);
				tronc.append(".");
				std::cout << std::setw(10);
				std::cout << tronc;
			}
			else
				std::cout << contact[j].info[i];
		}
		std::cout << std::endl;
	}
	std::cout << "Please enter a contact's index to see contact's details" << std::endl;
	std::cin >> nb;
	if (std::cin.fail())
	{
        std::cin.clear();
        std::cin.ignore();
		std::cout << "Wrong index..." << std::endl;
    }
	else
	{
		if (nb > 0 && nb <= n)
			contact[nb - 1].print();
		else
			std::cout << "Wrong index..." << std::endl;
	}
}

int main()
{
	std::string cmd;
	int i = 0;
	Contact contact[8];

	while (cmd != "EXIT")
	{
		cmd = "null";
		while (cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
		{
			std::cout << "please enter your command" << std::endl;
			std::cin >> cmd;
		}
		if (cmd == "ADD")
		{
			if (i >= 8 )
				std::cout << "Your phonebook is full..." << std::endl;
			else
				contact[i++].fill();
		}
		else if (cmd == "SEARCH")
		{
			if (i == 0)
				std::cout << "No contact in your phonebook..." << std::endl;
			else
				ft_search(i, contact);
		}
	}
	return (0);
}
