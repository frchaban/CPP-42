# include "ZombieHorde.hpp"
# include "Zombie.hpp"

int main()
{
	srand(time(0));
	ZombieHorde	horde(5);

	horde.announce();

	return(0);
}
