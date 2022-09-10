# pragma once

# include <iostream>
# include <fstream>
# include <string>

class Brain {

	public: /* constructors and deconstructors */
		Brain();
		Brain(const Brain &rhs);
		virtual ~Brain();

	public: /* copy assignment operator overload */
		Brain& operator=(const Brain &rhs);

	public: /* getter and setter for testing */
		void			setIdea(int index, std::string idea);
		std::string		getIdea(int index) const;

	private: /* attributes */
		std::string ideas[100];

};
