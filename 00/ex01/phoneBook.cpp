#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
	Contact contact;
	std::string firstName;
	std::string lastName;
	std::string nick;
	std::string phone;
	std::string darkestSecret;

	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nick name: ";
	std::getline(std::cin, nick);
	std::cout << "Phone: ";
	std::getline(std::cin, phone);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nick.empty() || phone.empty() || darkestSecret.empty())
	{
		std::cout << "Erro: empty filds\n";
		return ;
	}

	contact.setContact(firstName, lastName, nick, phone, darkestSecret);
	arr[index] = contact;
	index = (index + 1) % 8;
	if (total < 8)
		total++;
}

void printField(const std::string str)
{
	int len = str.length();

	if (len < 10)
	{
		for (int i = 0; i < 10 - len; i++)
			std::cout << " ";
		std::cout << str;
	}
	else if (len >= 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void PhoneBook::initValues()
{
	index = 0;
	total = 0;
}

void verifyOption(int total, Contact *arr)
{
	std::string option;
	int index;

	std::cout << "Select Index: ";
	std::getline(std::cin, option);
	// find_first_not_of retorna a primeira char que nao esta na string q eu passei e retorna o endereço dela caso tenha
	if (option.empty() || option.find_first_not_of("12345678") != std::string::npos)
	{
		std::cout << "ERROR INVALID INDEX.\n";
		return ;
	}
	index = std::atoi(option.c_str());
	if (index < 1 || index > total)
	{
		std::cout << "ERROR: INDEX OUT OF RANGE.\n";
		return;
	}
	std::string str[5];
	arr[index - 1].getVariables(str);
	std::cout << "First name: " << str[0];
	std::cout << "\nLast name: " << str[1];
	std::cout << "\nNick name: " << str[2];
	std::cout << "\nPhone: " << str[3];
	std::cout << "\nDarkest Secret: " << str[4] << "\n";
}

void PhoneBook::searchContacts()
{
	if (total == 0)
	{
		std::cout << "PhoneBook is empty.\n";
		return ;
	}
	std::cout << "|" << "     Index";
	std::cout << "|" << "First name";
	std::cout << "|" << " Last name";
	std::cout << "|" << "      Nick|\n";

	std::string str[5];
	for (int i = 0; i < total; i++)
	{
		arr[i].getVariables(str);
		std::cout << "|";
		printField(std::to_string(i + 1));
		std::cout << "|";
		printField(str[0]);
		std::cout << "|";
		printField(str[1]);
		std::cout << "|";
		printField(str[2]);
		std::cout << "|\n";
	}
	verifyOption(total, arr);
}
