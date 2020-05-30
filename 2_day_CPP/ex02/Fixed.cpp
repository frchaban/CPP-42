#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_FixedPointValue = 0;
	//std::cout << "Default constructor called"<< std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called"<< std::endl;
}

Fixed::Fixed(int i)
{
	this->_FixedPointValue = i << this->_bits;
	//std::cout << "Int constructor called"<< std::endl;
}

Fixed::Fixed(float f)
{
	this->_FixedPointValue = roundf(f * (1 << this->_bits));
	//std::cout << "Float constructor called"<< std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	//std::cout << "Assignation operator called" << std::endl;

	if (this != &other)
		this->_FixedPointValue = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_FixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_FixedPointValue = raw;
	//std::cout << "setRawBits member function called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

int Fixed::toInt(void) const
{
	return((int)(this->_FixedPointValue >> this->_bits));
}

float Fixed::toFloat(void) const
{
	return((float)(this->_FixedPointValue) / ( 1 << this->_bits));
}

bool Fixed::operator>(const Fixed& cmp) const
{
	return ( this->_FixedPointValue > cmp._FixedPointValue);
}

bool Fixed::operator<(const Fixed& cmp) const
{
	return (this->_FixedPointValue < cmp._FixedPointValue);
}

bool Fixed::operator>=(const Fixed& cmp) const
{
	return (this->_FixedPointValue < cmp._FixedPointValue);
}

bool Fixed::operator<=(const Fixed& cmp) const
{
	return (this->_FixedPointValue < cmp._FixedPointValue);
}

bool Fixed::operator==(const Fixed& cmp) const
{
	return (this->_FixedPointValue == cmp._FixedPointValue);
}

bool Fixed::operator!=(const Fixed& cmp) const
{
	return (this->_FixedPointValue != cmp._FixedPointValue);
}

Fixed Fixed::operator+(const Fixed& cmp) const
{
	Fixed tmp;
	tmp = this->toFloat() + cmp.toFloat();
	return (tmp);
}

Fixed Fixed::operator-(const Fixed& cmp) const
{
	Fixed tmp;
	tmp = this->toFloat() - cmp.toFloat();
	return (tmp);
}

Fixed Fixed::operator*(const Fixed& cmp) const
{
	Fixed tmp;
	tmp = this->toFloat() * cmp.toFloat();
	return (tmp);
}

Fixed Fixed::operator/(const Fixed& cmp) const
{
	Fixed tmp;
	tmp = this->toFloat() / cmp.toFloat();
	return (tmp);
}

Fixed &Fixed::operator++()
{
	this->_FixedPointValue += 1;
    return (*this);
}

Fixed &Fixed::operator--()
{
	this->_FixedPointValue -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed &Fixed::min(Fixed& fixed_1, Fixed& fixed_2)
{
	return (fixed_1 < fixed_2 ? fixed_1 : fixed_2);
}

Fixed &Fixed::max(Fixed& fixed_1, Fixed& fixed_2)
{
	return (fixed_1 > fixed_2 ? fixed_1 : fixed_2);
}

const Fixed &Fixed::min(const Fixed& fixed_1, const Fixed& fixed_2)
{
	return (fixed_1 < fixed_2 ? fixed_1 : fixed_2);
}

const Fixed &Fixed::max(const Fixed& fixed_1, const Fixed& fixed_2)
{
	return (fixed_1 > fixed_2 ? fixed_1 : fixed_2);
}
