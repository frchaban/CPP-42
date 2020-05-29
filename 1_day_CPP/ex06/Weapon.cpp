#include "Weapon.hpp"

Weapon::Weapon(std::string NewType):_type(NewType){}

std::string const &Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}
