#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& dog);
		Animal &operator=(const Animal& dog);
		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};

#endif
