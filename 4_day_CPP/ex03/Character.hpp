#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character;

class Character : public ICharacter
{
	public:
		Character(std::string const & name);
		~Character();
		Character(Character const &other);
		Character& operator=(Character const &other);

		std::string const & getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);

	private:
		std::string _Name;
		AMateria 	*_Inventory[4];
		int			_N_materia;
};

#endif
