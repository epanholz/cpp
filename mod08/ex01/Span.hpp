
# pragma once

# include <algorithm>
# include <iostream>
# include <exception>
# include <vector>

class Span {

    public: 
    /* constructors and deconstructors */
        Span();
        Span(unsigned int size);
        Span(const Span &rhs);
        virtual ~Span();

    /* copy assignment operator overload */
        Span& operator=(const Span &rhs);

    /* member functions */
        void    addNumber(int numb);
        void    addRange(int size, int val);
        int     shortestSpan();
        int     longestSpan();
		void	printSort();

    private: 
    /* attributes */
        unsigned int     _size;
        std::vector<int> _vec;
    
    /* private constructor since we never want to use it */

};
