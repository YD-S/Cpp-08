
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <list>
#include <deque>
#include <stack>
#include <exception>

class easyfind: public std::exception
{
	public:
		virtual const char* what() const throw(){
			return ("Element not found!");
		}
};

template <typename T>
int easyfind(T &container, int n){
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), n);
	if (i == container.end())
		throw std::exception();
	return (*i);
}
#endif
