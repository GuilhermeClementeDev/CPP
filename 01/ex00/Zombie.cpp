#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n)
{
	std::cout << name << ": has been zombified!\n";
}

Zombie::~Zombie()
{
	std::cout << name << ": is now destroyed!\n";
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
