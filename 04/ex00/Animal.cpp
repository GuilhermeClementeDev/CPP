#include "Animal.hpp"

Animal::Animal(): type("Animal"){
	std::cout << "Animal default constructor!" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal(const Animal& other){
	this->type = other.type;
	std::cout << "Animal copy constructor!" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	this->type = other.type;
	std::cout << "Animal assigned!" << std::endl;

	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Animal makes a generic sound" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}
