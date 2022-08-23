
#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

/* constructors and deconstructors */

Fixed::Fixed()
	: int_part(0) {
	std::cout << "Default constructor called :3" << std::endl;
}

Fixed::Fixed(const Fixed &rhs) 
	: int_part(rhs.getRawBits()) {
	std::cout << "Copy constructor called :D" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Deconstructor called :x" << std::endl;
}

/* copy assignment operator overload */

Fixed& Fixed::operator=(const Fixed &old_obj){
	std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->int_part = old_obj.getRawBits();
	return (*this);
}

/* setter and getter */

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->int_part);
}

void	Fixed::setRawBits( int const raw){
	this->int_part = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
