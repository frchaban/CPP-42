#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public :
		Weapon(std::string NewType);
		~Weapon(){};
		void setType(std::string newType);
		std::string const &getType();
	private :
		std::string _type;
};

#endif
