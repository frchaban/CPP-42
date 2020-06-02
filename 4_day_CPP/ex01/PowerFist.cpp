#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8 , 50)
{
	this->_Output = "* pschhh... SBAM ! *";
}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
 {
	std::cout << this->_Output << std::endl;
 }
