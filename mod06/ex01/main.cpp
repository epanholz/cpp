
#include "Serialization.hpp"

int     main() {
    Serialization a;
    Data* b = new Data();
    b->data = "test";
    std::cout << "Address of Data struct before: " << b << " Data value before: " << b->data << std::endl; 
    std::cout << "Address of Data struct after:  " << a.deserialize(a.serialize(b)) << " Data value after:  " << b->data << std::endl;
    delete b;           
    return (0);
}
