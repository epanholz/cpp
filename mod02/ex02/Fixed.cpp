
#include "Fixed.hpp"

/* constructors deconstructors */

Fixed::Fixed()
	: int_part(0) {
	//std::cout << "Default constructor called :3" << std::endl;
}

Fixed::Fixed(const int value) 
	: int_part(value * (1 << this->fract_bits)) {
	//std::cout << "Int constructor called" << std::endl;
	this->int_part = value * (1 << this->fract_bits);
}

Fixed::Fixed(const float value) 
	: int_part(std::roundf(value * (1 << this->fract_bits))) {
	//std::cout << "Flaot constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) 
	: int_part(obj.int_part) {
	//std::cout << "Copy constructor called :D" << std::endl;
}

Fixed::~Fixed(){
	//std::cout << "Deconstructor called :x" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj){
	//std::cout << "Copy assignment operator called ^-^" << std::endl;
	this->int_part = obj.int_part;
	return (*this);
}

/* setter and getter  */

int		Fixed::getRawBits( void ) const{
	return (this->int_part);
}

void	Fixed::setRawBits( int const raw){
	this->int_part = raw;
}

/* conversion */

float	Fixed::toFloat(void) const{
	return(static_cast<float>(this->int_part) / (1 << this->fract_bits));
}

int		Fixed::toInt(void) const{
	return(static_cast<int>(this->int_part) / (1 << this->fract_bits));
}

/* comparsion operators  */

bool	Fixed::operator<(const Fixed& obj) const{
	return(this->int_part < obj.int_part);
}

bool	Fixed::operator>(const Fixed& obj) const{
	return(this->int_part > obj.int_part);
}

bool	Fixed::operator<=(const Fixed& obj) const{
	return(this->int_part <= obj.int_part);
}

bool	Fixed::operator>=(const Fixed& obj) const{
	return(this->int_part >= obj.int_part);
}

bool	Fixed::operator==(const Fixed& obj) const{
	return(this->int_part == obj.int_part);
}

bool	Fixed::operator!=(const Fixed& obj) const{
	return(this->int_part != obj.int_part);
}

/* decrement and increment operators */

// prefix increment
Fixed&	Fixed::operator++(void){
	this->int_part++;
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
	this->int_part--;
	return *this; // return new value by reference
}

// postfix decrement
Fixed	Fixed::operator--(int){
	Fixed old = *this; //copy old value
	operator--(); // prefix decrement
	return old; //return old value
}

/* simple math operators */

Fixed&	Fixed::operator+(const Fixed& obj){
	this->int_part += obj.int_part;
	return *this;
}

Fixed&	Fixed::operator-(const Fixed& obj){
	this->int_part -= obj.int_part;
	return *this;
}

Fixed&	Fixed::operator*(const Fixed& obj){
	this->int_part = (static_cast<int64_t>(this->int_part) * static_cast<int64_t>(obj.int_part)) / (1 << fract_bits);
	return *this;
}

Fixed& Fixed::operator/(const Fixed& obj){
	this->int_part = (static_cast<int64_t>(this->int_part) * (1 << fract_bits)) / obj.int_part;
	return *this;
}

/* min max member funcionts */

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2){
	return(obj1 < obj2 ? obj1 : obj2);
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2){
	return(obj1 < obj2 ? obj1 : obj2);
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2){
	return(obj1 > obj2 ? obj1 : obj2);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2){
	return(obj1 > obj2 ? obj1 : obj2);
}

/* write os stream */

std::ostream& operator<<(std::ostream& os, const Fixed& obj){
    return os << obj.toFloat();
}
