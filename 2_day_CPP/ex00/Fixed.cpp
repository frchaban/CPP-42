#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_FixedPointValue = 0;
	std::cout << "Default constructor called"<< std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;

	if (this != &other)
		this->_FixedPointValue = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_FixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_FixedPointValue = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
