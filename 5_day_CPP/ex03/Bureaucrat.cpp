#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _Name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_Grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other):_Name(other._Name), _Grade(other._Grade)
{

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		(std::string)this->_Name = other.getName();
		this->_Grade = other._Grade;
	}
	return(*this);
}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName(void) const
{
	return(this->_Name);
}

unsigned int Bureaucrat::getGrade(void) const
{
	return(this->_Grade);
}

void Bureaucrat::incGrade(void)
{
	if (this->_Grade > 1)
		this->_Grade--;
}

void Bureaucrat::decGrade(void)
{
	if (this->_Grade < 150)
		this->_Grade++;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade is too low.");
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_Name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_Name << " can't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_Name << " has executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_Name << " can't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
