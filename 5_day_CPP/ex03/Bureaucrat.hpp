#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Bureaucrat;
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat& operator=(Bureaucrat const &other);
		~Bureaucrat();

		std::string getName(void) const;
		unsigned int getGrade(void) const;

		void incGrade(void);
		void decGrade(void);
		void signForm(Form &form);
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException() throw() {}
				virtual ~GradeTooHighException() throw() {}
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException() throw() {}
				virtual ~GradeTooLowException() throw() {}
				virtual const char* what() const throw();
		};

	private:
		const std::string _Name;
		unsigned int _Grade;
};

std::ostream& operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif
