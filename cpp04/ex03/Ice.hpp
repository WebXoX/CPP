#pragma once
#include <iostream>
#include <cstring>
#include "AMateria.hpp"
class ICharacter;
class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string const & type);
		virtual ~Ice();
		Ice(Ice const & clone);
		Ice& operator=(Ice const & clone);
		virtual Ice* clone() const ;
		virtual void use(ICharacter& target);
};