#include "FragTrap.hpp"

int main()
{
	srand(time(0));

	FragTrap new_frag=FragTrap("Pikachu");

	std::cout << std::endl;
	new_frag.meleeAttack("Sacha");
	std::cout << std::endl;
	new_frag.rangedAttack("Sacha");
	std::cout << std::endl;
	new_frag.takeDamage(100);
	std::cout << std::endl;
	new_frag.takeDamage(2);
	std::cout << std::endl;
	new_frag.beRepaired(100);
	std::cout << std::endl;
	new_frag.vaulthunter_dot_exe("Sacha");
	std::cout << std::endl;
	new_frag.vaulthunter_dot_exe("Sacha");
	std::cout << std::endl;
	new_frag.vaulthunter_dot_exe("Sacha");
	std::cout << std::endl;
	new_frag.vaulthunter_dot_exe("Sacha");
	std::cout << std::endl;
	new_frag.vaulthunter_dot_exe("Sacha");
	std::cout << std::endl;
}
