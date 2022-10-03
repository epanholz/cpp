
#include "Span.hpp"
#include <numeric>

int     main() {
    //Span sp = Span(10000);
    Span sp = Span(50);
    Span spanEmpty;

    std::cout << "--- empty array exceptions ---" << std::endl;
    try {
        spanEmpty.addRange(60, -42); 
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        spanEmpty.addNumber(1); 
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        spanEmpty.shortestSpan(); 
    }
    catch (const std::exception& e) {
        std::cout << e.what()  << "\n" << std::endl;
    }

    std::cout << "--- normal tests ---" << std::endl;
    sp.addRange(7,5); 
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(0);
    sp.addRange(5,42);
    try {
        sp.addRange(9967, 42); 
    }
    catch (const std::exception& e) {
        std::cout << "addRange exception " << e.what() << std::endl;
    }
    std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp.longestSpan() << std::endl;
	sp.printSort();
    return (0);
}
