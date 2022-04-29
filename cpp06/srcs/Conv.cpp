#include "Conv.hpp"

Conv::Conv( void ) {}

Conv::Conv( const Conv & src )
{
	*this = src;
}

Conv & Conv::operator=( const Conv & rhs )
{
	return *this;
}

Conv::~Conv( void ) {}