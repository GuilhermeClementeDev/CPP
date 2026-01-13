#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixedPoint;
		static const int	bits = 8;
	public:
		// Construtores
		Fixed(); // default
		Fixed(const int numb); //  int
		Fixed(const Fixed& other); // copia
		Fixed(const float n); // Float
		// Destrutor
		~Fixed();
		// Operador de atribuição
		Fixed& operator=(const Fixed& other);
		//getter
		int getRawBits(void) const; // raw
		float toFloat(void) const; // float
		int toInt(void) const; // int
		// setter raw
		void setRawBits(int const raw);

		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		Fixed&	operator++(); // prefix
		Fixed	operator++(int); // sufix
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&	min(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif
