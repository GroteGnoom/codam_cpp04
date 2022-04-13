#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure &cure);
		Cure &operator=(const Cure &cure);
		std::string const & getType() const; //Returns the materia type
		Cure* clone() const;
		void use(ICharacter& target) const;
};
#endif
