#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5 , 21)
{
	this->_Output = "* piouuu piouuu piouuu *";
}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
 {
	std::cout << this->_Output << std::endl;
 }
