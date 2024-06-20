#pragma once
#include <iostream>
#include <cstring>
#include "ICharacter.hpp"
class AMateria;


class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria* _materia[4];
	public:
		Character();
		Character(std::string name);
		virtual ~Character();
		Character(Character const & clone);
		Character& operator=(Character const & clone);
		virtual std::string const & getName() const ;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, Character& target);
};