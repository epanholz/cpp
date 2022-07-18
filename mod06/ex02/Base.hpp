
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <stdint.h>
# include <ctype.h>

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
