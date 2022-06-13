
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

/* set fixed number */

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->int_part);
}

void	Fixed::setRawBits( int const raw){
	this->int_part = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float	Fixed::toFloat(void) const{
	return(static_cast<float>(this->int_part) / (1 << this->fract_bits));
}

int		Fixed::toInt(void) const{
	return(static_cast<int>(this->int_part) / (1 << this->fract_bits));
}

bool	Fixed::operator<(const Fixed& obj){
	return(this->int_part < obj.int_part);
}

/* comparsion operators  */

bool	Fixed::operator>(const Fixed& obj){
	return(this->int_part > obj.int_part);
}

bool	Fixed::operator<=(const Fixed& obj){
	return(this->int_part <= obj.int_part);
}

bool	Fixed::operator>=(const Fixed& obj){
	return(this->int_part >= obj.int_part);
}

bool	Fixed::operator==(const Fixed& obj){
	return(this->int_part == obj.int_part);
}

bool	Fixed::operator!=(const Fixed& obj){
	return(this->int_part != obj.int_part);
}

/* decrement and increment operators */

// prefix increment
Fixed&	Fixed::operator++(void){
	// actual increment takes place here
    return *this; // return new value by reference
}

// postfix increment
Fixed	Fixed::operator++(int){
	Fixed old = *this; // copy old value;
	operator++(); // prefix increment
	return old; // return old value
}

// prefix increment
Fixed&	Fixed::operator--(void){
	// actual decrement takes place here;
	return *this; // return new value by reference
}

// postfix decrement
Fixed	Fixed::operator--(int){
	Fixed old = *this; //copy old value
	operator--(); // prefix decrement
	return old; //return old value
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    // write obj to stream
    return os << obj.toFloat();
}