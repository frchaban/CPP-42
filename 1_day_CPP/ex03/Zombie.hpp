#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void announce();
	private:
		std::string name;
		std::string type;

};

#endif
