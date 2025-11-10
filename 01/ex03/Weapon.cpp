#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string n)
{
	type = n;
}

Weapon::Weapon(std::string t) : type(t)
{
	std::cout << type << ": army type has been created\n";
}

Weapon::~Weapon()
{
	std::cout << type << ": army type has been destroyed\n";
}
