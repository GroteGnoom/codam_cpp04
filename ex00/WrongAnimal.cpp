#include "WrongAnimal.hpp"
#include <iostream>

std::string WrongAnimal::getType() const {
	return type;
}

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal contructor called" << std::endl;
	type = "Very mysterious animal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& animal) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& animal) {
	type = animal.getType();
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Bleeeh!" << std::endl;
}
