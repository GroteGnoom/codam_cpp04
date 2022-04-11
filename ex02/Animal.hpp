#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <string>

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& dog);
		Animal &operator=(const Animal& dog);
		virtual void makeSound() const = 0;
		std::string getType() const;
		void setIdea(int index, std::string idea);
		void getIdea(int index);
	protected:
		std::string type;
		Brain *brain;
};

#endif
