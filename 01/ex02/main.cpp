#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << " | String address\n";
	std::cout << stringPTR << " | Address held by stringPTR\n";
	std::cout << &stringREF << " | Address held by stringREF\n";

	std::cout << str << " | String value\n";
	std::cout << *stringPTR << " | Value pointed to by stringPTR\n";
	std::cout << stringREF << " | Value pointed to by stringREF\n";

	return (0);
}
