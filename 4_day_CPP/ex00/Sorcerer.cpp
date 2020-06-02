#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _Name(name), _Title(title)
{
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other): _Name(other._Name), _Title(other._Title)
{
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &other)
{
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_Title = other._Title;
	}
	return(*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << _Name << ", " << _Title << ", is dead. Consequences will never be the same!" << std::endl ;
}

std::string Sorcerer::get_name(void) const
{
	return(this->_Name);
}

std::string Sorcerer::get_title(void) const
{
	return(this->_Title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " + sorcerer.get_name() + ", " + sorcerer.get_title() + ", and I like ponies!" << std::endl;
	return (out);
}
