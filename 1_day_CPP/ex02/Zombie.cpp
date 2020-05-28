#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type):name(name), type(type)
{
	std::cout << "<" << name << " (" << type << ")> spawns ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << name << " (" << type << ")> dies ..." << std::endl;
}

void Zombie::advert()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

