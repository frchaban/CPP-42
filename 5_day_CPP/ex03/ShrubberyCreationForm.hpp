#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm() {}

		virtual void execute(Bureaucrat const &executor) const;
};


#endif
