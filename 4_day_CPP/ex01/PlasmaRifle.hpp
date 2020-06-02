#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle();
		~PlasmaRifle();
		void attack() const;

	private :
		std::string _Output;
};

#endif
