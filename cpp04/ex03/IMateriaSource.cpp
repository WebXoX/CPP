#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {}
IMateriaSource::~IMateriaSource() {}
IMateriaSource::IMateriaSource(IMateriaSource const & clone)
{
	*this = clone;
}
IMateriaSource& IMateriaSource::operator=(IMateriaSource const & clone)
{
	*this = clone;
	return *this;
}
