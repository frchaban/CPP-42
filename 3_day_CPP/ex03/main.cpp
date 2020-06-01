#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


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


	ScavTrap new_scavtrap("Minion");

	std::cout << std::endl;
	new_scavtrap.meleeAttack("NewComer 1");
	std::cout << std::endl;
	new_scavtrap.rangedAttack("NewComer 2");
	std::cout << std::endl;
	new_scavtrap.takeDamage(50);
	std::cout << std::endl;
	new_scavtrap.takeDamage(150);
	std::cout << std::endl;
	new_scavtrap.beRepaired(50);
	std::cout << std::endl;
	new_scavtrap.challengeNewcomer("NewComer 1");
	std::cout << std::endl;
	new_scavtrap.challengeNewcomer("NewComer 2");
	std::cout << std::endl;

	NinjaTrap ninja("Invisible Man");

	std::cout << std::endl;
	ninja.meleeAttack("NewComer 1");
	std::cout << std::endl;
	ninja.rangedAttack("NewComer 2");
	std::cout << std::endl;
	ninja.takeDamage(50);
	std::cout << std::endl;
	ninja.takeDamage(150);
	std::cout << std::endl;
	ninja.beRepaired(50);
	std::cout << std::endl;
	ninja.ninjaShoebox(new_frag);
	std::cout << std::endl;
	ninja.ninjaShoebox(ninja);
	std::cout << std::endl;
	ninja.ninjaShoebox(new_scavtrap);
	std::cout << std::endl;

}
