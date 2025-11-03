#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nick;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void setContact(std::string fn, std::string ln, std::string n, std::string ph, std::string ds);
};

class PhoneBook
{
	private:
		Contact arr[8];
		int total;
		int index;
	public:
		void addContact();
		void searchContacts();
};

#endif
