#include <iostream>
#include <string>

std::string ft_toupper(std::string str)
{
	for(int i  = 0; i < (int)str.length(); i++)
		{
			if (str[i] <= 122 && str[i] >= 97)
				str[i] -= 32 ;
		}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		for(int i  = 1; i < argc; i++)
		{
			std::cout << ft_toupper(argv[i]);
		}
		std::cout << std::endl;
	return (0);
}
