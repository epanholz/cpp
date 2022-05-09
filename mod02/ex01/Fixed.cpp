
#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed()
	: fixed_point_number(0) {
	std::cout << "Default constructor called :3" << std::endl;
}

Fixed::Fixed(const int value)
	: fixed_point_number(value) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
	: fixed_point_number(value) {
	std::cout << "Flaot constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor called :D" << std::endl;
	this->fixed_point_number = obj.fixed_point_number;
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called :x" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->fixed_point_number = obj.fixed_point_number;
	return (*this);
}

// std::ostream Fixed::operator<<(const Fixed &obj) {
// 	return std::cout << this->fixed_point_number;
// }

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
}

void	Fixed::setRawBits( int const raw){
	this->fixed_point_number = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float	Fixed::toFloat(void) const{
	return(static_cast<float>(this->fixed_point_number));
}

int		Fixed::toInt(void) const{
	return(static_cast<int>(this->fixed_point_number));
}

// std::ostream& operator<<(std::ostream &out, Fixed const& c)
// {
// 	return out << c.getRawBits();
// }