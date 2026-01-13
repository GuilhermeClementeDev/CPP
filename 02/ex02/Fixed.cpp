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

bool	Fixed::operator>(const Fixed &other) const {
	return ((bool)this->fixedPoint > other.fixedPoint);
}

bool	Fixed::operator<(const Fixed &other) const {
	return ((bool)this->fixedPoint < other.fixedPoint);
}

bool	Fixed::operator>=(const Fixed &other) const {
	return ((bool)this->fixedPoint >= other.fixedPoint);
}

bool	Fixed::operator<=(const Fixed &other) const {
	return ((bool)this->fixedPoint <= other.fixedPoint);
}

bool	Fixed::operator==(const Fixed &other) const {
	return ((bool)this->fixedPoint == other.fixedPoint);
}

bool	Fixed::operator!=(const Fixed &other) const {
	return ((bool)this->fixedPoint != other.fixedPoint);
}

Fixed Fixed::operator+(const Fixed& other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++() {
	this->fixedPoint++;
	return *this;
}

Fixed& Fixed::operator--() {
	this->fixedPoint--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->fixedPoint++;
	return temp;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->fixedPoint--;
	return temp;
}


Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	else
		return (b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}
