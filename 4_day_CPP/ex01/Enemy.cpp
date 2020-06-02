#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _HP(hp), _Type(type)
{

}

Enemy::Enemy(Enemy const &other): _HP(other._HP), _Type(other._Type)
{

}

Enemy& Enemy::operator=(Enemy const &other)
{
	if (this != &other)
	{
		this->_HP = other._HP;
		this->_Type = other._Type;
	}
	return (*this);
}

Enemy::~Enemy()
{
}

std::string Enemy::getType() const
{
	return(this->_Type);
}

int Enemy::getHP() const
{
	return(this->_HP);
}

void Enemy::takeDamage(int dmg)
{
	if (this->_HP - dmg <= 0 && dmg > 0)
    {
        this->_HP = 0;
    }
    else
    {
        this->_HP -= dmg;
    }
    return ;
}
