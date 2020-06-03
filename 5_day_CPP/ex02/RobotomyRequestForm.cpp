#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", 72, 45, target)
{
	srand(time(NULL));
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if(executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	if (this->getSignedStatus() == false)
	{
		throw Form::NotSignedException();
	}
	std::cout << "Vvvvvvvrrrrr...vvvvrrr...VVVvvvrrrr...VvvVvvrr..." << std::endl;
	if((1 + (rand() % 5)) == 2)
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	else
		std::cout << "The robotization failed..." << std::endl;
}
