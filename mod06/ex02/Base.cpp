#include "Base.hpp"

/* deconstructor */
Base::~Base() {}

/* member functions */
Base*   Base::generate(void) {
    srand((unsigned int)time(NULL));
    int i = rand() % 3;
    Base* ret = NULL;
    if (i == 0)
        ret = new A();
    else if (i == 1)
        ret = new B();
    else if (i == 2)
        ret = new C();
    return (ret);
}

void    Base::identify(Base *p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Actual type is Class A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Actual type is Class B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Actual type is Class C" << std::endl;
}

void    Base::identify(Base &p) {
    try  {
        (void)dynamic_cast<A&>(p);
        std::cout << "Actual type is Class A" << std::endl;
    }
    catch (const std::bad_cast& e) {}
    try  {
        (void)dynamic_cast<B&>(p);
        std::cout << "Actual type is Class B" << std::endl;
    }
    catch (const std::bad_cast& e) {}
    try  {
        (void)dynamic_cast<C&>(p);
        std::cout << "Actual type is Class C" << std::endl;
    }
    catch (const std::bad_cast& e) {}
}
