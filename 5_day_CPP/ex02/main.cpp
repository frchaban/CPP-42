
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat *secretary = new Bureaucrat("Secretary", 130);
	Bureaucrat *president = new Bureaucrat("Macron", 1);

	Form *shrub = new ShrubberyCreationForm("maison");
	Form *robot = new RobotomyRequestForm("Trump");
	Form *pres = new PresidentialPardonForm("Trump");

	std::cout << *president << std::endl;
	std::cout << *secretary << std::endl;
	std::cout << *shrub << std::endl;
	std::cout << *robot << std::endl;
	std::cout << *pres << std::endl;

	secretary->signForm(*pres);
	secretary->executeForm(*pres);
	std::cout << std::endl;

	secretary->signForm(*shrub);
	std::cout << std::endl;

	president->signForm(*pres);
	president->signForm(*robot);
	std::cout << std::endl;

	std::cout << *shrub << std::endl;
	std::cout << *robot << std::endl;
	std::cout << *pres << std::endl;

	president->executeForm(*robot);
	president->executeForm(*pres);
	secretary->executeForm(*shrub);

	delete secretary;
	delete president;
	delete shrub;
	delete pres;
	delete robot;
}
