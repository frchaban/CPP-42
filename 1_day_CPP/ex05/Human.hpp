#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Human
{
	public :
		Human();
		~Human();

		Brain &getBrain();
		std::string identifier();
	private :
		Brain *brain;
};


#endif
