#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name, 60 ,60 ,120 ,120 ,1 ,60 ,5 ,0)
{
	std::cout << "A NinjaTrap named " << this-> _Name << " has just spawned" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "A NinjaTrap named " << this-> _Name << " has just been destroyed" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << this->_Name;
	std::cout << " attacks Ninjatrap" << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << this->_Name;
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

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at range, dealing " << this->_Ranged_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}
