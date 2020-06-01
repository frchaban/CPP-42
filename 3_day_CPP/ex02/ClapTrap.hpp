#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public :
		ClapTrap(std::string name);
		~ClapTrap();

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected :
		int _HitPoints;
		int _Max_HitPoints;
		int _EnergyPoints;
		int _Max_EnergyPoints;
		int _Level;
		std::string _Name;
		int _Melee_Attack_Dmg;
		int _Ranged_Attack_Dmg;
		unsigned int _Armor_Dmg_Reduction;
};

#endif
