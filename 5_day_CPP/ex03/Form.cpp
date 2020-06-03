#include "Form.hpp"

Form::Form(std::string const &name, unsigned int const signed_grade, unsigned int const exec, std::string target):
_Name(name), _Signed(false), _Signed_Grade(signed_grade), _Exec_Grade(exec), _Target(target)
{
	if (this->_Exec_Grade < 1 || this->_Signed_Grade < 1)
		throw Form::GradeTooHighException();
	else if (this->_Exec_Grade > 150 || this->_Signed_Grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other):
_Name(other._Name), _Signed(other._Signed), _Signed_Grade(other._Signed_Grade), _Exec_Grade(other._Exec_Grade), _Target(other._Target)
{
	*this = other;
}

Form& Form::operator=(Form const &other)
{
	if (this == &other)
		return (*this);
	this->_Signed = other._Signed;
	this->_Target = other._Target;
	return(*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return(this->_Name);
}
bool		Form::getSignedStatus() const
{
	return(this->_Signed);
}
unsigned int Form::getSignedGrade() const
{
	return(this->_Signed_Grade);
}
unsigned int Form::getExecGrade() const
{
	return(this->_Exec_Grade);
}
std::string Form::getTarget() const
{
	return(this->_Target);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > this->_Signed_Grade)
		throw Form::GradeTooLowException();
	this->_Signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade is too low.");
}

const char* Form::NotSignedException::what() const throw()
{
	return("form is not signed.");
}

std::ostream& operator<<(std::ostream &out, Form &form)
{
	out << "Form name is " << form.getName();

	if (form.getSignedStatus() == true)
		out << ", it is signed, its required signing grade is ";
	else
		out << ", it is not signed, its required signing grade is ";

	out << form.getSignedGrade() << ", and its required executing grade is ";
	out <<	form.getExecGrade() << "." << std::endl;
	return (out);
}

