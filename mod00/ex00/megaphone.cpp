#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) 
{
	char c;
	if(argc>=2) 
	{
		for (int i = 1; i <= (argc - 1); i++) 
		{
			for(size_t j = 0; j <= strlen(argv[i]); j++) 
			{
				c =  argv[i][j];
				if(c >=97 && c<=122)
					c = c - 32;
				std::cout << c;
			}
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}
