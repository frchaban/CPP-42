# include "ZombieEvent.hpp"
# include "Zombie.hpp"

int main()
{
	srand(time(0));
	ZombieEvent	event("creepers");
	Zombie *creepers[3];

	for (int i = 0; i < 3; i++)
	{
		creepers[i] = event.randomChump();
	}
	for (int i = 0; i < 3; i++)
	{
		delete creepers[i];
	}

	Zombie OnStack("Zombie", "on stack");
	OnStack.advert();

	ZombieEvent	event_notype;
	Zombie *notype[3];

	for (int i = 0; i < 3; i++)
	{
		notype[i] = event_notype.randomChump();
	}
	for (int i = 0; i < 3; i++)
	{
		delete notype[i];
	}

	ZombieEvent alone;
	alone.setZombieType("loner");
	delete  alone.newZombie("New Zombie");
}
