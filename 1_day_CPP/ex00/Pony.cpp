# include "Pony.hpp"

Pony::Pony(std::string size, std::string color):size(size), color(color){}

Pony::~Pony()
{
	std::cout << "The " << size << " " << color << " pony has been butchered." << '\n';
}

void Pony::jump()
{
	std::cout << "The " << size << " " << color << " pony jumps." << '\n';
}

void Pony::birth()
{
	std::cout << "A " << size << " " << color << " pony is born." << '\n';
}
