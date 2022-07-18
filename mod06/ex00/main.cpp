
#include "Conversion.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        Conversion a(argv[1]);
        a.ConvertValue();
    }
    return (0);
}
