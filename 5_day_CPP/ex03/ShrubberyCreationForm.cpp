#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", 145, 137, target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if(executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	if (this->getSignedStatus() == false)
	{
		throw Form::NotSignedException();
	}
	std::ofstream tree;
	tree.open(this->getTarget().append("_shrubbery"), std::ios::out | std::ios::in | std::ios::app);

	tree << "          .     .  .      +     .      .          ." << std::endl;
	tree << "     .       .      .     #       .           ." << std::endl;
	tree << "        .      .         ###            .      .      ." << std::endl;
	tree << "      .      .    #:. .:## ##:. .:#   .      ." << std::endl;
	tree << "          .      .  #### ### ####   ." << std::endl;
	tree << "       .      #:.    .:# ### #:.    .:#   .        .       ." << std::endl;
	tree << "  .              ######### #########         .        ." << std::endl;
	tree << "        .     #:.   #### ### ####   .:#    .       ." << std::endl;
	tree << "     .     .   #######  ## ##  #######                   ." << std::endl;
	tree << "                . ## ##### ##### ##            .      ." << std::endl;
	tree << "    .    #:. ...  .:## ### ### ##:.  ... .:#      ." << std::endl;
	tree << "      .      ####### ## ##### ## #######       .     ." << std::endl;
	tree << "    .    .      #####  #######  #####     .      ." << std::endl;
	tree << "            .            000           .     ." << std::endl;
	tree << "       .         .   .   000     .        .       ." << std::endl;
	tree << ".. .. ..................O000O........................ ...... ..." << std::endl;

	tree.close();
}
