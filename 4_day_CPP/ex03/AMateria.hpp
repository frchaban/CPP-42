#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria;
class ICharacter;

class AMateria
{
	private:
		std::string _Type;
		unsigned int _Xp;

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &other);
		AMateria& operator=(AMateria const &other);
		virtual ~AMateria();

		std::string const & getType();
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
