
#include "replace.hpp"

void	ft_replace(std::string filename, std::string s1, std::string s2) {
	std::string newFile = filename;
	std::ifstream fileStream1;

	/* Output stream class to operate on files. std::ofstream */
	newFile.append(".replace");
	std::ofstream fileStream2(newFile);
	fileStream1.open(filename, std::ifstream::in);
	if (!fileStream1) {
		std::cout << "could not open file :c" << std::endl;
		return ;
	}
	
	/*
	we move the position of the stream with seekg to be at the end of the stream
	and after that use tellg at what position we are in the stream to get
	the whole size of the file. Then we just read from the file into a buffer.
	*/
	fileStream1.seekg(0, std::ifstream::end);
	size_t size = fileStream1.tellg();
	std::string fileBuff(size, ' ');
	fileStream1.seekg(0);
	fileStream1.read(&fileBuff[0], size); 

	/* loop to find and replace all the words */
	size_t pos = fileBuff.find(s1);
	while (pos != std::string::npos) 
	{
		fileBuff.erase(pos, s1.size());
		fileBuff.insert(pos, s2);
		pos = fileBuff.find(s1);
	}

	/* Writinf to the new file and closing both files*/
	fileStream2 << fileBuff;
	fileStream1.close();
	fileStream2.close();
}

int		main(int ac, char **av) {
	if (ac != 4)
		std::cout << "Too many or little arguments." << std::endl;
	else	
		ft_replace(av[1], av[2], av[3]);
}