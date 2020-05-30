#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed &operator=(const Fixed&);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private :
		int _FixedPointValue;
		static const int _bits = 8;
};


#endif
