

# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <ctype.h>
# include <limits>
# include <cmath>

class Conversion {

    public: 
    /* constructors and deconstructors */
        Conversion();
        Conversion(std::string input);
        Conversion(const Conversion &);
        ~Conversion();

    /* copy assignment operator overload */
        Conversion& operator=(const Conversion &);

    /* getter and setter */

    /* member functions */
        void    ConvertValue();

    private: 
    /* member functions */
        bool    _IsChar();
        bool    _IsInt();
        bool    _IsFloat();
        bool    _IsDouble();
        void    _ConvertChar();
        void    _ConvertInt();
        void    _ConvertFloat();
        void    _ConvertDouble();

    /* attributes */
    std::string     _input;
    double          _value;

};
