#include <iostream>
#include <string>

int main()
{
	std::string *pointer = new std::string("HI THIS IS BRAIN");
    std::string &ref = *pointer;
    std::cout << *pointer << '\n';
    std::cout << ref << '\n';
    delete pointer;
	return (0);
}
