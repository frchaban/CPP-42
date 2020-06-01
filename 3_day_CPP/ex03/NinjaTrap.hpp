#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public :
		NinjaTrap(std::string name);
		~NinjaTrap();
		void 		ninjaShoebox(NinjaTrap const &target);
		void 		ninjaShoebox(FragTrap const &target);
		void 		ninjaShoebox(ScavTrap const &target);
};

std::ostream& operator<<(std::ostream& out, const ClapTrap &target);

#endif
