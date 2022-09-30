
#include "Conversion.hpp"

/* constructors */

Conversion::Conversion() {}

Conversion::Conversion(std::string input)
    : _input(input) { } 

Conversion::Conversion(const Conversion &) {}

Conversion::~Conversion() {}

/* copy assignment operator overload */

Conversion& Conversion::operator=(const Conversion &) {
	return (*this);
}

/* member functions */

void    Conversion::ConvertValue() {
    if (this->_IsChar() == true)
        this->_value = this->_input[0];
    else if (this->_IsInt() || this->_IsFloat() || this->_IsDouble())
        this->_value = std::atof(this->_input.c_str());
    else {
        std::cout << "Wrong input" << std::endl;
        return ;
    }
    this->_ConvertChar();
    this->_ConvertInt();
    this->_ConvertFloat();
    this->_ConvertDouble();
}

bool    Conversion::_IsChar() {
    return (this->_input.length() == 1 && ((this->_input[0] >= 32 && this->_input[0] <= 47) || (this->_input[0]>= 58 && this->_input[0] <= 127)));
}

bool    Conversion::_IsInt() {
    std::string::const_iterator it = this->_input.begin();
    if (this->_input.size() > 1 && (this->_input[0] == '-' || this->_input[0] == '+'))
        it++;
    while (it != this->_input.end() && std::isdigit(*it))
        it++;
    return (!this->_input.empty() && it == this->_input.end());
}

bool    Conversion::_IsFloat() {
    if (this->_input == "-inff" || this->_input == "+inff" || this->_input == "nanf")
    {
        this->_input = this->_input.substr(0,4);
        return (true);
    }
    std::string::const_iterator it = this->_input.begin();
    if (this->_input.size() > 1 && (this->_input[0] == '-' || this->_input[0] == '+'))
        it++;
    while (it != this->_input.end() && std::isdigit(*it))
        it++;
    if (*it != '.')
        return (false);
    else 
        it++;
    while (it != this->_input.end() && std::isdigit(*it))
        it++;
    if (*it != 'f' || (*it == 'f' && this->_input.size() == 1))
        return (false);
    it++;
    return (!this->_input.empty() && it == this->_input.end());
}

bool    Conversion::_IsDouble() {
    if (this->_input == "-inf" || this->_input == "+inf" || this->_input == "nan")
        return (true);
    std::string::const_iterator it = this->_input.begin();
    if (this->_input.size() > 1 && (this->_input[0] == '-' || this->_input[0] == '+'))
        it++;
    while (it != this->_input.end() && std::isdigit(*it))
        it++;
    if (*it != '.')
        return (false);
    else 
        it++;
    while (it != this->_input.end() && std::isdigit(*it))
        it++;
    return (!this->_input.empty() && it == this->_input.end());
}

/*
    static_cast 
    Can perform conversions between pointers to related classes, 
    not only upcasts (from pointer-to-derived to pointer-to-base), but also downcasts 
    (from pointer-to-base to pointer-to-derived). No checks are performed during 
    runtime to guarantee that the object being converted is in fact a full object of 
    the destination type. Therefore, it is up to the programmer to ensure that the 
    conversion is safe.
*/

void    Conversion::_ConvertChar() {
    std::cout << "char: ";
    if (this->_value > std::numeric_limits<char>::max() || this->_value < std::numeric_limits<char>::min() \
        || this->_input == "-inf" || this->_input == "+inf" || this->_input == "nan")
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(this->_value)))
        std::cout << "Non Printable" << std::endl;
    else 
        std::cout << static_cast<char>(this->_value) << std::endl;
}

void    Conversion::_ConvertInt() {
    std::cout << "int: ";
    if (this->_value > std::numeric_limits<int>::max() || this->_value < std::numeric_limits<int>::min() \
        || this->_input == "-inf" || this->_input == "+inf" || this->_input == "nan")
        std::cout << "impossible" << std::endl;
    else 
        std::cout << static_cast<int>(this->_value) << std::endl;
}

void    Conversion::_ConvertFloat() {
    std::cout << "float: ";
    std::cout << std::setprecision(1) << std::fixed << static_cast<float>(this->_value) << "f" << std::endl;
}

void    Conversion::_ConvertDouble() {
    std::cout << "double: ";
    std::cout << std::setprecision(1) << std::fixed <<  static_cast<double>(this->_value) << std::endl;
}
