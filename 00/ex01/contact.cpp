#include "PhoneBook.hpp"

void Contact::setContact(std::string fn, std::string ln, std::string nn, std::string ph, std::string ds)
{
	firstName = fn;
	lastName = ln;
	nick = nn;
	phoneNumber = ph;
	darkestSecret = ds;
}

void Contact::getVariables(std::string arr[5])
{
	arr[0] = firstName;
	arr[1] = lastName;
	arr[2] = nick;
	arr[3] = phoneNumber;
	arr[4] = darkestSecret;
}
