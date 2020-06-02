#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public :
		PowerFist();
		~PowerFist();
		void attack() const;

	private :
		std::string _Output;
};

#endif
