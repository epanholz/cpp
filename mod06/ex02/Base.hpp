
# pragma once

# include <iostream>

class Base {

    public: /* deconstructor */
        virtual ~Base();

    public: /* member functions */
        Base*   generate(void);
        void    identify(Base *p);
        void    identify(Base &p);

};

class A : public Base {};

class B : public Base {};

class C : public Base {};
