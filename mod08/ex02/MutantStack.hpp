
#pragma once

# include <iostream>
# include <stack>
# include <iterator> 

template<typename T>
class MutantStack : public std::stack<T> {

	public: /* iterator typedefs */
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

	public: /* iterators */
		iterator 				begin() {return (this->c.begin());}
		const_iterator			begin() const {return (this->c.begin());}
		reverse_iterator		rbegin() {return (this->c.rbegin());}
		const_reverse_iterator	rbegin() const {return (this->c.rbegin());}	
		iterator				end() {return (this->c.end());}
		const_iterator			end() const {return (this->c.end());}
		reverse_iterator		rend() {return (this->c.rend());}
		const_reverse_iterator	rend() const {return (this->c.rend());}

};

//#include "MutantStack.tpp"
//https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
