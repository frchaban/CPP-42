#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _Name(name), _AP_cost(apcost), _Damage(damage)
{

}

AWeapon::AWeapon(AWeapon const &other): _Name(other._Name), _AP_cost(other._AP_cost), _Damage(other._Damage)
{

}

AWeapon& AWeapon::operator=(AWeapon const &other)
{
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_AP_cost = other._AP_cost;
		this->_Damage = other._Damage;
	}
	return (*this);
}

AWeapon::~AWeapon()
{
	delete(this);
}

std::string AWeapon::getName() const
{
	return(this->_Name);
}

int AWeapon::getAPCost() const
{
	return(this->_AP_cost);
}

int AWeapon::getDamage() const
{
	return(this->_Damage);
}

