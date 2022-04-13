#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice contructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
};

Ice::Ice(const Ice& ice) : AMateria("ice") {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = ice;
}

Ice &Ice::operator=(const Ice& ice) {
	(void)ice;
	return *this;
}

void Ice::use(ICharacter &c) const {
	std::cout << " * shoots an ice bolt at " << c.getName() << " *" << std::endl;
}

Ice *Ice::clone() const {
	return new Ice(*this);
}
