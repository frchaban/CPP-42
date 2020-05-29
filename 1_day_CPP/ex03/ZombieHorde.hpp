#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde{
	public:
		ZombieHorde(int number, std::string horde_type = "no type");
		~ZombieHorde();

		void announce();
	private:
		int n;
		std::string type;
		Zombie *horde;
};

#endif
