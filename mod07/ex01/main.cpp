
#include "iter.hpp"

void    ft_add(int &i) {
    i = i + 1;
}

int     main() {
    int array[] = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < sizeof(array) / sizeof(int); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    ::iter(array, sizeof(array) / sizeof(int), ft_add);
    for (size_t i = 0; i < sizeof(array) / sizeof(int); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    ::iter(array, sizeof(array) / sizeof(int), ::add<int>);
    for (size_t i = 0; i < sizeof(array) / sizeof(int); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return (0);
}
