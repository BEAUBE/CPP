#pragma once
#include <iostream>

class Fixed {
	private:
		int Value;
		static const int FracBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &original);
		Fixed &operator = (const Fixed &original);
		~Fixed();
		int getRawBits(void) const;
		void	setRawBits(int const raw);
};
