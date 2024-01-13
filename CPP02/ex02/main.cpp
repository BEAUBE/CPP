#include <iostream>
#include "Fixed.hpp"

int main( void ) {
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a + b is " << (a + b) << std::endl;
}
{
	std::cout << "tests perso" << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) - Fixed( 2 ) );
	std::cout << "b = " << b << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min( a, b ) << std::endl;
}
{
	Fixed const a(42.42f);
	Fixed const b(2);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a + b = " << a + b <<std::endl;
	std::cout << "a - b = " << a - b <<std::endl;
	std::cout << "a * b = " << a * b <<std::endl;
	std::cout << "a / b = " << a / b <<std::endl;
	std::cout << "COMP 1" << std::endl;
	std::cout << "a < b = " << (a < b) <<std::endl;
	std::cout << "a > b = " << (a > b) <<std::endl;
	std::cout << "a <= b = " << (a <= b) <<std::endl;
	std::cout << "a >= b = " << (a >= b) <<std::endl;
	std::cout << "a == b = " << (a == b) <<std::endl;
}
{
	Fixed const a(42);
	Fixed const b(42);
	std::cout << "COMP 2" << std::endl;
	std::cout << "a < b = " << (a < b) <<std::endl;
	std::cout << "a > b = " << (a > b) <<std::endl;
	std::cout << "a <= b = " << (a <= b) <<std::endl;
	std::cout << "a >= b = " << (a >= b) <<std::endl;
	std::cout << "a == b = " << (a >= b) <<std::endl;
}
}
