#include "Pony.hpp"

void ponyOnTheStack(std::string size, std::string color)
{
	Pony pony(size, color);

	pony.birth();
	pony.jump();
}


void ponyOnTheHeap(std::string size, std::string color)
{
	Pony *pony = new Pony(size, color);

	pony->birth();
	pony->jump();
	delete pony;
}

int main(void)
{
	ponyOnTheHeap("Big", "Black");
	ponyOnTheStack("Small", "White");
	return (0);
}
