
# pragma once

#include "Array.hpp"

/* constructors and deconstructors */

template <typename T> Array<T>::Array() 
    : _array(new T[0]), _size(0) {}

template <typename T> Array<T>::Array(unsigned int size) 
    : _array(new T[size]), _size(size) {}

template <typename T> Array<T>::Array(const Array &rhs) 
    : _array(new T[rhs.size()]), _size(rhs.size()) {
        for (unsigned int i = 0; i < rhs.size(); i++) {
            this->_array[i] = rhs[i];
        }
    }

template <typename T> Array<T>::~Array() {
    delete[] this->_array;
}

/* copy assignment operator overload */

template <typename T> Array<T>& Array<T>::operator=(const Array &rhs) {
    if (this->_size == rhs._size) {
        for (unsigned int i = 0; i < rhs.size(); i++)
            this->_array[i] = rhs[i];
    }
    return (*this);
}

/* subscript operator overload */

template <typename T> T& Array<T>::operator[](int index) const {
    if ((size_t)index >= this->size() || index < 0)
        throw std::exception();
    return(this->_array[index]);
}

/* member functions */

template <typename T> size_t Array<T>::size() const{
    return (this->_size);
}
