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

/*
    dynamic_cast
    Can only be used with pointers and references to classes (or with void*). 
    Its purpose is to ensure that the result of the type conversion points 
    to a valid complete object of the destination pointer type.

    When dynamic_cast cannot cast a pointer because it is not a complete 
    object of the required class it returns a null pointer to indicate the failure. 
*/

void    Base::identify(Base *p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Actual type is Class A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Actual type is Class B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Actual type is Class C" << std::endl;
}

/*
    If dynamic_cast is used to convert to a reference type and the conversion is not 
    possible, an exception of type bad_cast is thrown instead.
*/

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
