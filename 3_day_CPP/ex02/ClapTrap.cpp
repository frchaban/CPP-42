#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _Name(name)
{
	std::cout << "A new ClapTrap named " << this-> _Name << " has just spawned" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << this-> _Name << " has just been destroyed" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "Claptrap " << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at range, dealing " << this->_Ranged_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "Claptrap " << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= (amount > this->_Armor_Dmg_Reduction ? amount - this->_Armor_Dmg_Reduction : 0);
	if (this->_HitPoints < 0)
		this->_HitPoints = 0;

	std::cout << "Claptrap " << this->_Name;
	std::cout << " takes " << amount;
	std::cout << " damage points ! His hit points drop to " << this->_HitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_HitPoints += amount;
	if (this->_HitPoints > this->_Max_HitPoints)
		this->_HitPoints = this->_Max_HitPoints;
	std::cout << "Claptrap " << this->_Name;
	std::cout << " has just been repaired of " << amount;
	std::cout << " hit points ! His hit points get back to " << this->_HitPoints << std::endl;
}
