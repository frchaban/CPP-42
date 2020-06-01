#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _HitPoints(100), _Max_HitPoints(100), _EnergyPoints(50), _Max_EnergyPoints(50),
 _Level(1), _Name(name), _Melee_Attack_Dmg(20), _Ranged_Attack_Dmg(15), _Armor_Dmg_Reduction(3)
{
	this->_Level = 1;
	this->_Max_EnergyPoints = 50;
	this->_EnergyPoints = 50;
	std::cout << "A SCAV-TP named " << this-> _Name << " watches over the evil lair" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP named " << this-> _Name << " has just been desintegrated" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SCAV-TP " << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at range, dealing " << this->_Ranged_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SCAV-TP " << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= (amount > this->_Armor_Dmg_Reduction ? amount - this->_Armor_Dmg_Reduction : 0);
	if (this->_HitPoints < 0)
		this->_HitPoints = 0;

	std::cout << "SCAV-TP " << this->_Name;
	std::cout << " takes " << amount;
	std::cout << " damage points ! His hit points drop to " << this->_HitPoints << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->_HitPoints += amount;
	if (this->_HitPoints > this->_Max_HitPoints)
		this->_HitPoints = this->_Max_HitPoints;
	std::cout << "SCAV-TP " << this->_Name;
	std::cout << " has just been repaired of " << amount;
	std::cout << " hit points ! His hit points get back to " << this->_HitPoints << std::endl;
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
