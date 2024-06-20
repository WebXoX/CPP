#pragma once
#include <iostream>
#include <cstring>
#include "IMateriaSource.hpp"
class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & clone);
		MateriaSource& operator=(MateriaSource const & clone);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};