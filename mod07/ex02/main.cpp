
#include "Array.hpp"

int     main() {
    Array<int> a(5);

    std::cout << "-- Filling the Array a with [] operator and printing it --" << std::endl;
    for (size_t i = 0; i < a.size(); i++) 
        a[i] = i + 1;
    for (size_t i = 0; i < a.size(); i++)
         std::cout << a[i] << " ";
    std::cout << "\n\n";

    std::cout << "-- std exception if index is out of scope --" << std::endl;
    try {
        a[5] = 6;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\n";

    std::cout << "-- construct by copy constructor deep copy test --" << std::endl;
    Array<int> b(a);
    std::cout << "before changing array b" << std::endl;
    std::cout << "Array a: ";
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << "\nArray b: ";
    for (size_t i = 0; i < b.size(); i++)
        std::cout << b[i] << " ";
    for (size_t i = 0; i < b.size(); i++) 
        b[i] = 42;
    std::cout << "\nafter changing array b" << std::endl;
    std::cout << "Array a: ";
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << "\nArray b: ";
    for (size_t i = 0; i < b.size(); i++)
        std::cout << b[i] << " ";
    std::cout << std::endl;

    std::cout << "\n-- construct by assignment operator deep copy test --" << std::endl;
    Array<int> c = a;
    std::cout << "before changing array c" << std::endl;
    std::cout << "Array a: ";
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << "\nArray c: ";
    for (size_t i = 0; i < c.size(); i++)
        std::cout << c[i] << " ";
    for (size_t i = 0; i < c.size(); i++) 
        c[i] = 42;
    std::cout << "\nafter changing array c" << std::endl;
    std::cout << "Array a: ";
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << "\nArray c: ";
    for (size_t i = 0; i < c.size(); i++)
        std::cout << c[i] << " ";
    std::cout << std::endl;

    std::cout << "\n-- assignment operator deep copy test --" << std::endl;
    Array<int> d(5);
    d = a;
    std::cout << "before changing array d" << std::endl;
    std::cout << "Array a: ";
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << "\nArray d: ";
    for (size_t i = 0; i < d.size(); i++)
        std::cout << d[i] << " ";
    for (size_t i = 0; i < d.size(); i++) 
        d[i] = 42;
    std::cout << "\nafter changing array d" << std::endl;
    std::cout << "Array a: ";
    for (size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << "\nArray d: ";
    for (size_t i = 0; i < d.size(); i++)
        std::cout << d[i] << " ";
    std::cout << std::endl;

    return (0);
}
