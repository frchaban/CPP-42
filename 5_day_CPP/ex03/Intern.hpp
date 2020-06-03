#ifndef INTERN_HPP
# define INTERN_HPP


# include <string>
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(Intern const &other) {*this = other;}
		Intern& operator=(Intern const &other){ if (this == &other) return (*this); return(*this);}
		~Intern(){}

		Form* makeForm(std::string const &form_name, std::string const &form_target);
		typedef Form* (Intern::*CreateList)(std::string const &);

	private :
		Form* createShrubb(std::string const &target);
		Form* createRobot(std::string const &target);
		Form* createPardon(std::string const &target);

		std::string _Forms[3];
		CreateList	_CreateFormsFuctions[3];
};

#endif
