#include "Zombie.hpp"

std::string randomName2(void)
{
	std::string cons = "bcdfghjklmnpqrstvxz";
	std::string voy = "aeiouy";
	std::string name= "     ";

	name[0] = cons[rand() % 19] - 32;
	name[1] = voy[rand() % 6];
	name[2] = cons[rand() % 19];
	name[3] = voy[rand() % 6];
	name[4] = cons[rand() % 19];
	name[5] = '\0';
	return (name);
}

Zombie::Zombie()
{
	name = randomName2();
	type = randomName2();
	std::cout << "<" << name << " (" << type << ")> spawns ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << name << " (" << type << ")> dies ..." << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

