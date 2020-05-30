#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();

		Fixed(const Fixed&);
		Fixed(const int i);
		Fixed(const float f);

		Fixed &operator=(const Fixed&);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;

	private :
		int _FixedPointValue;
		static const int _bits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


#endif
