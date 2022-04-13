#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& animal);
		WrongAnimal &operator=(const WrongAnimal& animal);
		void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};

#endif
