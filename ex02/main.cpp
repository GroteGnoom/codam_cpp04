#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
	std::cout << " -------making sounds ------ " << std::endl;
	Dog dog1;
	Dog dog2(dog1);

	dog1.makeSound();
	dog2.makeSound();

	Cat cat1;
	Cat cat2(cat1);

	cat1.makeSound();
	cat2.makeSound();

	std::cout << " ------making sounds from animal pointers ------- " << std::endl;
   	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << " ------ deleting ------- " << std::endl;
	delete j;
	delete i;

	std::cout << " ------------- " << std::endl;
	cat1.setIdea(0, "cat1 idea");
	cat2.setIdea(0, "cat2 idea");
	cat1.getIdea(0);
	cat2.getIdea(0);
}

