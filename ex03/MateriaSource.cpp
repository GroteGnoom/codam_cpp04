#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_sources[i] = nullptr;
	}
	std::cout << "MateriaSource contructor called" << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
};

MateriaSource::MateriaSource(const MateriaSource& materiasource) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = materiasource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& materiasource) {
	(void)materiasource;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_sources[i]) {
			_sources[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_sources[i] && _sources[i]->getType() == type) {
			return _sources[i];
		}
	}
	return nullptr;
}
