#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	// new funciona tipo malloc melhorado. Já vai separa a memoria e alocar o valor a minha variavel
	return (new Zombie(name));
}
