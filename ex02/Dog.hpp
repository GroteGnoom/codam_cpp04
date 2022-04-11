#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& dog);
		Dog &operator=(const Dog& dog);
		//https://stackoverflow.com/questions/2957984/why-i-have-to-redeclare-a-virtual-function-while-overriding-c/2958064#2958064
		void makeSound() const;
};

#endif
