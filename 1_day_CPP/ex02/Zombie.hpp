#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{
	public:
		Zombie(std::string name, std::string type = "no type");
		~Zombie();
		void advert();
	private:
		std::string name;
		std::string type;

};

#endif
