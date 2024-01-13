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
		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator<(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator>(const Fixed &fixed) const;
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		static Fixed &min(Fixed &nbr1, Fixed &nbr2);
		static Fixed &max(Fixed &nbr1, Fixed &nbr2);
		static const Fixed &max(const Fixed &nbr1, const Fixed &nbr2);
		static const Fixed &min(const Fixed &nbr1, const Fixed &nbr2);
		~Fixed();
		float toFloat(void) const;
		int	toInt(void) const;
		int getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);
