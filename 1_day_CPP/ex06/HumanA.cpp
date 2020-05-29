#include "HumanA.hpp"

HumanA::HumanA(std::string NewName, Weapon &NewWeapon):_name(NewName),_weapon(&NewWeapon){}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
