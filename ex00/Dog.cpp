#include "Dog.hpp"
#include <iostream>

//can't do : type("dog"):
//https://stackoverflow.com/questions/18479295/member-initializer-does-not-name-a-non-static-data-member-or-base-class/18479406#18479406

Dog::Dog() {
	std::cout << "Dog contructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
};

Dog::Dog(const Dog& dog) {
	std::cout << "Dog copy contructor called" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog& dog) {
	type = dog.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
