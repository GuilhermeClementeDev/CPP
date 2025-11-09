#include "Zombie.hpp"

void verifyNumb(std::string numb)
{
	if (numb.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cerr << "Error: '" << numb << "' is not a valid positive number.\n";
		exit(-1);
	}
}

int main (int argc, char **argv)
{
	if (argc != 3 || !argv[1][0] || !argv[2][0])
	{
		std::cerr << "Invalid number of inputs.\nExpected: ./zombie 'number of zombies' 'name'\n";
		return (-1);
	}
	verifyNumb(argv[1]);
	int n = std::atoi(argv[1]);
	if (n <= 0)
	{
		std::cerr << "Error: number of zombies must be greater than 0.\n";
		return (-1);
	}
	Zombie *horde = zombieHorde(n, argv[2]);
	for (int i = 0; i < n; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}
