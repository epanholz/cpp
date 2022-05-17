
# pragma once

# include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &old_obj);
	Fixed&	operator=(const Fixed &old_obj);
	~Fixed();

public:
	int		getRawBits(void) const;
	void	setRawBits(int const raw);


private:
	int					int_part;
	static const int	fract_bits;

};