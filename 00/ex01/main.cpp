#include "PhoneBook.hpp"

static void menu(std::string *option)
{
	std::cout << "ADD\n";
	std::cout << "SEARCH\n";
	std::cout << "EXIT\n";
	std::getline(std::cin, *option);
}

int main(int argc, char **agrv)
{
	std::string option;
	PhoneBook phoneBook;

	phoneBook.initValues();
	while (1)
	{
		menu(&option);
		if (option == "ADD")
			phoneBook.addContact();
		else if (option == "SEARCH")
			phoneBook.searchContacts();
		else if (option == "EXIT")
		{
			std::cout << "Closing...\n";
			break;
		}
		else
			std::cout << "Error. Invalid option\n";
	}
	return 0;
}
