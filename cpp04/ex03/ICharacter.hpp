#pragma once
#include <iostream>
#include <cstring>
#include "AMateria.hpp"
class AMateria;


class ICharacter
{
	public:
		ICharacter();
		virtual ~ICharacter();
		ICharacter(ICharacter const & clone);
		ICharacter& operator=(ICharacter const & clone);
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};