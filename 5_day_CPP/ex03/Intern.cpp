#include "Intern.hpp"

Intern::Intern()
{
	this->_CreateFormsFuctions[0] = &Intern::createShrubb;
	this->_CreateFormsFuctions[1] = &Intern::createRobot;
	this->_CreateFormsFuctions[2] = &Intern::createPardon;
	this->_Forms[0] = "shrubbery creation";
	this->_Forms[1] = "robotomy request";
	this->_Forms[2] = "presidential pardon";
}

Form* Intern::createShrubb(std::string const &target)
{
	return(new ShrubberyCreationForm(target));
}

Form* Intern::createRobot(std::string const &target)
{
	return(new RobotomyRequestForm(target));
}

Form* Intern::createPardon(std::string const &target)
{
	return(new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string const & form_name, std::string const & form_target)
{
	for (int i = 0; i < 3; i++)
	{
		if (form_name == this->_Forms[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return ((this->*_CreateFormsFuctions[i])(form_target));
		}
	}
	std::cout << "This form does not exist, the intern can't create it." << std::endl;
	return (NULL);
}
