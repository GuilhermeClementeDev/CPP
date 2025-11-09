#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie has been created!\n";
}

Zombie::~Zombie()
{
	std::cout << name << position << ": is now destroyed!\n";
}
void Zombie::setVar(std::string n, int i)
{
	name = n;
	position = i;
}

void Zombie::announce(void)
{
	std::cout << name << position << ": BraiiiiiiinnnzzzZ...\n";
}
