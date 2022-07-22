
#pragma once

# include <iostream>
# include <string>
# include <exception>

template <typename T> class Array {

    public: /* constructors and deconstructors */
        Array();
        Array(unsigned int size);
        Array(const Array &rhs);
        ~Array();

    public: /* copy assignment operator overload */
        Array& operator=(const Array &rhs);
    
    public: /* subscript operator overload */
        T&  operator[](int index) const;

    public: /* member functions */
        size_t  size() const;

    private: /* attributes */
        T               *_array;
        unsigned int    _size; 

};

#include "Array.tpp"
