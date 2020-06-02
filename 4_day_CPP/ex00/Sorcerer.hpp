#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(Sorcerer const &other);
		Sorcerer& operator=(Sorcerer const &other);

		std::string get_name(void) const;
		std::string get_title(void) const;

		void polymorph(Victim const &) const;

	private:
		std::string _Name;
		std::string _Title;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);


#endif
