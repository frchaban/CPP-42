#include "HumanB.hpp"

HumanB::HumanB(std::string NewName):_name(NewName){}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &NewWeapon)
{
	_weapon = &NewWeapon;
}
