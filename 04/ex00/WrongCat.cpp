#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	this->type = other.type;
	std::cout << "WrongCat copy constructor!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	this->type = other.type;

	std::cout << "WrongCat assignment operator called!" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat sound" << std::endl;
}
