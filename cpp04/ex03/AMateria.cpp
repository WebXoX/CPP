#include "AMateria.hpp"

AMateria::AMateria()
{
}
AMateria::AMateria(std::string const & type)
{
	this->type = type;
}
AMateria::AMateria(AMateria const & clone)
{
	*this = clone;
}
AMateria& AMateria::operator=(AMateria const & clone)
{
	this->type = clone.type;
	return *this;
}
std::string const & AMateria::getType() const
{
	return this->type;
}