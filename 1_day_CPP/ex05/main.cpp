#include "Human.hpp"
#include <iostream>
#include <string>


int main()
{
	Human bob;
	std::cout << bob.identifier() << std::endl;
	std::cout << bob.getBrain().identifier() << std::endl;
}
