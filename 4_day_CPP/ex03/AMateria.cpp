#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _Type(type), _Xp(0)
{

}

AMateria::AMateria(AMateria const &other)
{
	this->_Type = other._Type;
	this->_Xp = other._Xp;

}
AMateria& AMateria::operator=(AMateria const &other)
{
	if (this != &other)
	{
		this->_Xp = other._Xp;
	}
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType()
{
	return(this->_Type);
}

unsigned int AMateria::getXP() const
{
	return(this->_Xp);
}

void AMateria::use(ICharacter& target)
{
	this->_Xp += 10;
	(void)target;
}
