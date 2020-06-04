#include "Array.hpp"

int main(void)
{
	std::cout << std::endl << "BASIC TEST WITH CHAR" << std::endl << std::endl;
	Array<char> my_array(5);

	my_array[0] = 's';
	my_array[1] = 'a';
	my_array[2] = 'l';
	my_array[3] = 'u';
	my_array[4] = 't';
	for(int i = 0; i < my_array.size();i++)
		std::cout << my_array[i] << std::endl;

	Array<int> int_array_1(3);
	Array<int> int_array_2(3);

	int_array_1[0] = 1;
	int_array_1[1] = 2;
	int_array_1[2] = 3;

	std::cout << std::endl << "TEST OPERATOR = (with new array of type int)" << std::endl << std::endl;
	int_array_2 = int_array_1;

	for(int i = 0; i < int_array_2.size();i++)
		std::cout << int_array_2[i] << std::endl;

	std::cout << std::endl << "TEST of COPY CONSTRUCTOR (with new array of type int)" << std::endl << std::endl;
	Array<int> int_array_3(int_array_2);
	for(int i = 0; i < int_array_2.size();i++)
		std::cout << int_array_3[i] << std::endl;

	std::cout << std::endl << "TEST of OUT OF BOUND" << std::endl << std::endl;
	try {
		std::cout << int_array_3[5] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST of EMPTY CHAR ARRAY" << std::endl << std::endl;
	Array<char> empty_array;
	for(int i = 0; i < empty_array.size();i++)
		std::cout << empty_array[i] << std::endl;
	std::cout << "its size is " << empty_array.size() << std::endl;

	std::cout << std::endl << "TEST of EMPTY INT ARRAY" << std::endl << std::endl;
	Array<char> empty_int;
	for(int i = 0; i < empty_int.size();i++)
		std::cout << empty_int[i] << std::endl;
	std::cout << "its size is " << empty_int.size() << std::endl;

	return (0);
}
