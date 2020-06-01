#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 100, 100, 1, 30 ,20 ,5)
{
	std::cout << "A FR4G-TP named " << this-> _Name << " has just spawned" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "A FR4G-TP named " << this-> _Name << " has just been destroyed" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at range, dealing " << this->_Ranged_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	this->_EnergyPoints -= 25;
	if (this->_EnergyPoints < 0)
	{
		std::cout << "FR4G-TP " << this->_Name;
		std::cout << " has not enough energy points to lauch a special attack on " << target << std::endl;
		return ;
	}

	std::string special_attacks[5] = {"Thunder Shock", "Electro Ball", "Rain Dance", "Mega Punch" ,"Quick Attack"};
	std::cout << "FR4G-TP " << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " with the special attack " << special_attacks[rand() % 5];
	std::cout << " !!!" << std::endl;
	std::cout << "FR4G-TP " << this->_Name;
	std::cout << " now has " << this->_EnergyPoints << " energy points left..." << std::endl;

}
