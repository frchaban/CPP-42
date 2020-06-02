#include "Character.hpp"

Character::Character(std::string const &name): _Name(name)
{
	this->_N_materia = 0;
	for (int i = 0; i < 4; i++)
		this->_Inventory[i] = NULL;
}
Character::~Character()
{
	for (int i=0; i <= this->_N_materia; i++)
	{
		delete this->_Inventory[i];
	}
}

Character::Character(Character const &other)
{
	for (int i=0; i <= this->_N_materia; i++)
	{
		delete this->_Inventory[i];
	}
	this->_N_materia = other._N_materia;
	for (int i=0; i <= this->_N_materia; i++)
	{
		this->_Inventory[i] = other._Inventory[i];
	}
	this->_Name = other._Name;
}
Character& Character::operator=(Character const &other)
{
	if (this == &other)
		return (*this);

	for (int i=0; i <= this->_N_materia; i++)
	{
		delete this->_Inventory[i];
	}

	this->_N_materia = other._N_materia;

	for (int i=0; i <= this->_N_materia; i++)
	{
		this->_Inventory[i] = other._Inventory[i];
	}

	this->_Name = other._Name;

	return (*this);
}

std::string const & Character::getName() const
{
	return(this->_Name);
}
void Character::equip(AMateria *m)
{
	if (this->_N_materia == 3)
		return ;
	if (m == NULL)
		return ;
	this->_Inventory[this->_N_materia] = m;
	this->_N_materia++;
}

void Character::unequip(int idx)
{
	if (idx > this->_N_materia)
		return ;
	this->_Inventory[idx] = NULL;
	this->_N_materia--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > this->_N_materia)
		return ;
	if (this->_Inventory[idx] != NULL)
		this->_Inventory[idx]->use(target);
}
