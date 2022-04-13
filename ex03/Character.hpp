#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const &name);
		~Character();
		Character(const Character& icharacter);
		Character &operator=(const Character& icharacter);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string _name;
		AMateria *_inventory[4];
		AMateria **_old_inventory;
		int _old_inventory_size;
};

#endif
