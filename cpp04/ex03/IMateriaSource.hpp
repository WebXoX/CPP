#pragma once
#include <iostream>
#include <cstring>
#include "AMateria.hpp"
class AMateria;

class IMateriaSource
{
	public:
		IMateriaSource();
		IMateriaSource(IMateriaSource const & clone);
		IMateriaSource& operator=(IMateriaSource const & clone);
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};