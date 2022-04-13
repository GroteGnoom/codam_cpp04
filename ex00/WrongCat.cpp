#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "WrongCat contructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat& cat) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat& cat) {
	type = cat.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow!" << std::endl;
}
