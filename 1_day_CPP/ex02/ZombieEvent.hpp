#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent{
	public:
		ZombieEvent(std::string type = "no type");
		~ZombieEvent() {};

		void setZombieType(std::string new_type);
		Zombie * newZombie (std::string name);
		Zombie * randomChump();
	private:
		std::string type;
};

#endif
