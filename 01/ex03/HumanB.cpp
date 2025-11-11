#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << ".\n";
}
HumanB::HumanB(std::string n) : name(n), weapon(NULL)
{
	std::cout << name << ": HumanB has been created.\n";
}

HumanB::~HumanB()
{
	std::cout << name << ": humanB has been destroyed.\n";
}
void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
