#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type):type(type){}

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

void	ZombieEvent::setZombieType(std::string new_type)
{
	type = new_type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, type);
	return (zombie);
}

Zombie* ZombieEvent::randomChump()
{
	Zombie *zombie = new Zombie(randomName(), type);
	zombie->advert();
	return (zombie);
}
