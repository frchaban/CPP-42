#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "PowerFist.hpp"
# include "PlasmaRifle.hpp"

class Enemy
{
	public :
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &other);
		Enemy& operator=(Enemy const &other);
		virtual ~Enemy();
		std::string virtual getType() const;
		int getHP() const;
        virtual void takeDamage(int);

	private :
		int _HP;
		std::string _Type;
};

#endif
