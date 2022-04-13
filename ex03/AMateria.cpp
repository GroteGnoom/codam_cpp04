#include "AMateria.hpp"
#include <iostream>

std::string const &AMateria::getType() const {
	return type;
}

AMateria::AMateria(std::string const &type) : type(type) {
	std::cout << "AMateria contructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
};

AMateria::AMateria(const AMateria& amateria) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = amateria;
}

AMateria &AMateria::operator=(const AMateria& amateria) {
	type = amateria.getType();
	return *this;
}

void AMateria::use(ICharacter& target) const {
	std::cout << " * uses materia on " << target.getName() << " *" << std::endl;
}

