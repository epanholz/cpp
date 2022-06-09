
# pragma once

# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &obj);
	Fixed& operator=(const Fixed &obj);

	~Fixed();

public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	bool	operator<(const Fixed& obj);
	bool	operator>(const Fixed& obj);
	bool	operator>=(const Fixed& obj);
	bool	operator<=(const Fixed& obj);
	bool	operator==(const Fixed& obj);
	bool	operator!=(const Fixed& obj);
	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);
	Fixed&	operator+(const Fixed& obj);
	Fixed&	operator-(const Fixed& obj);
	Fixed&	operator*(const Fixed& obj);
	Fixed&	operator/(const Fixed& obj);
	Fixed&	min(const Fixed& obj1, const Fixed& obj2);
	Fixed&	min(Fixed& obj1, Fixed& obj2);
	Fixed&	max(Fixed& obj1, Fixed& obj2);
	Fixed&	max(const Fixed& obj1, const Fixed& obj2);

private:
	int					int_part;
	static const int	fract_bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

//https://stackoverflow.com/questions/19550030/how-to-overload-operator-without-friend-function
//https://en.cppreference.com/w/cpp/language/operators
//https://stackoverflow.com/questions/79677/whats-the-best-way-to-do-fixed-point-math

/*
https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

Converting from fixed-point to floating-point is straightforward.
We take the input value and divide it by (2fractional_bits),
putting the result into a double:

inline double fixed_to_double(fixed_point_t input)
{
    return ((double)input / (double)(1 << FIXED_POINT_FRACTIONAL_BITS));
}

To convert from floating-point to fixed-point, we follow this algorithm:

Calculate x = floating_input * 2^(fractional_bits)
Round x to the nearest whole number (e.g. round(x))
Store the rounded x in an integer container

Using the algorithm above, we would implement our float-to-fixed
conversion as follows:

inline fixed_point_t double_to_fixed(double input)
{
    return (fixed_point_t)(round(input * (1 << FIXED_POINT_FRACTIONAL_BITS)));
}
*/