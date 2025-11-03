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

	contact.setContact(firstName, lastName, nick, phone, darkestSecret);
	arr[0] = contact;
}

void Contact::setContact(std::string fn, std::string ln, std::string nn, std::string ph, std::string ds)
{
	firstName = fn;
	lastName = ln;
	nick = nn;
	phoneNumber = ph;
	darkestSecret = ds;
}
