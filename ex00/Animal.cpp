#include "Animal.hpp"
#include <iostream>

std::string Animal::getType() const {
	return type;
}

Animal::Animal() {
	std::cout << "Animal contructor called" << std::endl;
	type = "Very mysterious animal";
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
};

Animal::Animal(const Animal& animal) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal& animal) {
	type = animal.getType();
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Bleeeh!" << std::endl;
}
