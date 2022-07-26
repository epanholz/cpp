
#include "Span.hpp"
#include <numeric>

int     main() {
    Span sp = Span(50);
	try { 
		sp.addRange(7,5); 
	}
	    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp.longestSpan() << std::endl;
    try {
        sp.addNumber(15); 
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
	sp.printSort();
    return (0);
}
