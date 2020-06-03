
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern intern;
	Form *form_created;
	Bureaucrat* president = new Bureaucrat("Macron", 1);

	form_created = intern.makeForm("robotomy request", "Trump");
	president->signForm(*form_created);
	president->executeForm(*form_created);
	delete form_created;
	delete president;
}
