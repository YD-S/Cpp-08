#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

class span{
public:
	span();
	span(unsigned int n);
	span(const span &copy);
	~span();
	span &operator=(const span &copy);
	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

class error : public std::exception{
	const char *what() const throw();
};
private:
	unsigned int size;
	unsigned int _n;
	std::vector<int> _v;
};
#endif
