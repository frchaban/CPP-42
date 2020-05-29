#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
	public :
		HumanB(std::string NewName);
		~HumanB(){};
		void attack();
		void setWeapon(Weapon &NewWeapon);

	private :
		std::string _name;
		Weapon *_weapon;
};

#endif
