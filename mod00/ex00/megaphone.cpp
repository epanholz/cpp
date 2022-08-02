
#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv) {
	if(argc>=2) {
		for (int i = 1; i <= (argc - 1); i++) {
			for(size_t j = 0; j <= std::strlen(argv[i]); j++) {
				std::cout << (std::isalpha(argv[i][j]) ? static_cast<char>(std::toupper(argv[i][j])) : argv[i][j]);
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
