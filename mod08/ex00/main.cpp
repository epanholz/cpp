
#include "easyfind.hpp"
#include <vector> 
#include <array>
#include <map>

int     main() {
    std::vector<int> myVec;
    std::array<int,3> myArr = {1, 2, 3};
    myVec.push_back(1);
    myVec.push_back(2);
    myVec.push_back(3);
    try {
        ::easyfind(myVec, 4);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }    
    try {
        ::easyfind(myArr, 2);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
