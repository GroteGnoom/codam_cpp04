#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& cat);
		Cat &operator=(const Cat& cat);
		void makeSound() const;
		void setIdea(int index, std::string idea);
		std::string getIdea(int index);
	private:
		Brain *brain;
};

#endif
