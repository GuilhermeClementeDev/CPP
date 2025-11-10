#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType();
}

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
	std::cout << name << " " << &weapon << ": army type has been created\n";
}

HumanA::~HumanA()
{
	std::cout << name << ": human has been destroyed\n";
}
