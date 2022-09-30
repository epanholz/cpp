
# pragma once

# include <iostream>
# include <string>

struct Data {
    std::string     data;
};

class Serialization {

    public:
    /* constructors and deconstructors */
        Serialization();
        Serialization(const Serialization &);
        virtual ~Serialization();

    /* copy assignment operator overload */
        Serialization& operator=(const Serialization &);

    /*
    uintptr_t
    unsigned integer type capable of holding a pointer to void
    */

    /* member functions */
        uintptr_t   serialize(Data* ptr);
        Data*       deserialize(uintptr_t raw);

};
