
#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

/* constructors deconstructors */

Fixed::Fixed()
	: int_part(0) {
	std::cout << "Default constructor called :3" << std::endl;
}

Fixed::Fixed(const int value) {
	this->int_part = value * (1 << this->fract_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value){
	this->int_part = roundf(value * (1 << this->fract_bits));
	std::cout << "Flaot constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj){
	std::cout << "Copy constructor called :D" << std::endl;
	this->int_part = obj.int_part;
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called :x" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->int_part = obj.int_part;
	return (*this);
}

/* setter and getter  */

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->int_part);
}

void	Fixed::setRawBits( int const raw){
	this->int_part = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

/* conversion */

float	Fixed::toFloat(void) const{
	return(static_cast<float>(this->int_part) / (1 << this->fract_bits));
}

int		Fixed::toInt(void) const{
	return(static_cast<int>(this->int_part) / (1 << this->fract_bits));
}

/* write to os stream */

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
    return os << obj.toFloat();
}
