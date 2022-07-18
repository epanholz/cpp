
#include "Base.hpp"

int main() {
    Base *test = new Base();
    Base *random = test->generate();
    test->identify(random);
    test->identify(*random);
    delete test;
    delete random;
    return (0);
}
