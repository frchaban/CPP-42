#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5, target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if(executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	if (this->getSignedStatus() == false)
	{
		throw Form::NotSignedException();
	}
	std::cout << this->getTarget() << " has been forgiven by Zafod Beeblebrox." << std::endl;

}
