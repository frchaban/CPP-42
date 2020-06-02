#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{

}
Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
	AMateria *clone;
	clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "*shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
