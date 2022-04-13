#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		_inventory[i] = nullptr;
	}
	_old_inventory_size = 0;
	_old_inventory = nullptr;
	std::cout << "Character contructor called" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
	}
	for (int i = 0; i < _old_inventory_size; i++) {
		delete _old_inventory[i];
	}
	delete[] _old_inventory;
	std::cout << "Character destructor called" << std::endl;
};

Character::Character(const Character& icharacter) {
	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
		_inventory[i] = icharacter._inventory[i];
	}
	std::cout << "Character copy constructor called" << std::endl;
	_name = icharacter._name;
}

Character &Character::operator=(const Character& icharacter) {
	_name = icharacter.getName();
	return *this;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (!_old_inventory_size) {
		_old_inventory = new AMateria*[1];
		_old_inventory_size = 1;
		_old_inventory[0] = _inventory[idx];
	} else {
		AMateria **tmp_old_inventory = new AMateria*[_old_inventory_size + 1];
		for (int i = 0; i < _old_inventory_size; i ++) {
			tmp_old_inventory[i] = _old_inventory[i];
		}
		delete[] _old_inventory;
		_old_inventory = tmp_old_inventory;
		_old_inventory[_old_inventory_size] = _inventory[idx];
		
		_old_inventory_size++ ;
	}
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	_inventory[idx]->use(target);
}

std::string const & Character::getName() const {
	return _name;
}
