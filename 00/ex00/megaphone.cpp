#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	k = 0;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		k = 0;
		while (argv[i][k])
		{
			std::cout << (char)std::toupper (argv[i][k]);
			k++;
		}
		i++;
	}
	std::cout << "\n";
	return 0;
}
