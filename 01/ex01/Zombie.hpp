#ifndef ZOMBIE_ORDER_HPP
# define ZOMBIE_ORDER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	private:
		std::string name;
		int position;
	public:
		Zombie();
		~Zombie();
		void setVar(std::string n, int i);
		void announce(void);
};

Zombie* zombieHorde(int n, std::string name);

#endif
