#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << ".\n";
}

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
	std::cout << "name: " << name << " HumanA has been created. " << "Weapon: " << weapon.getType() << ".\n";
}

HumanA::~HumanA()
{
	std::cout << name << ": humanA has been destroyed.\n";
}
