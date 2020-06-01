#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "A Supertrap named " << this-> _Name << " has just spawned" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "A Supertrap named " << this-> _Name << " has just been destroyed" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	return(FragTrap::rangedAttack(target));
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	return(NinjaTrap::meleeAttack(target));
}
