#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog default constructor!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->type = other.type;
	std::cout << "Dog copy constructor!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	this->type = other.type;
	std::cout << "Dog assigned!" << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Au! Au! Au!" << std::endl;
}
