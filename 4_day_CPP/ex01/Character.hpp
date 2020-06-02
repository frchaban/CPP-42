#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const & name);
		Character(Character const &other);
		Character& operator=(Character const &other);
		~Character();

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		AWeapon* getWeapon() const;
		int getAP() const;


	private :
		std::string _Name;
		int	_AP;
		AWeapon	*_Weapon;
};

std::ostream& operator<<(std::ostream &out, Character const &character);

#endif
