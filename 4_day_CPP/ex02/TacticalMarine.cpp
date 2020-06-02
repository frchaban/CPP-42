#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	*this = other;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *copy;
	copy = new TacticalMarine(*this);
	return (copy);
}


TacticalMarine& TacticalMarine::operator=(TacticalMarine const & other)
{
	if (this != &other)
		return(*this);
	return(*this);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
