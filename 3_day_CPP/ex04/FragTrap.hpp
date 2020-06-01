#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public :
		FragTrap(std::string name);
		~FragTrap();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void vaulthunter_dot_exe(std::string const & target);
};


#endif
