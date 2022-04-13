#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice &ice);
		Ice &operator=(const Ice &ice);
		std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter& target) const;
};
#endif
