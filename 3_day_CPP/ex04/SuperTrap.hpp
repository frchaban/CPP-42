#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
	public :
		SuperTrap(std::string name);
		~SuperTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);

};

#endif
