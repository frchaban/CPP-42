# include "Human.hpp"

Human::Human ()
{
	brain = new Brain;
}

Brain &Human::getBrain()
{
	return (*brain);
}


std::string Human::identifier()
{
	return(brain->identifier());
}

Human::~Human ()
{
	delete brain;
}
