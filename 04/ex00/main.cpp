#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "========== CORRECT POLYMORPHISM ==========" << std::endl;

	Animal meta;
	Dog dog;
	Cat cat;

	std::cout << meta.getType() << std::endl;
	std::cout << dog.getType() << std::endl;
	std::cout << cat.getType() << std::endl;

	dog.makeSound();   // Dog sound
	cat.makeSound();   // Cat sound
	meta.makeSound();  // Animal sound

	std::cout << "========== WRONG POLYMORPHISM ==========" << std::endl;

	WrongAnimal wrong;
	WrongCat wrongCat;

	std::cout << wrong.getType() << std::endl;
	std::cout << wrongCat.getType() << std::endl;

	wrong.makeSound();
	wrongCat.makeSound();

	std::cout << "========== Destructors ==========" << std::endl;
	return (0);
}
