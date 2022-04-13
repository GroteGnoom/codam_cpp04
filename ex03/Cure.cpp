#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure contructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
};

Cure::Cure(const Cure& cure) : AMateria("cure") {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = cure;
}

Cure &Cure::operator=(const Cure& cure) {
	(void)cure;
	return *this;
}

void Cure::use(ICharacter &c) const {
	std::cout << " * heals " << c.getName() << "'s wounds *" << std::endl;
}

Cure *Cure::clone() const {
	return new Cure(*this);
}
