
# pragma once

# include <iostream>
# include <algorithm>   
# include <exception>

template <typename Container>
void    easyfind(Container &container, int toFind) {
    typename Container::iterator it;
    
    it = std::find(container.begin(), container.end(), toFind);
    if (it != container.end())
        std::cout << "Element found: " << *it << std::endl;
    else
        throw std::exception();
}
