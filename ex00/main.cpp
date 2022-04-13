#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main() {
	Dog dog1;
	Dog dog2(dog1);

	dog1.makeSound();
	dog2.makeSound();

	Cat cat1;
	Cat cat2(cat1);

	cat1.makeSound();
	cat2.makeSound();

	const Animal* meta = new Animal();
   	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound(); //will output wrong cat sound

	delete meta;
	delete j;
	delete i;
	delete k;
}

