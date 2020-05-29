#include "ZombieHorde.hpp"

std::string randomName(void)
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

ZombieHorde::ZombieHorde(int number, std::string horde_type)
{
	n = number;
	type = horde_type;

	horde = new Zombie[n];
}

void ZombieHorde::announce()
{
	for (int i =0; i < n; i++)
	{
		horde[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde;
	std::cout << "The Horde has been destroyed, good job Rick" << std::endl;
}
