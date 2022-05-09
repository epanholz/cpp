
#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed()
	: fixed_point_number(0) {
	std::cout << "Default constructor called :3" << std::endl;
}

Fixed::Fixed(const Fixed &old_obj){
	std::cout << "Copy constructor called :D" << std::endl;
	this->fixed_point_number = old_obj.fixed_point_number;
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called :x" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->fixed_point_number = old_obj.fixed_point_number;
	return (*this);
}

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_number);
}

void	Fixed::setRawBits( int const raw){
	this->fixed_point_number = raw;
	std::cout << "setRawBits member function called" << std::endl;
}