#include <string>
#include <iostream>

template <typename T>
void iter(T *array ,size_t size, void (*fct)(T &))
{
	for (int i = 0; i < (int)size; i++)
	{
		fct(array[i]);
	}
}

template <typename T>
void to_upper( T &c)
{
	c -= 32;
}

template <typename T>
void to_lower( T &c)
{
	c += 32;
}

template <typename T>
void square( T &c)
{
	c *= c;
}

template <typename T>
void print_tab( T &c)
{
	std::cout << c << std::endl;
}

int main(void)
{
	char test[] = "abcdefg";
	std::cout << "BEFORE ITER :" << test << std::endl;
	iter<char>(test,7,to_upper);
	std::cout << "AFTER ITER (with to_upper):" << test << std::endl;

	char test2[] = "HIJKLMNO";
	std::cout << "BEFORE ITER :" << test2 << std::endl;
	iter<char>(test2,8,to_lower);
	std::cout << "AFTER ITER (with to_lower):" << test2 << std::endl;

	int test3[] = {1, 2, 3 ,4 ,5};
	std::cout << "BEFORE ITER :" << std::endl;
	iter<int>(test3,5,print_tab);
	iter<int>(test3,5,square);
	std::cout << "AFTER ITER (with square):" << std::endl;
	iter<int>(test3,5,print_tab);
	return (0);
}
