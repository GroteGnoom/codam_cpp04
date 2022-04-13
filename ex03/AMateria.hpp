#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "Character.hpp"
#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &amateria);
		AMateria &operator=(const AMateria &amateria);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) const;
};
#endif
