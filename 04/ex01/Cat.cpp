#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat default constructor!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other) {
	this->type = other.type;
	std::cout << "Cat copy constructor!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	this->type = other.type;
	std::cout << "Cat assigned!" << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}
