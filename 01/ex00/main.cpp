#include "Zombie.hpp"

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		std::cerr << "Invalid number of inputs.\nExpected: ./zombie 'zombie_heap_name' 'zombie_stack_name'\n";
		return (-1);
	}
	Zombie *heap = newZombie(argv[1]);
	heap->announce();
	delete heap;

	randomChump(argv[2]);
	return (0);
}
