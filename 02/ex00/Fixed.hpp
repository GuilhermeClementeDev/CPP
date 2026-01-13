#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixedPoint;
		static const int	bits = 8;
	public:
		Fixed(); //Construtor padrão
		Fixed(const Fixed& other); // construtor de cópia
		~Fixed(); // destrutor
		Fixed& operator=(const Fixed& other); // operador de atribuição
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
