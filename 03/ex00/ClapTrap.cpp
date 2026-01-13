#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitPoints(10), energyPoints(10), attackDamage(0){
	this->name = "none";
	std::cout << "ClapTrap " << this->name << " default constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): hitPoints(10), energyPoints(10), attackDamage(0){
	this->name = name;
	std::cout << "ClapTrap " << this->name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): hitPoints(10), energyPoints(10), attackDamage(0){
	this->name = other.name;
	std::cout << "ClapTrap " << this->name << " copy constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "ClapTrap " << this->name << " assigned!" << std::endl;

	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't attack, no hit points left!" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't attack, no energy points left!" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount){

	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;

	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! (HP: " << hitPoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't repair, no hit points left!" << std::endl;
		return;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't repair, no energy points left!" << std::endl;
		return;
	}

	energyPoints--;
	hitPoints += amount;

	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points! (HP: " << hitPoints << ")" << std::endl;
}
