#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat contructor called" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
};

Cat::Cat(const Cat& cat) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat& cat) {
	type = cat.getType();
	brain = new Brain(*cat.brain);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, std::string idea) {
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) {
	return brain->getIdea(index);
}
