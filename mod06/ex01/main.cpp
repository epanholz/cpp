
#include "Serialization.hpp"

int     main() {
    Serialization a;
    Data* b = new Data();
    b->data = "test";
    std::cout << b << std::endl; 
    std::cout << a.deserialize(a.serialize(b)) << std::endl ;
    delete b;           
    return (0);
}
