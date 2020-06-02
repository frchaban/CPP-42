#include "Character.hpp"

Character::Character(std::string const &name): _Name(name), _AP(40), _Weapon(0)
{

}

Character::~Character()
{
}

Character::Character(Character const &other): _Name(other._Name), _AP(other._AP), _Weapon(other._Weapon)
{

}

Character& Character::operator=(Character const &other)
{
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_AP = other._AP;
		this->_Weapon = other._Weapon;
	}
	return (*this);
}

void Character::recoverAP()
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}
void Character::equip(AWeapon* weapon)
{
	this->_Weapon = weapon;
}

void Character:: attack(Enemy* enemy)
{
	if (enemy == NULL)
	{
		std::cout << "No enemy..." << std::endl;
		return ;
	}

	if (!this->_Weapon)
	{
		std::cout << this->_Name << " is unarmed. He can't attack..." << std::endl;
		return ;
	}

	if (this->_AP < this->_Weapon->getAPCost())
	{
		std::cout << this->_Name << " has not enough AP. He can't attack..." << std::endl;
		return ;
	}

	std::cout << this->_Name << " attacks " <<  enemy->getType() << " with a " << this->_Weapon->getName() << std::endl;
	this->_AP -= this->_Weapon->getAPCost();
	if (this->_AP < 0)
		this->_AP = 0;
	this->_Weapon->attack();
	enemy->takeDamage(this->_Weapon->getDamage());
	if (enemy->getHP() <= 0)
	{
		delete (enemy);
	}
}

AWeapon* Character::getWeapon() const
{
	return (this->_Weapon);
}

std::string Character::getName() const
{
	return(this->_Name);
}

int Character::getAP() const
{
	return(this->_AP);
}

std::ostream& operator<<(std::ostream &out, Character const &character)
{
	if (!character.getWeapon())
	{
		out << character.getName();
		out << " has ";
		out << character.getAP();
		out << " AP";
		out << " and is unarmed";
		out << std::endl;
	}
	else
	{
		out << character.getName();
		out << " has ";
		out << character.getAP();
		out << " AP";
		out <<  " and carries a ";
		out << character.getWeapon()->getName();
		out << std::endl;
	}
	return (out);
}
