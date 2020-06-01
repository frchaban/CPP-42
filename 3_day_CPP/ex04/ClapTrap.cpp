#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _Name(name)
{
	std::cout << "A new ClapTrap named " << this-> _Name << " has just spawned" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int max_hp, int energy ,int max_energy ,int level ,int melee ,int range,unsigned int armor) :
_Name(name), _HitPoints(hp), _Max_HitPoints(max_hp), _EnergyPoints(energy), _Max_EnergyPoints(max_energy),
_Level(level), _Melee_Attack_Dmg(melee), _Ranged_Attack_Dmg(range), _Armor_Dmg_Reduction(armor)
{
	std::cout << "A new ClapTrap named " << this-> _Name << " has just spawned" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << this-> _Name << " has just been destroyed" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= (amount > this->_Armor_Dmg_Reduction ? amount - this->_Armor_Dmg_Reduction : 0);
	if (this->_HitPoints < 0)
		this->_HitPoints = 0;

	std::cout <<  this->_Name;
	std::cout << " takes " << amount;
	std::cout << " damage points ! His hit points drop to " << this->_HitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_HitPoints += amount;
	if (this->_HitPoints > this->_Max_HitPoints)
		this->_HitPoints = this->_Max_HitPoints;
	std::cout << this->_Name;
	std::cout << " has just been repaired of " << amount;
	std::cout << " hit points ! His hit points get back to " << this->_HitPoints << std::endl;
}

std::string ClapTrap::getname() const
{
	return(this->_Name);
}

std::ostream& operator<<(std::ostream& out, const ClapTrap &target)
{
	out << target.getname();
	return (out);
}
