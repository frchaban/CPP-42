#include <string>
#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

char	ft_random_alpha(void)
{
	char a;

	char alpha_num[] = "0123456789abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVXYZ";
	a = static_cast<char>(alpha_num[rand() % 61]);
	return (a);
}

void *serialize(void)
{
	Data *serie = new Data;
	for (int i = 0; i < 8; i ++)
    {
        serie->s1 += ft_random_alpha();
    }
    serie->n = rand();
    for (int i = 0; i < 8; i ++)
    {
        serie->s2 += ft_random_alpha();
    }
    return (serie);
}

Data * deserialize(void *raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main()
{
	srand(time(0));
	void           *serie = serialize();
	Data           *data = deserialize(serie);

	std::cout << "Address is : " << serie << std::endl;
	std::cout << "String s1 is : " << data->s1 << std::endl;
	std::cout << "Int n is : " << data->n << std::endl;
	std::cout << "String s2 is : " << data->s2 << std::endl;
	delete data;
	return (0);
}
