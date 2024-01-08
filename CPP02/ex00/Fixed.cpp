#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->Value = 0;
}

Fixed::Fixed(const Fixed &original) {
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed &Fixed::operator=(const Fixed &original) {
		std::cout << "Copy assignment operator called" << std::endl;
		if (this == &original)
			return (*this);
		this->Value = original.getRawBits();
		return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawbits member function called" << std::endl;
	return (this->Value);
}

void	Fixed::setRawBits(int const raw) {
	this->Value = raw;
}
