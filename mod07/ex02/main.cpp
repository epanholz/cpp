
#include "Array.hpp"

int     main() {
    Array<int> a(5);
    a[0] = 1;
    std::cout << a[0] << std::endl;
    std::cout << a.size() << std::endl;
    try {
        a[5] = 5;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    Array<int> b(a);
    std::cout << b[0] << std::endl;
    std::cout << b.size() << std::endl;
    b[0] = 2;
    std::cout << a[0] << std::endl;
    return (0);
}
