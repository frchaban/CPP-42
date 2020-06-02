#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource;

class MateriaSource : public IMateriaSource
{
	private :
		AMateria 	*_Source[4];
		int			_N_Source;

	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &other);
		MateriaSource& operator=(MateriaSource const &other);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const &type);
};

#endif
