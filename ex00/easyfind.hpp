
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

class error: public std::exception
{
	public:
		virtual const char* what() const throw(){
			return ("Element not found!");
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int n){
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), n);
	if (i == container.end())
		throw error();
	else
		return (i);
}
#endif
