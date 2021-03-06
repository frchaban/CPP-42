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

		bool operator>(const Fixed&) const;
		bool operator<(const Fixed&) const;
		bool operator>=(const Fixed&) const;
		bool operator<=(const Fixed&) const;
		bool operator==(const Fixed&) const;
		bool operator!=(const Fixed&) const;

		Fixed operator+(const Fixed&) const;
		Fixed operator-(const Fixed&) const;
		Fixed operator*(const Fixed&) const;
		Fixed operator/(const Fixed&) const;

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed& fixed_1, Fixed& fixed_2);
		const static Fixed &min(const Fixed& fixed_1, const Fixed& fixed_2);

		static Fixed &max(Fixed& fixed_1, Fixed& fixed_2);
		const static Fixed &max(const Fixed& fixed_1, const Fixed& fixed_2);

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
