#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->_HitPoints = 60;
	this->_Max_HitPoints = 60;
	this->_EnergyPoints = 120;
	this->_Max_EnergyPoints = 120;
	this->_Level = 1;
	this->_Melee_Attack_Dmg = 60;
	this->_Ranged_Attack_Dmg = 5;
	this->_Armor_Dmg_Reduction = 0;
	std::cout << "A NinjaTrap named " << this-> _Name << " has just spawned" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "A NinjaTrap named " << this-> _Name << " has just been destroyed" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << "NinjaTrap " << this->_Name;
	std::cout << " attacks Ninjatrap" << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << "NinjaTrap " << this->_Name;
	std::cout << " attacks FragTrap" << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << "NinjaTrap " << this->_Name;
	std::cout << " attacks ScavTrap"  << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

