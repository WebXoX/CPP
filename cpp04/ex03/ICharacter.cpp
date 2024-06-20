#include "ICharacter.hpp"

ICharacter::ICharacter() {}
ICharacter::~ICharacter() {}
ICharacter::ICharacter(ICharacter const & clone)
{
	*this = clone;
}
ICharacter& ICharacter::operator=(ICharacter const & clone)
{
	*this = clone;
	return *this;
}
