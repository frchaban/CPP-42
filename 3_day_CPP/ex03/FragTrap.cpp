#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_Max_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_Max_EnergyPoints = 100;
	this->_Level = 1;
	this->_Melee_Attack_Dmg = 30;
	this->_Ranged_Attack_Dmg = 20;
	this->_Armor_Dmg_Reduction = 5;
	std::cout << "A FR4G-TP named " << this-> _Name << " has just spawned" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "A FR4G-TP named " << this-> _Name << " has just been destroyed" << std::endl;
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
