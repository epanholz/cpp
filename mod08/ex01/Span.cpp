
#include "Span.hpp"

/* constructors and deconstructors */

Span::Span() {}

Span::Span(unsigned int size) 
    : _size(size) {
    this->_vec.reserve(size);
}

Span::Span(const Span &rhs) 
    : _size(rhs._size), _vec(rhs._vec) {}

Span::~Span() {}

/* copy assignment operator overload */

Span&   Span::operator=(const Span &rhs) {
    this->_vec = rhs._vec;
    return (*this);
}

/* member functions */

void    Span::addNumber(int numb) {
    if (this->_vec.size() < this->_size)
        this->_vec.push_back(numb);
    else
        throw std::exception();
}

void	Span::addRange(int size, int val) {
	if (this->_vec.size() + size > this->_size)
		throw std::exception();
	this->_vec.insert(this->_vec.end(), size, val);
}

int     Span::shortestSpan() {
    if (this->_vec.size() < 2)
        throw std::exception();
    std::sort(this->_vec.begin(), this->_vec.end());
    int i = this->_vec[1] - this->_vec[0];
    for (std::vector<int>::iterator it = this->_vec.begin() + 1; it != this->_vec.end(); ++it) {
        if ((*it - *(it-1)) < i)
            i = *it - *(it-1);
    }
    return (i);
}

int    Span::longestSpan() {
    if (this->_vec.size() < 2)
        throw std::exception();
    return(*std::max_element(this->_vec.begin(), this->_vec.end()) - *std::min_element(this->_vec.begin(), this->_vec.end()));
}

void	Span::printSort() {
	std::sort(this->_vec.begin(), this->_vec.end());
	for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

// std::sort, std::adjacent_difference and then std::min_element
