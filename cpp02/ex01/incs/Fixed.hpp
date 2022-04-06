#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed {

public :

	Fixed();
	Fixed( const int n );
	Fixed( const float f );
	Fixed( Fixed const & src );
	~Fixed();

	Fixed & operator=( Fixed const & rhs );

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

private :

	int _n;
	static const int _b = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const & inst );
int ft_pow(int i, int pow);

#endif
