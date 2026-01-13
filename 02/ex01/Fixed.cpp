#include "Fixed.hpp"

Fixed::Fixed(const int numb) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = numb * (1 << bits);
}

Fixed::Fixed(): fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(n * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixedPoint = other.fixedPoint;
	return *this;
}

int Fixed:: getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

float Fixed::toFloat(void) const{
	return ((float)this->fixedPoint / (1 << bits));
}

int Fixed::toInt(void) const{
	return (this->fixedPoint / (1 << bits));
}

void Fixed:: setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}
