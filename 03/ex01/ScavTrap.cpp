#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs){
	ClapTrap::operator=(rhs);
	std::cout << "ScavTrap assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << name << " destructed!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " can't attack, no hit points left!" << std::endl;
		return;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " can't attack, no energy points left!" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}
