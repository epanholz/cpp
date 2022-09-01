
# pragma once

# include <iostream>
# include <cmath>

class Fixed {

public: /* constructors deconstructors */
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &obj);
	Fixed& operator=(const Fixed &obj);
	~Fixed();

public: /* setter and getter */
	int				getRawBits(void) const;
	void			setRawBits(int const raw);

public: /* converstions */
	float			toFloat(void) const;
	int				toInt(void) const;

public: /* comparsion operator, they are const to be read only*/
	bool			operator<(const Fixed& obj) const;
	bool			operator>(const Fixed& obj) const;
	bool			operator>=(const Fixed& obj) const;
	bool			operator<=(const Fixed& obj) const;
	bool			operator==(const Fixed& obj) const;
	bool			operator!=(const Fixed& obj) const;

public: /* decrement and increment operators */
	Fixed&			operator++(void);
	Fixed			operator++(int);
	Fixed&			operator--(void);
	Fixed			operator--(int);

public: /* simple math operators */
	Fixed&			operator+(const Fixed& obj);
	Fixed&			operator-(const Fixed& obj);
	Fixed&			operator*(const Fixed& obj);
	Fixed&			operator/(const Fixed& obj);

public: /* min max member functions */
	const static Fixed&	min(const Fixed& obj1, const Fixed& obj2);
	static Fixed&		min(Fixed& obj1, Fixed& obj2);
	const static Fixed&	max(const Fixed& obj1, const Fixed& obj2);
	static Fixed&		max(Fixed& obj1, Fixed& obj2);

private: /* attributes */
	int					int_part;
	static const int	fract_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
