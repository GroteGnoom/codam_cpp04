#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain contructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
};

Brain::Brain(const Brain& brain) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain& brain) {
	for (int i = 0; i < 100; i++) {
		ideas[i] = brain.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, std::string idea) {
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) {
	return ideas[index];
}
