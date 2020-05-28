#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony{
	public :
		Pony(std::string size, std::string color);
		~Pony();
		void birth();
		void jump();
	private :
		std::string size;
		std::string color;
};

void ponyOnTheStack(std::string size, std::string color);
void ponyOnTheHeap(std::string size, std::string color);

#endif
