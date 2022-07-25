
# pragma once

# include <algorithm>
# include <iostream>
# include <exception>
# include <vector>

class Span {

    public: /* constructors and deconstructors */
        Span();
        Span(unsigned int size);
        Span(const Span &rhs);
        virtual ~Span();

    public: /* copy assignment operator overload */
        Span& operator=(const Span &rhs);

    public: /* getter and setter */

    public: /* member functions */
        void    addNumber(int numb);
        //void    addRange(unsigned int start, unsigned int end);
        int     shortestSpan();
        int     longestSpan();

    private: /* attributes */
        unsigned int     _size;
        std::vector<int> _vec;

};
