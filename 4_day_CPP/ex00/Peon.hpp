#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include <string>
# include <iostream>

class Peon : public Victim
{
	public :

		Peon(std::string);
		~Peon();
		virtual void getPolymorphed(void) const;
};

#endif
