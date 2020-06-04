#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <limits>
#include <cmath>

bool	ft_is_float(double d)
{
	if (d - (int)d == 0)
		return (false);
	return (true);
}

void	ft_char_conv(char c)
{
	std::cout << "char : '";
	std::cout << static_cast<char>(c) << "\'" <<  std::endl;
	std::cout << "int : ";
	std::cout << static_cast<int>(c) << std::endl;
	std::cout << "float : ";
	std::cout << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double : ";
	std::cout << static_cast<double>(c) << ".0"<< std::endl;
}

void	ft_double_conv(double d)
{
	if (ft_is_float(d))
		std::cout << "char : impossible" << std::endl;
	else if (!ft_is_float(d) && (d < 32 || d > 126))
	{
		std::cout << "char : Non displayable" << std::endl;
	}
	else
	{
		std::cout << "char : '";
		std::cout << static_cast<char>(d) << "\'" <<  std::endl;
	}
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min() ||
		std::isnan(d) || !std::isfinite(d))
		std::cout << "int : impossible" << std::endl;
	else
	{
		std::cout << "int : ";
		std::cout << static_cast<int>(d) << std::endl;
	}
	if (ft_is_float(d))
	{
		std::cout << "float : ";
		std::cout <<  static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : ";
		std::cout <<  static_cast<double>(d) << std::endl;
	}
	else
	{
		std::cout << "float : ";
		std::cout <<  static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double : ";
		std::cout <<  static_cast<double>(d) << ".0" << std::endl;
	}

}

int main(int argc, char **argv)
{
	char c;
	double d;

	if (argc != 2)
		return (0);

	if (sscanf(argv[1], "%lf", &d) == 1)
		ft_double_conv(d);
	else if (sscanf(argv[1], "%c", &c) == 1)
		ft_char_conv(c);

	return (0);
}
