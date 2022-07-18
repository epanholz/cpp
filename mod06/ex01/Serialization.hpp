
# pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <stdint.h>
# include <ctype.h>

struct Data {
    std::string     data;
};

class Serialization {

    public: /* constructors and deconstructors */
        Serialization();
        Serialization(const Serialization &);
        virtual ~Serialization();

    public: /* copy assignment operator overload */
        Serialization& operator=(const Serialization &);

    public: /* getter and setter */

    public: /* member functions */
        uintptr_t   serialize(Data* ptr);
        Data*       deserialize(uintptr_t raw);

    private: /* member functions */

    private: /* attributes */

};
