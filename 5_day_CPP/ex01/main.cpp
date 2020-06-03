
# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
    Bureaucrat *secretary = new Bureaucrat("Secretary", 10);
	Form *conv = new Form("Convention de stage", 10, 1);

	std::cout << *secretary << std::endl;
	std::cout << *conv << std::endl;

	secretary->signForm(*conv);
	std::cout << std::endl;
	std::cout << *conv << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Form *fire = new Form("Form to fire the secretary", 2, 1);
	std::cout << *fire << std::endl;

	secretary->signForm(*fire);


}
