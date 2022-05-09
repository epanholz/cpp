
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
	//std::ostream operator<<(Fixed const& c);
	~Fixed();

public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int					fixed_point_number;
	static const int	fract_bits;
};

//std::ostream& operator<<(std::ostream &out, Fixed const& c);

//https://stackoverflow.com/questions/19550030/how-to-overload-operator-without-friend-function

//look into what to do with the value we get to turn it into
//a fixed point number.