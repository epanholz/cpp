
#include "Conversion.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        Conversion a(argv[1]);
        a.ConvertValue();
    }
    else {
        double f = 'c';
        double j = 42.5;
        double c = static_cast<double>(f);
        double b = static_cast<char>(f);
        std::cout << c << std::endl;
        std::cout << static_cast<char>(f) << std::endl;
        std::cout << static_cast<double>(j) << std::endl;
        std::cout << b << std::endl;
    }
    return (0);
}
