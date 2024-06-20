#pragma once
#include <iostream>
#include <cstring>
#include "AMateria.hpp"
class ICharacter;
class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(std::string const & type);
		Cure(Cure const & clone);
		Cure& operator=(Cure const & clone);
		Cure* clone() const ;
		void use(ICharacter& target);
};