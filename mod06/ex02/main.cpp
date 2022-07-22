
#include "Base.hpp"

int main() {
    Base *test = new Base();
    Base *random = test->generate();
    std::cout << "pointer: ";
    test->identify(random);
    std::cout << "reference: ";
    test->identify(*random);
    delete test;
    delete random;
    return (0);
}
