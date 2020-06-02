#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_N_Source = 0;
	for (int i = 0; i < 4; i++)
		this->_Source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_Source[i] != NULL)
			delete this->_Source[i];
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	for (int i=0; i <= this->_N_Source; i++)
	{
		delete this->_Source[i];
	}
	this->_N_Source = other._N_Source;
	for (int i=0; i <= this->_N_Source; i++)
	{
		this->_Source[i] = other._Source[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_N_Source > 3)
		return;
	this->_Source[this->_N_Source] = materia;
	this->_N_Source++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type != "ice" && type != "cure")
		return (0);
	if (this->_N_Source == 0)
		return (0);

	int n = this->_N_Source;
	while(n >= 0)
	{
		if (this->_Source[n] != NULL && this->_Source[n]->getType() == type)
			return (this->_Source[n]->clone());
		n--;
	}
	return (0);

}
