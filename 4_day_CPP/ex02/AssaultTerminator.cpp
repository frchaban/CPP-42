#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<  "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
	*this = other;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & other)
{
	if (this != &other)
		return(*this);
	return(*this);
}

AssaultTerminator* AssaultTerminator::clone() const
{
	AssaultTerminator *copy;
	copy = new AssaultTerminator(*this);
	return (copy);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}
void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}
