#include "Fixed.hpp"

//CONSTRUCTORS

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->Value = 0;
}

Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	this->Value = nb * (1 << FracBits);
}

Fixed::Fixed(const float nb) {
	std::cout << "Int constructor called" << std::endl;
	this->Value = roundf(nb * (1 << FracBits));
}

Fixed::Fixed(const Fixed &original) {
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

//OPERATORS

Fixed &Fixed::operator=(const Fixed &original) {
		std::cout << "Copy assignment operator called" << std::endl;
		if (this == &original)
			return (*this);
		this->Value = original.getRawBits();
		return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed) {
	stream << fixed.toFloat();
	return (stream);
}

//DESTRUCTOR

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//FCTS

float Fixed::toFloat(void) const {
	return static_cast<float>(static_cast<float>(this->Value) / (1 << this->FracBits));
}

int	Fixed::toInt(void) const {
	return (this->Value / (1 << this->FracBits));
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawbits member function called" << std::endl;
	return (this->Value);
}

void	Fixed::setRawBits(int const raw) {
	this->Value = raw;
}

