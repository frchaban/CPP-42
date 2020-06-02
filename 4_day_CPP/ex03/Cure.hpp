#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
