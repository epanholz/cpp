
#include "easyfind.hpp"
#include <vector> 
#include <list>
#include <deque>

/*
the 3 container types that are not associative in c++98 are
vector, list and deque
*/ 

int     main() {
    std::vector<int> myVec;
    std::list<int> myList;
    std::deque<int> myDeque;

    for (int i = 0; i < 5; i++) {
        myList.push_back(i);
        myVec.push_back(i);
        myDeque.push_back(i);
    }

    try {
        ::easyfind(myVec, 4);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }  

    try {
        ::easyfind(myList, 6);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        ::easyfind(myDeque, 3);
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
