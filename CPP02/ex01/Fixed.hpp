#pragma once
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int Value;
		static const int FracBits = 8;
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &original);
		Fixed &operator=(const Fixed &original);
		~Fixed();
		float toFloat(void) const;
		int	toInt(void) const;
		int getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);
