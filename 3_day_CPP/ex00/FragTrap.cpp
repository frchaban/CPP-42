#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): _HitPoints(100), _Max_HitPoints(100), _EnergyPoints(100), _Max_EnergyPoints(100),
 _Level(1), _Name(name), _Melee_Attack_Dmg(30), _Ranged_Attack_Dmg(20), _Armor_Dmg_Reduction(5)
{
	this->_Level = 1;
	this->_Max_EnergyPoints = 100;
	this->_EnergyPoints = 100;
	std::cout << "A FR4G-TP named " << this-> _Name << " has just spawned" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "A FR4G-TP named " << this-> _Name << " has just been destroyed" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at range, dealing " << this->_Ranged_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_Name;
	std::cout << " attacks " << target;
	std::cout << " at melee, dealing " << this->_Melee_Attack_Dmg;
	std::cout << " damage points !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->_HitPoints -= (amount > this->_Armor_Dmg_Reduction ? amount - this->_Armor_Dmg_Reduction : 0);
	if (this->_HitPoints < 0)
		this->_HitPoints = 0;

	std::cout << "FR4G-TP " << this->_Name;
	std::cout << " takes " << amount;
	std::cout << " damage points ! His hit points drop to " << this->_HitPoints << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->_HitPoints += amount;
	if (this->_HitPoints > this->_Max_HitPoints)
		this->_HitPoints = this->_Max_HitPoints;
	std::cout << "FR4G-TP " << this->_Name;
	std::cout << " has just been repaired of " << amount;
	std::cout << " hit points ! His hit points get back to " << this->_HitPoints << std::endl;
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
