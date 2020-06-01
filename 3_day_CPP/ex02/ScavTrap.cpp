#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_Max_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_Max_EnergyPoints = 50;
	this->_Level = 1;
	this->_Melee_Attack_Dmg = 20;
	this->_Ranged_Attack_Dmg = 15;
	this->_Armor_Dmg_Reduction = 3;
	std::cout << "A SCAV-TP named " << this-> _Name << " watches over the evil lair" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP named " << this-> _Name << " has just been desintegrated" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	this->_EnergyPoints -= 25;
	if (this->_EnergyPoints < 0)
	{
		std::cout << "SCAV-TP " << this->_Name;
		std::cout << " has not enough energy points challenge " << target << std::endl;
		return ;
	}

	std::string challenge[5] = {"Judas Cradle", "Swedish Drink", "Tickle Torture", "Pear of Anguish" ,"White Torture"};
	std::cout << "SCAV-TP " << this->_Name;
	std::cout << " challenges " << target;
	std::cout << " with the following challenge : " << challenge[rand() % 5];
	std::cout << " !!!" << std::endl;
	std::cout << "SCAV-TP " << this->_Name;
	std::cout << " now has " << this->_EnergyPoints << " energy points left..." << std::endl;

}
