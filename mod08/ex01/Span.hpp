
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
        void    addRange(int size, int val);
        int     shortestSpan();
        int     longestSpan();
		void	printSort();

    private: /* attributes */
        unsigned int     _size;
        std::vector<int> _vec;

};
