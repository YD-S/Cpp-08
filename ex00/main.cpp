#include "easyfind.hpp"
#include <vector>
#include <list>

int main(int, char**)
{
	std::vector<int> vect;
	std::deque<char> queue;

	for (int i = 0; i < 50; ++i) {
		vect.push_back(i);
	}
	try{
		std::vector<int>::iterator it;
		it = easyfind(vect, 40);
		std::cout << *it << std::endl;

	}catch(std::exception &ex){
		std::cout << ex.what() << std::endl;
	}

	for (int i = 33; i < 120; ++i) {
		queue.push_back(i);
	}
	try{
		std::deque<char>::iterator it;
		it = easyfind(queue, 'f');
		std::cout << *it << std::endl;

	}catch(std::exception &ex){
		std::cout << ex.what() << std::endl;
	}

	try{
		std::vector<int>::iterator it;
		it = easyfind(vect, 80);
		std::cout << *it << std::endl;

	}catch(std::exception &ex){
		std::cout << ex.what() << std::endl;
	}

}