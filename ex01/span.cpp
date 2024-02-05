
#include "span.hpp"

span::span(){
	this->size = 0;
	this->_n = 0;
}

span::span(unsigned int n){
	this->size = 0;
	this->_n = n;
}

span::span(const span &copy){
	this->_n = copy._n;
	this->_v = copy._v;
	this->size = copy.size;
}

span::~span(){
}

span &span::operator=(const span &copy) {
	this->_n = copy._n;
	this->_v = copy._v;
	this->size = copy.size;
	return *this;
}

const char *span::error::what() const throw() {
	return ("The span is full!");
}

void span::addNumber(int n) {
	if(this->size < this->_n){
		this->_v.push_back(n);
		this->size++;
	}else
		throw error();
}

int span::shortestSpan(){
	if(this->size < 2)
		throw error();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for(unsigned int i = 2; i < this->size; i++){
		if(tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return min;
}

int span::longestSpan() {
	if(this->size < 2)
		throw error();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	return tmp[this->size - 1] - tmp[0];
}

