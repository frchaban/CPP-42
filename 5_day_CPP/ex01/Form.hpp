#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form
{
	public:
		Form(std::string const &name, unsigned int const signed_grade, unsigned int const exec);
		Form(Form const &other);
		Form& operator=(Form const &other);
		~Form();

		std::string getName() const;
		bool		getSignedStatus() const;
		unsigned int getSignedGrade() const;
		unsigned int getExecGrade() const;

		void beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException() throw() {}
				virtual ~GradeTooHighException() throw() {}
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException() throw() {}
				virtual ~GradeTooLowException() throw() {}
				virtual const char* what() const throw();
		};

	private:
		std::string const _Name;
		bool		 _Signed;
		unsigned int const _Signed_Grade;
		unsigned int const _Exec_Grade;
};

std::ostream& operator<<(std::ostream &out, Form &form);

#endif
