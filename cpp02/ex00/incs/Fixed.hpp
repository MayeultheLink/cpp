#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed {

public :

	Fixed();
	Fixed( Fixed const & src );
	~Fixed();

	Fixed & operator=( Fixed const & rhs );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private :

	int _n;
	static int const _b = 8;

};

#endif
