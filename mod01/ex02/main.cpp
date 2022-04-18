
# include <iostream>
# include <fstream>
# include <string>

int main(void)
{
	std::string brian = "HI THIS IS BRIAN";
	std::string *brian_pointer = &brian;
	std::string &brian_reference = brian;

	std::cout << "memory address of the string value: " << &brian << std::endl;
	std::cout << "memory address held by the pointer: " << &brian_pointer << std::endl;
	std::cout << "memory address held by the reference: " << &brian_reference << std::endl;
	std::cout << std::endl;
	std::cout << "value of the string: " << brian << std::endl;
	std::cout << "value of the pointer: " << brian_pointer << std::endl;
	std::cout << "value of the reference: " << brian_reference << std::endl;
}