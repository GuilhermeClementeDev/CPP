#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal"){
	std::cout << "WrongAnimal default constructor!" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	this->type = other.type;
	std::cout << "WrongAnimal copy constructor!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	this->type = other.type;
	std::cout << "WrongAnimal assigned!" << std::endl;

	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}
