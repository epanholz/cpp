
# pragma once

# include <iostream>
# include <string>

template <typename T, typename F>
void    iter(T &array, size_t length, F f) {
    for (size_t i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T>
void    add(T &value) {
    value = value + 1;
}

// instantiated function template
template void add<int>(int &value);
