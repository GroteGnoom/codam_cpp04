#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat contructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
};

Cat::Cat(const Cat& cat) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat& cat) {
	type = cat.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
