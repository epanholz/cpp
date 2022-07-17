
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

/* getter abd setter */

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

void    Conversion::_ConvertChar() {
    std::cout << "char: ";
    if (this->_value > std::numeric_limits<char>::max() || this->_value < std::numeric_limits<char>::min())
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(this->_value)))
        std::cout << "Non Printable" << std::endl;
    else 
        std::cout << static_cast<char>(this->_value) << std::endl;
}

void    Conversion::_ConvertInt() {
    std::cout << "int: ";
    if (this->_value > std::numeric_limits<int>::max() || this->_value < std::numeric_limits<int>::min())
        std::cout << "impossible" << std::endl;
    else 
        std::cout << static_cast<int>(this->_value) << std::endl;
}

void    Conversion::_ConvertFloat() {
    std::cout << "float: ";
    std::cout << std::setprecision(2) << std::fixed << static_cast<float>(this->_value) << "f" << std::endl;
}

void    Conversion::_ConvertDouble() {
    std::cout << "double: ";
    std::cout << std::setprecision(2) << std::fixed <<  static_cast<double>(this->_value) << std::endl;
}