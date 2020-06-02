#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170 , "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	Enemy::takeDamage(dmg);
}
