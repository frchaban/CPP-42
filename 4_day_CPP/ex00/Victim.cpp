#include "Victim.hpp"

Victim::Victim(std::string name): _Name(name)
{
	std::cout << "A random victim called " << _Name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "The victim " << _Name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(Victim const &other): _Name(other._Name)
{
	std::cout << "A random victim called " << _Name << " just appeared!" << std::endl;
}

Victim& Victim::operator=(Victim const &other)
{
	if (this != &other)
		this->_Name = other._Name;
	return (*this);
}

std::string Victim::get_name(void) const
{
	return (this->_Name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << _Name << " was just polymorphed into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, Victim const &victim)
{
	out << "I'm " + victim.get_name() +  " and I like otters!" << std::endl;
	return (out);
}
