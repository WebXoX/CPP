#pragma once
#include <iostream>
#include <cstring>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & clone);
		AMateria& operator=(AMateria const & clone);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};