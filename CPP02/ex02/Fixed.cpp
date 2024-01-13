#include "Fixed.hpp"

//CONSTRUCTORS

Fixed::Fixed(void) {
	this->Value = 0;
}

Fixed::Fixed(const int nb) {
	this->Value = nb * (1 << FracBits);
}

Fixed::Fixed(const float nb) {
	this->Value = roundf(nb * (1 << FracBits));
}

Fixed::Fixed(const Fixed &original) {
	*this = original;
}

//OPERATORS

Fixed &Fixed::operator=(const Fixed &original) {
		if (this == &original)
			return (*this);
		this->Value = original.getRawBits();
		return (*this);
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return Fixed(this->toFloat() / fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const {
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed) const {
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator>(const Fixed &fixed) const {
	return (this->toFloat() > fixed.toFloat());
}

Fixed &Fixed::operator++(void) {
	this->Value++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed rtrn;

	rtrn.Value = this->Value++;
	return (rtrn);
}

Fixed &Fixed::operator--(void) {
	this->Value--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed rtrn;

	rtrn.Value = this->Value--;
	return (rtrn);
}


Fixed &Fixed::min(Fixed &nbr1, Fixed &nbr2) {
	if (nbr1 < nbr2)
		return (nbr1);
	return (nbr2);
}

Fixed &Fixed::max(Fixed &nbr1, Fixed &nbr2) {
	if (nbr1 < nbr2)
		return (nbr2);
	return (nbr1);
}

const Fixed &Fixed::max(const Fixed &nbr1, const Fixed &nbr2) {
	if (nbr1 < nbr2)
		return (nbr2);
	return (nbr1);
}

const Fixed &Fixed::min(const Fixed &nbr1, const Fixed &nbr2) {
	if (nbr1 < nbr2)
		return (nbr1);
	return (nbr2);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed) {
	stream << fixed.toFloat();
	return (stream);
}

//DESTRUCTOR

Fixed::~Fixed() {
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

